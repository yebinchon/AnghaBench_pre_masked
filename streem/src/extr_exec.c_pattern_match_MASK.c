
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int strm_value ;
typedef int strm_stream ;
typedef int strm_state ;
typedef int strm_int ;
struct TYPE_6__ {TYPE_3__* mid; scalar_t__ tail; scalar_t__ head; } ;
typedef TYPE_1__ node_psplat ;
struct TYPE_7__ {int len; TYPE_3__** data; } ;
typedef TYPE_2__ node_nodes ;
struct TYPE_8__ {scalar_t__ type; } ;
typedef TYPE_3__ node ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,TYPE_3__*,int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int
FUNC_2(strm_stream* VAR_3, strm_state* VAR_4, node* VAR_5, int VAR_6, strm_value* VAR_7)
{
  node_nodes* VAR_8 = (node_nodes*)VAR_5;
  int VAR_9;

  if (VAR_8 == ((void*)0)) return VAR_2;
  if (VAR_5->type == VAR_0) {
    node_psplat* VAR_10 = (node_psplat*)VAR_8;
    node_nodes* VAR_11 = (node_nodes*)VAR_10->head;
    node_nodes* VAR_12 = (node_nodes*)VAR_10->tail;
    node* VAR_13 = VAR_10->mid;
    strm_int VAR_14 = VAR_11 ? VAR_11->len : 0;

    if (VAR_6 < VAR_14) return VAR_1;
    if (VAR_11) {
      if (FUNC_2(VAR_3, VAR_4, (node*)VAR_11, VAR_14, VAR_7) == VAR_1)
        return VAR_1;
    }
    if (VAR_12 == ((void*)0)) {
      if (FUNC_0(VAR_3, VAR_4, VAR_13, FUNC_1(VAR_7+VAR_14, VAR_6-VAR_14)) == VAR_1)
        return VAR_1;
    }
    else {
      if (VAR_6 < VAR_14+VAR_12->len) return VAR_1;
      if (FUNC_2(VAR_3, VAR_4, VAR_13, VAR_6-VAR_14-VAR_12->len, VAR_7+VAR_14) == VAR_1)
        return VAR_1;
      if (FUNC_2(VAR_3, VAR_4, (node*)VAR_12, VAR_12->len, VAR_7+VAR_6-VAR_12->len) == VAR_1)
        return VAR_1;
    }
    return VAR_2;
  }
  if (VAR_8->len != VAR_6) return VAR_1;
  for (VAR_9=0; VAR_9<VAR_8->len; VAR_9++) {
    if (FUNC_0(VAR_3, VAR_4, VAR_8->data[VAR_9], VAR_7[VAR_9]) == VAR_1)
      return VAR_1;
  }
  return VAR_2;
}
