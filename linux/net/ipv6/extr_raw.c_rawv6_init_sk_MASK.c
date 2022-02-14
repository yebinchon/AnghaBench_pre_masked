
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct raw6_sock {int checksum; int offset; } ;
struct TYPE_2__ {int inet_num; } ;




 TYPE_1__* FUNC_0 (struct sock*) ;
 struct raw6_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_0)
{
 struct raw6_sock *VAR_1 = FUNC_1(VAR_0);

 switch (FUNC_0(VAR_0)->inet_num) {
 case 129:
  VAR_1->checksum = 1;
  VAR_1->offset = 2;
  break;
 case 128:
  VAR_1->checksum = 1;
  VAR_1->offset = 4;
  break;
 default:
  break;
 }
 return 0;
}
