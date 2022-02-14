
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type_descriptor {int type_name; } ;
struct overflow_data {int location; struct type_descriptor* type; } ;
typedef int rhs_val_str ;
typedef int lhs_val_str ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,...) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct type_descriptor*) ;
 int FUNC_3 (unsigned long*) ;
 int FUNC_4 (int *,unsigned long*) ;
 int FUNC_5 (char*,int,struct type_descriptor*,void*) ;

__attribute__((used)) static void FUNC_6(struct overflow_data *VAR_1, void *VAR_2,
   void *VAR_3, char VAR_4)
{

 struct type_descriptor *VAR_5 = VAR_1->type;
 unsigned long VAR_6;
 char VAR_7[VAR_0];
 char VAR_8[VAR_0];

 if (FUNC_1(&VAR_1->location))
  return;

 FUNC_4(&VAR_1->location, &VAR_6);

 FUNC_5(VAR_7, sizeof(VAR_7), VAR_5, VAR_2);
 FUNC_5(VAR_8, sizeof(VAR_8), VAR_5, VAR_3);
 FUNC_0("%s integer overflow:\n",
  FUNC_2(VAR_5) ? "signed" : "unsigned");
 FUNC_0("%s %c %s cannot be represented in type %s\n",
  VAR_7,
  VAR_4,
  VAR_8,
  VAR_5->type_name);

 FUNC_3(&VAR_6);
}
