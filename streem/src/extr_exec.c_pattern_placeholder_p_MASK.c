
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* node_string ;
struct TYPE_3__ {int len; char* buf; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(node_string VAR_2){
  if (VAR_2->len == 1 && VAR_2->buf[0] == '_')
    return VAR_1;
  return VAR_0;
}
