
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct strm_array {scalar_t__ len; int * ptr; int headers; } ;
typedef scalar_t__ strm_value ;
typedef scalar_t__ strm_string ;
typedef int strm_stream ;
typedef int strm_state ;
typedef int strm_int ;
typedef int strm_array ;
struct TYPE_3__ {scalar_t__ type; int value; int key; } ;
typedef TYPE_1__ node_pair ;
struct TYPE_4__ {scalar_t__ len; scalar_t__* data; } ;
typedef TYPE_2__ node_nodes ;
typedef int node ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int ,int ) ;
 scalar_t__* FUNC_3 (int ) ;
 struct strm_array* FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int
FUNC_6(strm_stream* VAR_3, strm_state* VAR_4, node* VAR_5, strm_value VAR_6, uint64_t* VAR_7, strm_int* VAR_8)
{
  node_nodes* VAR_9 = (node_nodes*)VAR_5;
  strm_array VAR_10 = FUNC_5(VAR_6);
  struct strm_array* VAR_11 = FUNC_4(VAR_10);
  strm_value* VAR_12;

  if (!VAR_11->headers) return VAR_1;
  if (VAR_9->len > VAR_11->len) return VAR_1;
  VAR_12 = FUNC_3(VAR_11->headers);
  for (int VAR_13=0; VAR_13<VAR_9->len; VAR_13++) {
    node_pair* VAR_14 = (node_pair*)VAR_9->data[VAR_13];
    strm_string VAR_15;

    FUNC_0(VAR_14->type == VAR_0);
    VAR_15 = FUNC_1(VAR_14->key);
    for (int VAR_16=0; VAR_13<VAR_11->len; VAR_16++) {
      if (VAR_12[VAR_16] == VAR_15) {
        if (FUNC_2(VAR_3, VAR_4, VAR_14->value, VAR_11->ptr[VAR_16]) == VAR_1)
          return VAR_1;
        if (VAR_7) {
          uint64_t VAR_17 = 1<<(VAR_16%64);
          if (VAR_7[VAR_16/64] & VAR_17) (*VAR_8)--;
          VAR_7[VAR_16/64] |= VAR_17;
        }
        break;
      }
    }
  }
  return VAR_2;
}
