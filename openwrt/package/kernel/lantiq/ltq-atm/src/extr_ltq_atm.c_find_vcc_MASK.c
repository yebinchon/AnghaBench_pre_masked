
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct atm_vcc {int dummy; } ;
struct TYPE_4__ {unsigned int conn_table; TYPE_1__* conn; } ;
struct TYPE_3__ {struct atm_vcc* vcc; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct atm_vcc *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;

 for ( VAR_3 = 0, VAR_4 = 1; VAR_3 < VAR_0; VAR_3++, VAR_4 <<= 1 ) {
  if ( (VAR_1.conn_table & VAR_4) != 0
   && VAR_1.conn[VAR_3].vcc == VAR_2 )
  return VAR_3;
 }

 return -1;
}
