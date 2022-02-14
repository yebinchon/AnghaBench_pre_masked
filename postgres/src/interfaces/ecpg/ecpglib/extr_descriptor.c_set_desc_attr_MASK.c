
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct variable {scalar_t__ type; scalar_t__ value; } ;
struct descriptor_item {int is_binary; char* data; int data_len; } ;
struct ECPGgeneric_varchar {int len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(struct descriptor_item *VAR_1, struct variable *VAR_2,
     char *VAR_3)
{
 if (VAR_2->type != VAR_0)
  VAR_1->is_binary = 0;

 else
 {
  struct ECPGgeneric_varchar *VAR_4 =
  (struct ECPGgeneric_varchar *) (VAR_2->value);

  VAR_1->is_binary = 1;
  VAR_1->data_len = VAR_4->len;
 }

 FUNC_0(VAR_1->data);
 VAR_1->data = (char *) VAR_3;
}
