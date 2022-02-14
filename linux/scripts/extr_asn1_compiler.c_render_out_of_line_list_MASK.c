
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct element {int entry_index; int compound; TYPE_1__* action; struct element* next; struct element* children; struct element* render_next; } ;
struct TYPE_2__ {int name; } ;
typedef int FILE ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct element*,int *) ;
 struct element* VAR_2 ;
 struct element** VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,...) ;

__attribute__((used)) static void FUNC_3(FILE *VAR_4)
{
 struct element *VAR_5, *VAR_6;
 const char *VAR_7;
 int VAR_8;

 while ((VAR_5 = VAR_2)) {
  VAR_2 = VAR_5->render_next;
  if (!VAR_2)
   VAR_3 = &VAR_2;

  FUNC_1(VAR_4, "\n");
  VAR_5->entry_index = VAR_8 = VAR_0;
  VAR_1++;
  for (VAR_6 = VAR_5->children; VAR_6; VAR_6 = VAR_6->next)
   FUNC_0(VAR_4, VAR_6, ((void*)0));
  VAR_1--;

  VAR_7 = VAR_5->action ? "_ACT" : "";
  switch (VAR_5->compound) {
  case 131:
   FUNC_2(VAR_4, "ASN1_OP_END_SEQ%s,\n", VAR_7);
   break;
  case 130:
   FUNC_2(VAR_4, "ASN1_OP_END_SEQ_OF%s,\n", VAR_7);
   FUNC_2(VAR_4, "_jump_target(%u),\n", VAR_8);
   break;
  case 129:
   FUNC_2(VAR_4, "ASN1_OP_END_SET%s,\n", VAR_7);
   break;
  case 128:
   FUNC_2(VAR_4, "ASN1_OP_END_SET_OF%s,\n", VAR_7);
   FUNC_2(VAR_4, "_jump_target(%u),\n", VAR_8);
   break;
  default:
   break;
  }
  if (VAR_5->action)
   FUNC_2(VAR_4, "_action(ACT_%s),\n",
          VAR_5->action->name);
  FUNC_2(VAR_4, "ASN1_OP_RETURN,\n");
 }
}
