
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_format_field {struct tep_format_field* next; } ;


 int FUNC_0 (struct tep_format_field*) ;

__attribute__((used)) static void FUNC_1(struct tep_format_field *VAR_0)
{
 struct tep_format_field *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0->next;
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
}
