
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ssl; } ;
typedef TYPE_1__ Port ;


 int FUNC_0 (scalar_t__,int*) ;

int
FUNC_1(Port *VAR_0)
{
 int VAR_1;

 if (VAR_0->ssl)
 {
  FUNC_0(VAR_0->ssl, &VAR_1);
  return VAR_1;
 }
 else
  return 0;
}
