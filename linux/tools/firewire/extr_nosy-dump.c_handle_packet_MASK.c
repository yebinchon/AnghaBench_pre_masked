
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct phy_packet {int dummy; } ;
struct TYPE_3__ {size_t tcode; } ;
struct link_packet {TYPE_1__ common; } ;
struct TYPE_4__ {int type; } ;






 int FUNC_0 () ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,size_t) ;
 TYPE_2__* VAR_0 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(uint32_t *VAR_1, size_t VAR_2)
{
 if (VAR_2 == 0) {
  FUNC_3("bus reset\r\n");
  FUNC_0();
 } else if (VAR_2 > sizeof(struct phy_packet)) {
  struct link_packet *VAR_3 = (struct link_packet *) VAR_1;

  switch (VAR_0[VAR_3->common.tcode].type) {
  case 130:
   return FUNC_1(VAR_1, VAR_2);

  case 128:
   return FUNC_2(VAR_1, VAR_2);

  case 131:
  case 129:
   return 0;
  }
 }

 return 1;
}
