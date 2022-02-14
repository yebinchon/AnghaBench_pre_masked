
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proto {scalar_t__ recvmsg; scalar_t__ sendmsg; scalar_t__ sendpage; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(struct proto *VAR_4)
{




 return VAR_4->recvmsg == VAR_1 &&
        VAR_4->sendmsg == VAR_2 &&
        VAR_4->sendpage == VAR_3 ? 0 : -VAR_0;
}
