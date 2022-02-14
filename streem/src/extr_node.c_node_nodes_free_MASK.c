
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t strm_int ;
struct TYPE_5__ {size_t len; struct TYPE_5__* data; } ;
typedef TYPE_1__ node_nodes ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__) ;

void
FUNC_2(node_nodes* VAR_0)
{
  strm_int VAR_1;

  for (VAR_1 = 0; VAR_1 < VAR_0->len; VAR_1++)
    FUNC_1(VAR_0->data[VAR_1]);
  FUNC_0(VAR_0->data);
  FUNC_0(VAR_0);
}
