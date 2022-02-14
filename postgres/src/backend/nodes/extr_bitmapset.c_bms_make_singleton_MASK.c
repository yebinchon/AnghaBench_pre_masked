
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bitmapword ;
struct TYPE_3__ {int nwords; int* words; } ;
typedef TYPE_1__ Bitmapset ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ) ;

Bitmapset *
FUNC_5(int VAR_1)
{
 Bitmapset *VAR_2;
 int VAR_3,
    VAR_4;

 if (VAR_1 < 0)
  FUNC_3(VAR_0, "negative bitmapset member not allowed");
 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = FUNC_1(VAR_1);
 VAR_2 = (Bitmapset *) FUNC_4(FUNC_0(VAR_3 + 1));
 VAR_2->nwords = VAR_3 + 1;
 VAR_2->words[VAR_3] = ((bitmapword) 1 << VAR_4);
 return VAR_2;
}
