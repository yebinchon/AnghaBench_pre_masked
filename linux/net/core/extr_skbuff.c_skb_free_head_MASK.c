
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* head; scalar_t__ head_frag; } ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0)
{
 unsigned char *VAR_1 = VAR_0->head;

 if (VAR_0->head_frag)
  FUNC_1(VAR_1);
 else
  FUNC_0(VAR_1);
}
