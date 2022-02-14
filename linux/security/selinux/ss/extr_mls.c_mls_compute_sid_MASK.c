
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct range_trans {int target_class; int target_type; int source_type; } ;
struct TYPE_2__ {int nprim; } ;
struct policydb {int process_class; struct class_datum** class_val_to_struct; TYPE_1__ p_classes; int range_tr; int mls_enabled; } ;
struct mls_range {int dummy; } ;
struct context {int type; } ;
struct class_datum {int default_range; } ;
 int VAR_0 ;
 struct mls_range* FUNC_0 (int ,struct range_trans*) ;
 int FUNC_1 (struct context*,struct context*) ;
 int FUNC_2 (struct context*,struct context*) ;
 int FUNC_3 (struct context*,struct context*) ;
 int FUNC_4 (struct context*,struct mls_range*) ;

int FUNC_5(struct policydb *VAR_1,
      struct context *VAR_2,
      struct context *VAR_3,
      u16 VAR_4,
      u32 VAR_5,
      struct context *VAR_6,
      bool VAR_7)
{
 struct range_trans VAR_8;
 struct mls_range *VAR_9;
 struct class_datum *VAR_10;
 int VAR_11 = 0;

 if (!VAR_1->mls_enabled)
  return 0;

 switch (VAR_5) {
 case 134:

  VAR_8.source_type = VAR_2->type;
  VAR_8.target_type = VAR_3->type;
  VAR_8.target_class = VAR_4;
  VAR_9 = FUNC_0(VAR_1->range_tr, &VAR_8);
  if (VAR_9)
   return FUNC_4(VAR_6, VAR_9);

  if (VAR_4 && VAR_4 <= VAR_1->p_classes.nprim) {
   VAR_10 = VAR_1->class_val_to_struct[VAR_4 - 1];
   if (VAR_10)
    VAR_11 = VAR_10->default_range;
  }

  switch (VAR_11) {
  case 132:
   return FUNC_3(VAR_6, VAR_2);
  case 133:
   return FUNC_2(VAR_6, VAR_2);
  case 131:
   return FUNC_1(VAR_6, VAR_2);
  case 129:
   return FUNC_3(VAR_6, VAR_3);
  case 130:
   return FUNC_2(VAR_6, VAR_3);
  case 128:
   return FUNC_1(VAR_6, VAR_3);
  }


 case 136:
  if ((VAR_4 == VAR_1->process_class) || (VAR_7 == 1))

   return FUNC_1(VAR_6, VAR_2);
  else

   return FUNC_3(VAR_6, VAR_2);
 case 135:

  return FUNC_3(VAR_6, VAR_2);


 }
 return -VAR_0;
}
