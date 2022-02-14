
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int node_string ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ value; int key; } ;
typedef TYPE_1__ node_pair ;
struct TYPE_5__ {int len; int * headers; scalar_t__* data; } ;
typedef TYPE_2__ node_array ;
typedef int node ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int) ;
 int * FUNC_2 () ;

node*
FUNC_3(node* VAR_1)
{
  int VAR_2;
  node_array* VAR_3;
  node_string* VAR_4 = ((void*)0);

  if (!VAR_1)
    VAR_1 = FUNC_2();
  VAR_3 = (node_array*)VAR_1;
  for (VAR_2 = 0; VAR_2 < VAR_3->len; VAR_2++) {
    node_pair* VAR_5 = (node_pair*)VAR_3->data[VAR_2];
    if (VAR_5 && VAR_5->type == VAR_0) {
      if (!VAR_4) {
        VAR_4 = FUNC_1(sizeof(node_string)*VAR_3->len);
      }
      VAR_4[VAR_2] = VAR_5->key;
      VAR_3->data[VAR_2] = VAR_5->value;
      FUNC_0(VAR_5);
    }
  }
  VAR_3->headers = VAR_4;

  return VAR_1;
}
