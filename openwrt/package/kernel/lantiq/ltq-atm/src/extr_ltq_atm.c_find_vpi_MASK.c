
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int conn_table; TYPE_2__* conn; } ;
struct TYPE_5__ {TYPE_1__* vcc; } ;
struct TYPE_4__ {unsigned int vpi; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(unsigned int VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;

 for ( VAR_3 = 0, VAR_4 = 1; VAR_3 < VAR_0; VAR_3++, VAR_4 <<= 1 ) {
  if ( (VAR_1.conn_table & VAR_4) != 0
    && VAR_1.conn[VAR_3].vcc != ((void*)0)
    && VAR_2 == VAR_1.conn[VAR_3].vcc->vpi )
   return VAR_3;
 }

 return -1;
}
