
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fd; } ;
struct TYPE_7__ {TYPE_1__ sock; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_2__*,int *) ;
 int FUNC_1 (int,int ,void (*) (void*,void*),TYPE_2__*,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, void *VAR_3)
{
 if (FUNC_2(VAR_0, ((void*)0))) {
  FUNC_1(1, 0, FUNC_3, VAR_0, ((void*)0));
  return;
 }

 FUNC_0(VAR_0->sock.fd, VAR_1, VAR_0, ((void*)0));
}
