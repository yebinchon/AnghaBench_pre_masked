
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct element {int flags; int compound; size_t class; size_t method; int tag; int entry_index; TYPE_4__* action; struct element* next; struct element* children; struct element* render_next; TYPE_6__* type_def; TYPE_3__* type; TYPE_1__* name; } ;
struct TYPE_12__ {int ref_count; TYPE_5__* name; } ;
struct TYPE_11__ {int content; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_9__ {TYPE_2__* type; } ;
struct TYPE_8__ {struct element* element; } ;
struct TYPE_7__ {int content; } ;
typedef int FILE ;



 size_t VAR_0 ;
 size_t VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 struct element** VAR_11 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,...) ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_4(FILE *VAR_13, struct element *VAR_14, struct element *VAR_15)
{
 struct element *VAR_16, *VAR_17;
 const char *VAR_18, *VAR_19;
 int VAR_20, VAR_21 = 0, VAR_22 = 0;

 if (VAR_14->flags & VAR_4 ||
     (VAR_15 && VAR_15->flags & VAR_4))
  VAR_21 = 1;

 if ((VAR_14->type_def && VAR_14->type_def->ref_count > 1) ||
     VAR_21)
  VAR_22 = 1;

 if (VAR_14->type_def && VAR_13) {
  FUNC_2(VAR_13, "\t// %s\n", VAR_14->type_def->name->content);
 }


 VAR_18 = (VAR_14->flags & VAR_2 ||
  (VAR_15 && VAR_15->flags & VAR_2)) ? "COND_" : "";
 VAR_19 = VAR_14->action ? "_ACT" : "";
 switch (VAR_14->compound) {
 case 135:
  FUNC_3(VAR_13, "ASN1_OP_%sMATCH_ANY%s%s,",
         VAR_18, VAR_19, VAR_21 ? "_OR_SKIP" : "");
  if (VAR_14->name)
   FUNC_2(VAR_13, "\t\t// %s", VAR_14->name->content);
  FUNC_2(VAR_13, "\n");
  goto dont_render_tag;

 case 129:
  FUNC_4(VAR_13, VAR_14->children, VAR_14);
  return;

 case 133:
 case 132:
 case 131:
 case 130:
  FUNC_3(VAR_13, "ASN1_OP_%sMATCH%s%s,",
         VAR_18,
         VAR_22 ? "_JUMP" : "",
         VAR_21 ? "_OR_SKIP" : "");
  break;

 case 134:
  goto dont_render_tag;

 case 128:
  if (VAR_14->class == VAR_1 && VAR_14->method == VAR_0 && VAR_14->tag == 0)
   goto dont_render_tag;
 default:
  FUNC_3(VAR_13, "ASN1_OP_%sMATCH%s%s,",
         VAR_18, VAR_19,
         VAR_21 ? "_OR_SKIP" : "");
  break;
 }

 VAR_17 = VAR_15 ?: VAR_14;
 if (VAR_17->name)
  FUNC_2(VAR_13, "\t\t// %s", VAR_17->name->content);
 FUNC_2(VAR_13, "\n");


 if (!VAR_15 || !(VAR_15->flags & VAR_5))
  VAR_15 = VAR_14;

 if (VAR_15->class == VAR_1 &&
     VAR_15->tag != 14 &&
     VAR_15->tag != 15 &&
     VAR_15->tag != 31)
  FUNC_3(VAR_13, "_tag(%s, %s, %s),\n",
         VAR_6[VAR_15->class],
         VAR_7[VAR_15->method | VAR_14->method],
         VAR_8[VAR_15->tag]);
 else
  FUNC_3(VAR_13, "_tagn(%s, %s, %2u),\n",
         VAR_6[VAR_15->class],
         VAR_7[VAR_15->method | VAR_14->method],
         VAR_15->tag);
 VAR_15 = ((void*)0);
dont_render_tag:


 switch (VAR_14->compound) {
 case 128:
  FUNC_4(VAR_13, VAR_14->type->type->element, VAR_15);
  if (VAR_14->action)
   FUNC_3(VAR_13, "ASN1_OP_%sACT,\n",
          VAR_21 ? "MAYBE_" : "");
  break;

 case 133:
  if (VAR_22) {


   FUNC_3(VAR_13, "_jump_target(%u),", VAR_14->entry_index);
   if (VAR_14->type_def && VAR_14->type_def->name)
    FUNC_2(VAR_13, "\t\t// --> %s",
         VAR_14->type_def->name->content);
   FUNC_2(VAR_13, "\n");
   if (!(VAR_14->flags & VAR_3)) {
    VAR_14->flags |= VAR_3;
    *VAR_11 = VAR_14;
    VAR_11 = &VAR_14->render_next;
   }
   return;
  } else {

   VAR_10++;
   for (VAR_16 = VAR_14->children; VAR_16; VAR_16 = VAR_16->next)
    FUNC_4(VAR_13, VAR_16, ((void*)0));
   VAR_10--;
   FUNC_3(VAR_13, "ASN1_OP_END_SEQ%s,\n", VAR_19);
  }
  break;

 case 132:
 case 130:
  if (VAR_22) {


   FUNC_3(VAR_13, "_jump_target(%u),", VAR_14->entry_index);
   if (VAR_14->type_def && VAR_14->type_def->name)
    FUNC_2(VAR_13, "\t\t// --> %s",
         VAR_14->type_def->name->content);
   FUNC_2(VAR_13, "\n");
   if (!(VAR_14->flags & VAR_3)) {
    VAR_14->flags |= VAR_3;
    *VAR_11 = VAR_14;
    VAR_11 = &VAR_14->render_next;
   }
   return;
  } else {

   VAR_20 = VAR_9;
   VAR_10++;
   FUNC_4(VAR_13, VAR_14->children, ((void*)0));
   VAR_10--;
   if (VAR_14->compound == 132)
    FUNC_3(VAR_13, "ASN1_OP_END_SEQ_OF%s,\n", VAR_19);
   else
    FUNC_3(VAR_13, "ASN1_OP_END_SET_OF%s,\n", VAR_19);
   FUNC_3(VAR_13, "_jump_target(%u),\n", VAR_20);
  }
  break;

 case 131:






  FUNC_1(VAR_12, "The ASN.1 SET type is not currently supported.\n");
  FUNC_0(1);

 case 134:
  for (VAR_16 = VAR_14->children; VAR_16; VAR_16 = VAR_16->next)
   FUNC_4(VAR_13, VAR_16, VAR_16);
  if (!VAR_21)
   FUNC_3(VAR_13, "ASN1_OP_COND_FAIL,\n");
  if (VAR_14->action)
   FUNC_3(VAR_13, "ASN1_OP_ACT,\n");
  break;

 default:
  break;
 }

 if (VAR_14->action)
  FUNC_3(VAR_13, "_action(ACT_%s),\n", VAR_14->action->name);
}
