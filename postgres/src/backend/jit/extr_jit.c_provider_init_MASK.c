
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* JitProviderInit ) (int *) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 char* VAR_4 ;
 scalar_t__ FUNC_2 (char*,char*,int,int *) ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (char*,int,char*,char*,char*,int ) ;

__attribute__((used)) static bool
FUNC_4(void)
{
 char VAR_9[VAR_2];
 JitProviderInit VAR_10;


 if (!VAR_3)
  return 0;





 if (VAR_7)
  return 0;
 if (VAR_8)
  return 1;






 FUNC_3(VAR_9, VAR_2, "%s/%s%s", VAR_5, VAR_4, VAR_1);
 FUNC_0(VAR_0, "probing availability of JIT provider at %s", VAR_9);
 if (!FUNC_1(VAR_9))
 {
  FUNC_0(VAR_0,
    "provider not available, disabling JIT for current session");
  VAR_7 = 1;
  return 0;
 }
 VAR_7 = 1;


 VAR_10 = (JitProviderInit)
  FUNC_2(VAR_9, "_PG_jit_provider_init", 1, ((void*)0));
 VAR_10(&VAR_6);

 VAR_8 = 1;
 VAR_7 = 0;

 FUNC_0(VAR_0, "successfully loaded JIT provider in current session");

 return 1;
}
