
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct variable {int arrsize; int ind_varcharsize; int ind_arrsize; int ind_offset; int * ind_value; int ** ind_pointer; int ind_type; scalar_t__ offset; int * pointer; int value; int varcharsize; int type; } ;
struct statement {int force_indicator; int lineno; } ;
struct descriptor_item {int indicator; int data; int data_len; scalar_t__ is_binary; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,struct variable*,char**,int) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool
FUNC_4(struct statement *VAR_3, struct descriptor_item *VAR_4,
       char **VAR_5)
{
 struct variable VAR_6;






 if (VAR_4->is_binary)
 {
  if (!(*VAR_5 = FUNC_0(VAR_4->data_len, VAR_3->lineno)))
   return 0;
  FUNC_2(*VAR_5, VAR_4->data, VAR_4->data_len);
  return 1;
 }

 VAR_6.type = VAR_1;
 VAR_6.varcharsize = FUNC_3(VAR_4->data);
 VAR_6.value = VAR_4->data;
 VAR_6.pointer = &(VAR_4->data);
 VAR_6.arrsize = 1;
 VAR_6.offset = 0;

 if (!VAR_4->indicator)
 {
  VAR_6.ind_type = VAR_0;
  VAR_6.ind_value = *(VAR_6.ind_pointer = ((void*)0));
  VAR_6.ind_varcharsize = VAR_6.ind_arrsize = VAR_6.ind_offset = 0;
 }
 else
 {
  VAR_6.ind_type = VAR_2;
  VAR_6.ind_value = &(VAR_4->indicator);
  VAR_6.ind_pointer = &(VAR_6.ind_value);
  VAR_6.ind_varcharsize = VAR_6.ind_arrsize = 1;
  VAR_6.ind_offset = 0;
 }

 if (!FUNC_1(VAR_3->lineno, VAR_3->force_indicator, &VAR_6, VAR_5, 0))
  return 0;

 return 1;
}
