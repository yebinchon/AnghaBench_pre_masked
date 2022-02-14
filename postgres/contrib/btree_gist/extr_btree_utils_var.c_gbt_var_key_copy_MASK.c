
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_3__ {int upper; int lower; } ;
typedef TYPE_1__ GBT_VARKEY_R ;
typedef int GBT_VARKEY ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

GBT_VARKEY *
FUNC_6(const GBT_VARKEY_R *VAR_1)
{
 int32 VAR_2 = FUNC_3(VAR_1->lower);
 int32 VAR_3 = FUNC_3(VAR_1->upper);
 GBT_VARKEY *VAR_4;

 VAR_4 = (GBT_VARKEY *) FUNC_5(FUNC_0(VAR_2) + VAR_3 + VAR_0);
 FUNC_4(FUNC_2(VAR_4), VAR_1->lower, VAR_2);
 FUNC_4(FUNC_2(VAR_4) + FUNC_0(VAR_2), VAR_1->upper, VAR_3);
 FUNC_1(VAR_4, FUNC_0(VAR_2) + VAR_3 + VAR_0);

 return VAR_4;
}
