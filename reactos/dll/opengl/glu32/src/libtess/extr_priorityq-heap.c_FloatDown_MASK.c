
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {long node; int key; } ;
struct TYPE_6__ {size_t handle; } ;
struct TYPE_5__ {long size; long max; TYPE_3__* handles; TYPE_2__* nodes; } ;
typedef TYPE_1__ PriorityQ ;
typedef TYPE_2__ PQnode ;
typedef TYPE_3__ PQhandleElem ;
typedef size_t PQhandle ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2( PriorityQ *VAR_0, long VAR_1 )
{
  PQnode *VAR_2 = VAR_0->nodes;
  PQhandleElem *VAR_3 = VAR_0->handles;
  PQhandle VAR_4, VAR_5;
  long VAR_6;

  VAR_4 = VAR_2[VAR_1].handle;
  for( ;; ) {
    VAR_6 = VAR_1 << 1;
    if( VAR_6 < VAR_0->size && FUNC_0( VAR_3[VAR_2[VAR_6+1].handle].key,
     VAR_3[VAR_2[VAR_6].handle].key )) {
      ++VAR_6;
    }

    FUNC_1(VAR_6 <= VAR_0->max);

    VAR_5 = VAR_2[VAR_6].handle;
    if( VAR_6 > VAR_0->size || FUNC_0( VAR_3[VAR_4].key, VAR_3[VAR_5].key )) {
      VAR_2[VAR_1].handle = VAR_4;
      VAR_3[VAR_4].node = VAR_1;
      break;
    }
    VAR_2[VAR_1].handle = VAR_5;
    VAR_3[VAR_5].node = VAR_1;
    VAR_1 = VAR_6;
  }
}
