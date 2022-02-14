
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int dummy; } ;
struct arcp {size_t co; struct sset* ss; int member_1; int * member_0; } ;
struct sset {int flags; int * lastseen; struct arcp* inchain; struct sset** outs; struct arcp ins; } ;
struct dfa {int ncolors; int * lastnopr; int * lastpost; struct sset* ssets; } ;
typedef size_t color ;
typedef int chr ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 struct sset* FUNC_2 (struct vars*,struct dfa*,int *,int *) ;

__attribute__((used)) static struct sset *
FUNC_3(struct vars *VAR_3,
    struct dfa *VAR_4,
    chr *VAR_5,
    chr *VAR_6)
{
 int VAR_7;
 struct sset *VAR_8;
 struct sset *VAR_9;
 struct arcp VAR_10;
 color VAR_11;

 VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8 == ((void*)0))
  return ((void*)0);
 FUNC_1(!(VAR_8->flags & VAR_0));


 VAR_10 = VAR_8->ins;
 while ((VAR_9 = VAR_10.ss) != ((void*)0))
 {
  VAR_11 = VAR_10.co;
  FUNC_0(("zapping c%d's %ld outarc\n", (int) (VAR_9 - VAR_4->ssets), (long) VAR_11));
  VAR_9->outs[VAR_11] = ((void*)0);
  VAR_10 = VAR_9->inchain[VAR_11];
  VAR_9->inchain[VAR_11].ss = ((void*)0);
 }
 VAR_8->ins.ss = ((void*)0);


 for (VAR_7 = 0; VAR_7 < VAR_4->ncolors; VAR_7++)
 {
  VAR_9 = VAR_8->outs[VAR_7];
  FUNC_1(VAR_9 != VAR_8);
  if (VAR_9 == ((void*)0))
   continue;
  FUNC_0(("del outarc %d from c%d's in chn\n", VAR_7, (int) (VAR_9 - VAR_4->ssets)));
  if (VAR_9->ins.ss == VAR_8 && VAR_9->ins.co == VAR_7)
   VAR_9->ins = VAR_8->inchain[VAR_7];
  else
  {
   struct arcp VAR_12 = {((void*)0), 0};

   FUNC_1(VAR_9->ins.ss != ((void*)0));
   for (VAR_10 = VAR_9->ins; VAR_10.ss != ((void*)0) &&
     !(VAR_10.ss == VAR_8 && VAR_10.co == VAR_7);
     VAR_10 = VAR_10.ss->inchain[VAR_10.co])
    VAR_12 = VAR_10;
   FUNC_1(VAR_10.ss != ((void*)0));
   VAR_12.ss->inchain[VAR_12.co] = VAR_8->inchain[VAR_7];
  }
  VAR_8->outs[VAR_7] = ((void*)0);
  VAR_8->inchain[VAR_7].ss = ((void*)0);
 }


 if ((VAR_8->flags & VAR_2) && VAR_8->lastseen != VAR_4->lastpost &&
  (VAR_4->lastpost == ((void*)0) || VAR_4->lastpost < VAR_8->lastseen))
  VAR_4->lastpost = VAR_8->lastseen;


 if ((VAR_8->flags & VAR_1) && VAR_8->lastseen != VAR_4->lastnopr &&
  (VAR_4->lastnopr == ((void*)0) || VAR_4->lastnopr < VAR_8->lastseen))
  VAR_4->lastnopr = VAR_8->lastseen;

 return VAR_8;
}
