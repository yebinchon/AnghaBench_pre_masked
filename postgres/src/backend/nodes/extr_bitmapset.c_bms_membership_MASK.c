
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ bitmapword ;
struct TYPE_3__ {int nwords; scalar_t__* words; } ;
typedef TYPE_1__ Bitmapset ;
typedef scalar_t__ BMS_Membership ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

BMS_Membership
FUNC_1(const Bitmapset *VAR_3)
{
 BMS_Membership VAR_4 = VAR_0;
 int VAR_5;
 int VAR_6;

 if (VAR_3 == ((void*)0))
  return VAR_0;
 VAR_5 = VAR_3->nwords;
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  bitmapword VAR_7 = VAR_3->words[VAR_6];

  if (VAR_7 != 0)
  {
   if (VAR_4 != VAR_0 || FUNC_0(VAR_7))
    return VAR_1;
   VAR_4 = VAR_2;
  }
 }
 return VAR_4;
}
