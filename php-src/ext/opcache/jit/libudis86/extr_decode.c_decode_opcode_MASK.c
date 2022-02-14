
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct ud {TYPE_1__* le; } ;
struct TYPE_2__ {scalar_t__ type; int * table; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ud*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct ud*,int ) ;
 size_t FUNC_3 (struct ud*) ;

__attribute__((used)) static int
FUNC_4(struct ud *VAR_1)
{
  uint16_t VAR_2;
  FUNC_0(VAR_1->le->type == VAR_0);
  FUNC_1(VAR_1);
  VAR_2 = VAR_1->le->table[FUNC_3(VAR_1)];
  return FUNC_2(VAR_1, VAR_2);
}
