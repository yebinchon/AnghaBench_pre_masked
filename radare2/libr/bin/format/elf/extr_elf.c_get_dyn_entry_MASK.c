
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_7__ {int dyn_entries; TYPE_1__* dyn_buf; } ;
struct TYPE_6__ {int d_ptr; int d_val; } ;
struct TYPE_5__ {int d_tag; TYPE_2__ d_un; } ;
typedef TYPE_3__ ELFOBJ ;
 int FUNC_0 () ;

__attribute__((used)) static ut64 FUNC_1(ELFOBJ *VAR_0, int VAR_1) {
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->dyn_entries; VAR_2++) {
  if (VAR_0->dyn_buf[VAR_2].d_tag == VAR_1) {
   switch (VAR_0->dyn_buf[VAR_2].d_tag) {
   case 131:
   case 130:
   case 133:
   case 134:
    return VAR_0->dyn_buf[VAR_2].d_un.d_ptr;
   case 128:
   case 129:
   case 132:
    return VAR_0->dyn_buf[VAR_2].d_un.d_val;
   default:
    FUNC_0 ();
    break;
   }
  }
 }

 return -1;
}
