
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ud_operand {int size; void* scale; void* index; void* base; int type; } ;
struct ud {int adr_mode; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ud*,int ,struct ud_operand*) ;
 int FUNC_1 (struct ud*,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct ud *VAR_2, unsigned int VAR_3, struct ud_operand *VAR_4)
{
  VAR_4->type = VAR_1;
  VAR_4->base = VAR_0;
  VAR_4->index = VAR_0;
  VAR_4->scale = VAR_0;
  VAR_4->size = FUNC_1(VAR_2, VAR_3);
  FUNC_0(VAR_2, VAR_2->adr_mode, VAR_4);
}
