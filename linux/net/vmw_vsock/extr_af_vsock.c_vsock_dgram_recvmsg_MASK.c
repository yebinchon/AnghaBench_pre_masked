
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int sk; } ;
struct msghdr {int dummy; } ;
struct TYPE_2__ {int (* dgram_dequeue ) (int ,struct msghdr*,size_t,int) ;} ;


 int FUNC_0 (int ,struct msghdr*,size_t,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_1, struct msghdr *VAR_2,
          size_t VAR_3, int VAR_4)
{
 return VAR_0->dgram_dequeue(FUNC_1(VAR_1->sk), VAR_2, VAR_3, VAR_4);
}
