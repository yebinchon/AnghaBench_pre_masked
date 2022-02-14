
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; } ;
struct TYPE_5__ {TYPE_1__ sock; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(void)
{
 VAR_1--;
 if (!VAR_0)
  return;

 if (VAR_1)
  return;

 FUNC_0(VAR_0->sock.fd);
 FUNC_1(VAR_0);
 VAR_0 = ((void*)0);
}
