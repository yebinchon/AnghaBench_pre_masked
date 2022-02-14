
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* shared; int capa; } ;
struct TYPE_7__ {TYPE_1__ aux; int len; int ptr; } ;
struct TYPE_8__ {TYPE_2__ heap; } ;
struct RString {TYPE_3__ as; } ;
typedef int mrb_state ;
struct TYPE_9__ {int refcnt; int capa; int ptr; } ;
typedef TYPE_4__ mrb_shared_string ;


 int FUNC_0 (struct RString*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static struct RString*
FUNC_2(mrb_state *VAR_1, const struct RString *VAR_2, struct RString *VAR_3, mrb_shared_string *VAR_4)
{
  if (VAR_4) {
    VAR_4->refcnt++;
  }
  else {
    VAR_4 = (mrb_shared_string *)FUNC_1(VAR_1, sizeof(mrb_shared_string));
    VAR_4->refcnt = 1;
    VAR_4->ptr = VAR_2->as.heap.ptr;
    VAR_4->capa = VAR_2->as.heap.aux.capa;
  }
  VAR_3->as.heap.ptr = VAR_2->as.heap.ptr;
  VAR_3->as.heap.len = VAR_2->as.heap.len;
  VAR_3->as.heap.aux.shared = VAR_4;
  FUNC_0(VAR_3, VAR_0);
  return VAR_3;
}
