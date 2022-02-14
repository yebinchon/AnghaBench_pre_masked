
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {struct chunk* header; } ;
struct chunk {struct chunk* next; } ;


 int FUNC_0 (struct chunk*) ;

__attribute__((used)) static void
FUNC_1(struct pool *VAR_0) {
 struct chunk * VAR_1 = VAR_0->header;
 while (VAR_1) {
  struct chunk * VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
}
