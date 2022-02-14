
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {TYPE_1__ v4; } ;
struct cidr {TYPE_2__ addr; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static bool FUNC_2(struct cidr *VAR_1)
{
 uint32_t VAR_2 = FUNC_0(VAR_1->addr.v4.s_addr);

 if (VAR_0)
  FUNC_1(" ");

 if ((VAR_2 >= 0xA9FE0000) && (VAR_2 <= 0xA9FEFFFF))
 {
  FUNC_1("1");
  return 1;
 }
 else
 {
  FUNC_1("0");
  return 0;
 }
}
