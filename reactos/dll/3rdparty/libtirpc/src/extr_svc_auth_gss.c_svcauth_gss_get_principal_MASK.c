
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t length; int value; } ;
struct svc_rpc_gss_data {TYPE_1__ cname; } ;
typedef int SVCAUTH ;


 struct svc_rpc_gss_data* FUNC_0 (int *) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int ,size_t) ;

char *
FUNC_3(SVCAUTH *VAR_0)
{
 struct svc_rpc_gss_data *VAR_1;
 char *VAR_2;

 VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->cname.length == 0)
  return (((void*)0));

 if ((VAR_2 = FUNC_1(VAR_1->cname.length + 1)) == ((void*)0))
  return (((void*)0));

 FUNC_2(VAR_2, VAR_1->cname.value, VAR_1->cname.length);
 VAR_2[VAR_1->cname.length] = '\0';

 return (VAR_2);
}
