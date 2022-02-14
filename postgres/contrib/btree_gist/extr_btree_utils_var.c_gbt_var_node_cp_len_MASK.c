
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_5__ {int eml; } ;
typedef TYPE_1__ gbtree_vinfo ;
struct TYPE_6__ {int upper; int lower; } ;
typedef TYPE_2__ GBT_VARKEY_R ;
typedef int GBT_VARKEY ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 char* FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__ FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static int32
FUNC_5(const GBT_VARKEY *VAR_1, const gbtree_vinfo *VAR_2)
{
 GBT_VARKEY_R VAR_3 = FUNC_3(VAR_1);
 int32 VAR_4 = 0;
 int32 VAR_5 = 0;
 int32 VAR_6 = FUNC_2(VAR_3.lower) - VAR_0;
 int32 VAR_7 = FUNC_2(VAR_3.upper) - VAR_0;
 int32 VAR_8 = FUNC_0(VAR_6, VAR_7);
 char *VAR_9 = FUNC_1(VAR_3.lower);
 char *VAR_10 = FUNC_1(VAR_3.upper);

 if (VAR_8 == 0)
  return 0;

 while (VAR_4 < VAR_8)
 {
  if (VAR_2->eml > 1 && VAR_5 == 0)
  {
   if ((VAR_5 = FUNC_4(VAR_9)) != FUNC_4(VAR_10))
   {
    return VAR_4;
   }
  }
  if (*VAR_9 != *VAR_10)
  {
   if (VAR_2->eml > 1)
   {
    return (VAR_4 - VAR_5 + 1);
   }
   else
   {
    return VAR_4;
   }
  }

  VAR_9++;
  VAR_10++;
  VAR_5--;
  VAR_4++;
 }
 return VAR_8;
}
