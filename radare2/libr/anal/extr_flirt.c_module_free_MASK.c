
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* free; } ;
struct TYPE_5__ {TYPE_2__* referenced_functions; TYPE_2__* tail_bytes; TYPE_2__* public_functions; } ;
typedef void* RListFree ;
typedef TYPE_1__ RFlirtModule ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(RFlirtModule *VAR_0) {
 if (!VAR_0) {
  return;
 }
 if (VAR_0->public_functions) {
  VAR_0->public_functions->free = (RListFree) FUNC_0;
  FUNC_1 (VAR_0->public_functions);
 }
 if (VAR_0->tail_bytes) {
  VAR_0->tail_bytes->free = (RListFree) FUNC_0;
  FUNC_1 (VAR_0->tail_bytes);
 }
 if (VAR_0->referenced_functions) {
  VAR_0->referenced_functions->free = (RListFree) FUNC_0;
  FUNC_1 (VAR_0->referenced_functions);
 }
 FUNC_0 (VAR_0);
}
