
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * keepalives; } ;
typedef TYPE_1__ PGconn ;


 int FUNC_0 (int *,char**,int) ;

__attribute__((used)) static int
FUNC_1(PGconn *VAR_0)
{
 char *VAR_1;
 int VAR_2;

 if (VAR_0->keepalives == ((void*)0))
  return 1;
 VAR_2 = FUNC_0(VAR_0->keepalives, &VAR_1, 10);
 if (*VAR_1)
  return -1;
 return VAR_2 != 0 ? 1 : 0;
}
