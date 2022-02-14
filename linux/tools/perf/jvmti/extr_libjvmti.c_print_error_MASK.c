
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ jvmtiError ;
typedef TYPE_1__* jvmtiEnv ;
struct TYPE_5__ {scalar_t__ (* GetErrorName ) (TYPE_1__**,scalar_t__,char**) ;int (* Deallocate ) (TYPE_1__**,unsigned char*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__**,scalar_t__,char**) ;
 int FUNC_1 (TYPE_1__**,unsigned char*) ;
 int FUNC_2 (char*,char const*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(jvmtiEnv *VAR_1, const char *VAR_2, jvmtiError VAR_3)
{
 char *VAR_4 = ((void*)0);
 jvmtiError VAR_5;
 VAR_5 = (*VAR_1)->GetErrorName(VAR_1, VAR_3, &VAR_4);
 if (VAR_5 == VAR_0) {
  FUNC_2("%s failed with %s", VAR_2, VAR_4);
  (*VAR_1)->Deallocate(VAR_1, (unsigned char *)VAR_4);
 } else {
  FUNC_2("%s failed with an unknown error %d", VAR_2, VAR_3);
 }
}
