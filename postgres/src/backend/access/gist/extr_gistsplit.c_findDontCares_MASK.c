
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int spl_nleft; int* spl_left; int spl_nright; int* spl_right; int spl_ldatum; int spl_rdatum; } ;
struct TYPE_5__ {int* spl_dontcare; TYPE_1__ splitVector; } ;
typedef int Relation ;
typedef int OffsetNumber ;
typedef TYPE_2__ GistSplitVector ;
typedef int GISTSTATE ;
typedef int GISTENTRY ;


 int FUNC_0 (int ,int ,int ,int *,int ,int) ;
 float FUNC_1 (int *,int,int *,int,int *,int) ;

__attribute__((used)) static int
FUNC_2(Relation VAR_0, GISTSTATE *VAR_1, GISTENTRY *VAR_2,
     GistSplitVector *VAR_3, int VAR_4)
{
 int VAR_5;
 GISTENTRY VAR_6;
 int VAR_7 = 0;
 FUNC_0(VAR_6, VAR_3->splitVector.spl_rdatum, VAR_0, ((void*)0),
      (OffsetNumber) 0, 0);
 for (VAR_5 = 0; VAR_5 < VAR_3->splitVector.spl_nleft; VAR_5++)
 {
  int VAR_8 = VAR_3->splitVector.spl_left[VAR_5];
  float VAR_9 = FUNC_1(VAR_1, VAR_4, &VAR_6, 0,
            &VAR_2[VAR_8], 0);

  if (VAR_9 == 0.0)
  {
   VAR_3->spl_dontcare[VAR_8] = 1;
   VAR_7++;
  }
 }


 FUNC_0(VAR_6, VAR_3->splitVector.spl_ldatum, VAR_0, ((void*)0),
      (OffsetNumber) 0, 0);
 for (VAR_5 = 0; VAR_5 < VAR_3->splitVector.spl_nright; VAR_5++)
 {
  int VAR_10 = VAR_3->splitVector.spl_right[VAR_5];
  float VAR_11 = FUNC_1(VAR_1, VAR_4, &VAR_6, 0,
            &VAR_2[VAR_10], 0);

  if (VAR_11 == 0.0)
  {
   VAR_3->spl_dontcare[VAR_10] = 1;
   VAR_7++;
  }
 }

 return VAR_7;
}
