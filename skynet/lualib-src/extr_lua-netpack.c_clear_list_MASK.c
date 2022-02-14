
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* buffer; } ;
struct uncomplete {struct uncomplete* next; TYPE_1__ pack; } ;


 int FUNC_0 (void*) ;

__attribute__((used)) static void
FUNC_1(struct uncomplete * VAR_0) {
 while (VAR_0) {
  FUNC_0(VAR_0->pack.buffer);
  void * VAR_1 = VAR_0;
  VAR_0 = VAR_0->next;
  FUNC_0(VAR_1);
 }
}
