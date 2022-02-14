
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct write_block {int ptr; int len; TYPE_1__* current; } ;
struct TYPE_2__ {scalar_t__ buffer; struct TYPE_2__* next; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (scalar_t__,char const*,int) ;

__attribute__((used)) inline static void
FUNC_2(struct write_block *VAR_1, const void *VAR_2, int VAR_3) {
 const char * VAR_4 = VAR_2;
 if (VAR_1->ptr == VAR_0) {
_again:
  VAR_1->current = VAR_1->current->next = FUNC_0();
  VAR_1->ptr = 0;
 }
 if (VAR_1->ptr <= VAR_0 - VAR_3) {
  FUNC_1(VAR_1->current->buffer + VAR_1->ptr, VAR_4, VAR_3);
  VAR_1->ptr+=VAR_3;
  VAR_1->len+=VAR_3;
 } else {
  int VAR_5 = VAR_0 - VAR_1->ptr;
  FUNC_1(VAR_1->current->buffer + VAR_1->ptr, VAR_4, VAR_5);
  VAR_4 += VAR_5;
  VAR_1->len += VAR_5;
  VAR_3 -= VAR_5;
  goto _again;
 }
}
