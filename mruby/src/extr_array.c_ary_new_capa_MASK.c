
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int capa; } ;
struct TYPE_10__ {scalar_t__ len; TYPE_1__ aux; int * ptr; } ;
struct TYPE_11__ {TYPE_2__ heap; } ;
struct RArray {TYPE_3__ as; } ;
typedef int mrb_value ;
struct TYPE_12__ {int array_class; } ;
typedef TYPE_4__ mrb_state ;
typedef int mrb_int ;


 int VAR_0 ;
 int FUNC_0 (struct RArray*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_4__*,size_t) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ,int ) ;
 int FUNC_3 (TYPE_4__*,int ,char*) ;

__attribute__((used)) static struct RArray*
FUNC_4(mrb_state *VAR_4, mrb_int VAR_5)
{
  struct RArray *VAR_6;
  size_t VAR_7;

  if (VAR_5 > VAR_0) {
    FUNC_3(VAR_4, VAR_1, "array size too big");
  }
  VAR_7 = VAR_5 * sizeof(mrb_value);

  VAR_6 = (struct RArray*)FUNC_2(VAR_4, VAR_3, VAR_4->array_class);
  if (VAR_5 <= VAR_2) {
    FUNC_0(VAR_6, 0);
  }
  else {
    VAR_6->as.heap.ptr = (mrb_value *)FUNC_1(VAR_4, VAR_7);
    VAR_6->as.heap.aux.capa = VAR_5;
    VAR_6->as.heap.len = 0;
  }

  return VAR_6;
}
