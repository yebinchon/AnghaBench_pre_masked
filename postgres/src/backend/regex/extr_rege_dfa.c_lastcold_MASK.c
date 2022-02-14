
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int * start; } ;
struct sset {int flags; int * lastseen; } ;
struct dfa {int nssused; struct sset* ssets; int * lastnopr; } ;
typedef int chr ;


 int VAR_0 ;

__attribute__((used)) static chr *
FUNC_0(struct vars *VAR_1,
   struct dfa *VAR_2)
{
 struct sset *VAR_3;
 chr *VAR_4;
 int VAR_5;

 VAR_4 = VAR_2->lastnopr;
 if (VAR_4 == ((void*)0))
  VAR_4 = VAR_1->start;
 for (VAR_3 = VAR_2->ssets, VAR_5 = VAR_2->nssused; VAR_5 > 0; VAR_3++, VAR_5--)
  if ((VAR_3->flags & VAR_0) && VAR_4 < VAR_3->lastseen)
   VAR_4 = VAR_3->lastseen;
 return VAR_4;
}
