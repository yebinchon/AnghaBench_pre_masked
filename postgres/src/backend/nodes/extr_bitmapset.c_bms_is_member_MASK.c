
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bitmapword ;
struct TYPE_3__ {int nwords; int* words; } ;
typedef TYPE_1__ Bitmapset ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;

bool
FUNC_3(int VAR_1, const Bitmapset *VAR_2)
{
 int VAR_3,
    VAR_4;


 if (VAR_1 < 0)
  FUNC_2(VAR_0, "negative bitmapset member not allowed");
 if (VAR_2 == ((void*)0))
  return 0;
 VAR_3 = FUNC_1(VAR_1);
 VAR_4 = FUNC_0(VAR_1);
 if (VAR_3 >= VAR_2->nwords)
  return 0;
 if ((VAR_2->words[VAR_3] & ((bitmapword) 1 << VAR_4)) != 0)
  return 1;
 return 0;
}
