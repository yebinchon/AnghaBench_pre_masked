
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type_descriptor {int type_name; } ;
struct shift_out_of_bounds_data {int location; struct type_descriptor* lhs_type; struct type_descriptor* rhs_type; } ;
typedef int rhs_str ;
typedef int lhs_str ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct type_descriptor*,void*) ;
 int FUNC_1 (char*,char*,...) ;
 scalar_t__ FUNC_2 (int *) ;
 char* FUNC_3 (struct type_descriptor*) ;
 int FUNC_4 (unsigned long*) ;
 int FUNC_5 (int *,unsigned long*) ;
 scalar_t__ FUNC_6 (struct type_descriptor*,void*) ;
 int FUNC_7 (char*,int,struct type_descriptor*,void*) ;

void FUNC_8(struct shift_out_of_bounds_data *VAR_1,
     void *VAR_2, void *VAR_3)
{
 unsigned long VAR_4;
 struct type_descriptor *VAR_5 = VAR_1->rhs_type;
 struct type_descriptor *VAR_6 = VAR_1->lhs_type;
 char VAR_7[VAR_0];
 char VAR_8[VAR_0];

 if (FUNC_2(&VAR_1->location))
  return;

 FUNC_5(&VAR_1->location, &VAR_4);

 FUNC_7(VAR_7, sizeof(VAR_7), VAR_5, VAR_3);
 FUNC_7(VAR_8, sizeof(VAR_8), VAR_6, VAR_2);

 if (FUNC_6(VAR_5, VAR_3))
  FUNC_1("shift exponent %s is negative\n", VAR_7);

 else if (FUNC_0(VAR_5, VAR_3) >=
  FUNC_3(VAR_6))
  FUNC_1("shift exponent %s is too large for %u-bit type %s\n",
   VAR_7,
   FUNC_3(VAR_6),
   VAR_6->type_name);
 else if (FUNC_6(VAR_6, VAR_2))
  FUNC_1("left shift of negative value %s\n",
   VAR_8);
 else
  FUNC_1("left shift of %s by %s places cannot be"
   " represented in type %s\n",
   VAR_8, VAR_7,
   VAR_6->type_name);

 FUNC_4(&VAR_4);
}
