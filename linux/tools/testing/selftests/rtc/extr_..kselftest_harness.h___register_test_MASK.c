
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __test_metadata {struct __test_metadata* prev; struct __test_metadata* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct __test_metadata* VAR_3 ;

__attribute__((used)) static inline void FUNC_0(struct __test_metadata *VAR_4)
{
 VAR_2++;

 if (VAR_3 == ((void*)0)) {
  VAR_3 = VAR_4;
  VAR_4->next = ((void*)0);
  VAR_4->prev = VAR_4;
  return;
 }
 if (VAR_1 == VAR_0) {
  VAR_4->next = ((void*)0);
  VAR_4->prev = VAR_3->prev;
  VAR_4->prev->next = VAR_4;
  VAR_3->prev = VAR_4;
 } else {
  VAR_4->next = VAR_3;
  VAR_4->next->prev = VAR_4;
  VAR_4->prev = VAR_4;
  VAR_3 = VAR_4;
 }
}
