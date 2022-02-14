
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msghdr {int msg_iovlen; TYPE_1__* msg_iov; } ;
struct TYPE_2__ {struct TYPE_2__* iov_base; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct msghdr *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->msg_iovlen; VAR_1++)
  FUNC_0(VAR_0->msg_iov[VAR_1].iov_base);
 FUNC_0(VAR_0->msg_iov);
 VAR_0->msg_iov = ((void*)0);
 VAR_0->msg_iovlen = 0;
}
