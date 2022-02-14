
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int eflags; } ;
struct sset {int dummy; } ;
struct dfa {unsigned int* statesarea; unsigned int* work; int cptsmalloced; char* mallocarea; int nssets; int nstates; size_t ncolors; int wordsper; struct sset* ssets; struct sset* search; int * lastnopr; int * lastpost; struct colormap* cm; struct cnfa* cnfa; scalar_t__ nssused; struct arcp* incarea; struct sset** outsarea; } ;
struct smalldfa {unsigned int* statesarea; struct arcp* incarea; struct sset** outsarea; struct sset* ssets; struct dfa dfa; } ;
struct colormap {int dummy; } ;
struct cnfa {int nstates; size_t ncolors; } ;
struct arcp {int dummy; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct dfa*) ;

__attribute__((used)) static struct dfa *
FUNC_4(struct vars *VAR_6,
    struct cnfa *VAR_7,
    struct colormap *VAR_8,
    struct smalldfa *VAR_9)
{
 struct dfa *VAR_10;
 size_t VAR_11 = VAR_7->nstates * 2;
 int VAR_12 = (VAR_7->nstates + VAR_4 - 1) / VAR_4;
 struct smalldfa *VAR_13 = VAR_9;

 FUNC_2(VAR_7 != ((void*)0) && VAR_7->nstates != 0);

 if (VAR_11 <= VAR_1 && VAR_7->ncolors <= VAR_0)
 {
  FUNC_2(VAR_12 == 1);
  if (VAR_9 == ((void*)0))
  {
   VAR_9 = (struct smalldfa *) FUNC_1(sizeof(struct smalldfa));
   if (VAR_9 == ((void*)0))
   {
    FUNC_0(VAR_2);
    return ((void*)0);
   }
  }
  VAR_10 = &VAR_9->dfa;
  VAR_10->ssets = VAR_9->ssets;
  VAR_10->statesarea = VAR_9->statesarea;
  VAR_10->work = &VAR_10->statesarea[VAR_11];
  VAR_10->outsarea = VAR_9->outsarea;
  VAR_10->incarea = VAR_9->incarea;
  VAR_10->cptsmalloced = 0;
  VAR_10->mallocarea = (VAR_13 == ((void*)0)) ? (char *) VAR_9 : ((void*)0);
 }
 else
 {
  VAR_10 = (struct dfa *) FUNC_1(sizeof(struct dfa));
  if (VAR_10 == ((void*)0))
  {
   FUNC_0(VAR_2);
   return ((void*)0);
  }
  VAR_10->ssets = (struct sset *) FUNC_1(VAR_11 * sizeof(struct sset));
  VAR_10->statesarea = (unsigned *) FUNC_1((VAR_11 + VAR_5) * VAR_12 *
           sizeof(unsigned));
  VAR_10->work = &VAR_10->statesarea[VAR_11 * VAR_12];
  VAR_10->outsarea = (struct sset **) FUNC_1(VAR_11 * VAR_7->ncolors *
             sizeof(struct sset *));
  VAR_10->incarea = (struct arcp *) FUNC_1(VAR_11 * VAR_7->ncolors *
           sizeof(struct arcp));
  VAR_10->cptsmalloced = 1;
  VAR_10->mallocarea = (char *) VAR_10;
  if (VAR_10->ssets == ((void*)0) || VAR_10->statesarea == ((void*)0) ||
   VAR_10->outsarea == ((void*)0) || VAR_10->incarea == ((void*)0))
  {
   FUNC_3(VAR_10);
   FUNC_0(VAR_2);
   return ((void*)0);
  }
 }

 VAR_10->nssets = (VAR_6->eflags & VAR_3) ? 7 : VAR_11;
 VAR_10->nssused = 0;
 VAR_10->nstates = VAR_7->nstates;
 VAR_10->ncolors = VAR_7->ncolors;
 VAR_10->wordsper = VAR_12;
 VAR_10->cnfa = VAR_7;
 VAR_10->cm = VAR_8;
 VAR_10->lastpost = ((void*)0);
 VAR_10->lastnopr = ((void*)0);
 VAR_10->search = VAR_10->ssets;



 return VAR_10;
}
