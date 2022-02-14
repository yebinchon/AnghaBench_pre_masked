
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbuffer {scalar_t__ curr; scalar_t__ next; scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kbuffer*) ;

__attribute__((used)) static int FUNC_1(struct kbuffer *VAR_2)
{
 int VAR_3;

 do {
  VAR_2->curr = VAR_2->next;
  if (VAR_2->next >= VAR_2->size)
   return -1;
  VAR_3 = FUNC_0(VAR_2);
 } while (VAR_3 == VAR_1 || VAR_3 == VAR_0);

 return 0;
}
