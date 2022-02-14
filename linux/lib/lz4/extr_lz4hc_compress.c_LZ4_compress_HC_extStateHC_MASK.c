
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ state ;
struct TYPE_2__ {int internal_donotuse; } ;
typedef TYPE_1__ LZ4_streamHC_t ;
typedef int LZ4HC_CCtx_internal ;
typedef int BYTE ;


 int FUNC_0 (int *,char const*,char*,int,int,int,int ) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(
 void *VAR_2,
 const char *VAR_3,
 char *VAR_4,
 int VAR_5,
 int VAR_6,
 int VAR_7)
{
 LZ4HC_CCtx_internal *VAR_8 = &((LZ4_streamHC_t *)VAR_2)->internal_donotuse;

 if (((size_t)(VAR_2)&(sizeof(void *) - 1)) != 0) {



  return 0;
 }

 FUNC_1(VAR_8, (const BYTE *)VAR_3);

 if (VAR_6 < FUNC_2(VAR_5))
  return FUNC_0(VAR_8, VAR_3, VAR_4,
   VAR_5, VAR_6, VAR_7, VAR_0);
 else
  return FUNC_0(VAR_8, VAR_3, VAR_4,
   VAR_5, VAR_6, VAR_7, VAR_1);
}
