
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_sspi_sec {unsigned char qop; unsigned char svc; unsigned char cred; TYPE_1__* mech; } ;
struct TYPE_2__ {int length; scalar_t__ elements; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;

void FUNC_1(struct rpc_sspi_sec *VAR_1)
{
    int VAR_2;
    char *VAR_3;

 FUNC_0(VAR_0, "rpc_gss_sec:");
 if(VAR_1->mech == ((void*)0))
  FUNC_0(VAR_0, "NULL gss_OID mech");
 else {
  FUNC_0(VAR_0, "     mechanism_OID: {");
  VAR_3 = (char *)VAR_1->mech->elements;
  for (VAR_2=0; VAR_2 < VAR_1->mech->length; VAR_2++)

   if (VAR_2 == 0) {
    int VAR_4, VAR_5;
    if (*VAR_3 < 40) {
     VAR_4 = 0;
     VAR_5 = *VAR_3;
    }
    else if (40 <= *VAR_3 && *VAR_3 < 80) {
     VAR_4 = 1;
     VAR_5 = *VAR_3 - 40;
    }
    else if (80 <= *VAR_3 && *VAR_3 < 127) {
     VAR_4 = 2;
     VAR_5 = *VAR_3 - 80;
    }
    else {

     VAR_4 = -1;
     VAR_5 = -1;
    }
    FUNC_0(VAR_0, " %u %u", VAR_4, VAR_5);
    VAR_3++;
   }
   else {
    FUNC_0(VAR_0, " %u", (unsigned char)*VAR_3++);
   }
  FUNC_0(VAR_0, " }\n");
 }
 FUNC_0(VAR_0, "     qop: %d\n", VAR_1->qop);
 FUNC_0(VAR_0, "     service: %d\n", VAR_1->svc);
 FUNC_0(VAR_0, "     cred: %c\n", VAR_1->cred);
}
