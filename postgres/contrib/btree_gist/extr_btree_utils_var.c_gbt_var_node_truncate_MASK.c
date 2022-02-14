
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
typedef int gbtree_vinfo ;
struct TYPE_3__ {int upper; int lower; } ;
typedef TYPE_1__ GBT_VARKEY_R ;
typedef char GBT_VARKEY ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int) ;
 char* FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 TYPE_1__ FUNC_5 (char const*) ;
 int FUNC_6 (char*,int ,int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static GBT_VARKEY *
FUNC_8(const GBT_VARKEY *VAR_1, int32 VAR_2, const gbtree_vinfo *VAR_3)
{
 GBT_VARKEY *VAR_4 = ((void*)0);
 GBT_VARKEY_R VAR_5 = FUNC_5(VAR_1);
 int32 VAR_6 = FUNC_4(VAR_5.lower) - VAR_0;
 int32 VAR_7 = FUNC_4(VAR_5.upper) - VAR_0;
 int32 VAR_8;
 char *VAR_9;

 VAR_6 = FUNC_1(VAR_6, (VAR_2 + 1));
 VAR_7 = FUNC_1(VAR_7, (VAR_2 + 1));

 VAR_8 = 2 * VAR_0 + FUNC_0(VAR_6 + VAR_0) + VAR_7;
 VAR_4 = (GBT_VARKEY *) FUNC_7(VAR_8);
 FUNC_2(VAR_4, VAR_8);

 FUNC_6(FUNC_3(VAR_4), VAR_5.lower, VAR_6 + VAR_0);
 FUNC_2(FUNC_3(VAR_4), VAR_6 + VAR_0);

 VAR_9 = FUNC_3(VAR_4) + FUNC_0(VAR_6 + VAR_0);
 FUNC_6(VAR_9, VAR_5.upper, VAR_7 + VAR_0);
 FUNC_2(VAR_9, VAR_7 + VAR_0);

 return VAR_4;
}
