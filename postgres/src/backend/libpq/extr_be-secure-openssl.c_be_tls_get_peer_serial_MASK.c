
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ peer; } ;
typedef TYPE_1__ Port ;
typedef int BIGNUM ;
typedef int ASN1_INTEGER ;


 int * FUNC_0 (int *,int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,char*,size_t) ;

void
FUNC_6(Port *VAR_0, char *VAR_1, size_t VAR_2)
{
 if (VAR_0->peer)
 {
  ASN1_INTEGER *VAR_3;
  BIGNUM *VAR_4;
  char *VAR_5;

  VAR_3 = FUNC_4(VAR_0->peer);
  VAR_4 = FUNC_0(VAR_3, ((void*)0));
  VAR_5 = FUNC_1(VAR_4);

  FUNC_2(VAR_4);
  FUNC_5(VAR_1, VAR_5, VAR_2);
  FUNC_3(VAR_5);
 }
 else
  VAR_1[0] = '\0';
}
