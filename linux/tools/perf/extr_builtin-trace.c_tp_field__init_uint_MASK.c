
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tp_field {int dummy; } ;
struct tep_format_field {int offset; int size; } ;


 int FUNC_0 (struct tp_field*,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct tp_field *VAR_0, struct tep_format_field *VAR_1, bool VAR_2)
{
 return FUNC_0(VAR_0, VAR_1->size, VAR_1->offset, VAR_2);
}
