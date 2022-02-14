
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffy {struct buffy* next; } ;
struct bufferchain {struct buffy* first; } ;


 int FUNC_0 (struct bufferchain*) ;
 int FUNC_1 (struct bufferchain*,struct buffy*) ;
 int FUNC_2 (struct bufferchain*) ;

__attribute__((used)) static void FUNC_3(struct bufferchain *VAR_0)
{

 while(VAR_0->first)
 {
  struct buffy* VAR_1 = VAR_0->first;
  VAR_0->first = VAR_1->next;
  FUNC_1(VAR_0, VAR_1);
 }
 FUNC_0(VAR_0);
 FUNC_2(VAR_0);
}
