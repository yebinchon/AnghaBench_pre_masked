
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ peer; } ;
typedef TYPE_1__ Port ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ,size_t) ;

void
FUNC_3(Port *VAR_0, char *VAR_1, size_t VAR_2)
{
 if (VAR_0->peer)
  FUNC_2(VAR_1, FUNC_0(FUNC_1(VAR_0->peer)), VAR_2);
 else
  VAR_1[0] = '\0';
}
