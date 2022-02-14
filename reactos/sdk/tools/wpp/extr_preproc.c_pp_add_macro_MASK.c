
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_4__* mtext; } ;
struct TYPE_15__ {int linenumber; char* ident; int nargs; struct TYPE_15__* prev; struct TYPE_15__* next; int filename; TYPE_1__ subst; int ** margs; int type; } ;
typedef TYPE_3__ pp_entry_t ;
struct TYPE_14__ {char* text; int argidx; } ;
struct TYPE_16__ {int type; TYPE_2__ subst; struct TYPE_16__* next; } ;
typedef TYPE_4__ mtext_t ;
typedef int marg_t ;
struct TYPE_18__ {TYPE_3__** defines; } ;
struct TYPE_17__ {char* input; int line_number; scalar_t__ debug; scalar_t__ pedantic; } ;


 int VAR_0 ;




 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 TYPE_8__* VAR_1 ;
 int FUNC_3 (char*) ;
 TYPE_7__ VAR_2 ;
 TYPE_3__* FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 TYPE_3__* FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,int ,int) ;
 int VAR_3 ;

pp_entry_t *FUNC_9(char *VAR_4, marg_t *VAR_5[], int VAR_6, mtext_t *VAR_7)
{
 int VAR_8;
 pp_entry_t *VAR_9;

 if(!VAR_4)
  return ((void*)0);
 VAR_8 = FUNC_6(VAR_4);
 if((VAR_9 = FUNC_7(VAR_4)) != ((void*)0))
 {
  if(VAR_2.pedantic)
   FUNC_8("Redefinition of %s\n\tPrevious definition: %s:%d", VAR_4, VAR_9->filename, VAR_9->linenumber);
  FUNC_3(VAR_4);
 }
 VAR_9 = FUNC_4(sizeof(pp_entry_t));
 if(!VAR_9)
  return ((void*)0);
 FUNC_2( VAR_9, 0, sizeof(*VAR_9) );
 VAR_9->ident = VAR_4;
 VAR_9->type = VAR_0;
 VAR_9->margs = VAR_5;
 VAR_9->nargs = VAR_6;
 VAR_9->subst.mtext= VAR_7;
 VAR_9->filename = FUNC_5(VAR_2.input ? VAR_2.input : "<internal or cmdline>");
 if(!VAR_9->filename)
 {
  FUNC_1(VAR_9);
  return ((void*)0);
 }
 VAR_9->linenumber = VAR_2.input ? VAR_2.line_number : 0;
 VAR_9->next = VAR_1->defines[VAR_8];
 VAR_1->defines[VAR_8] = VAR_9;
 if(VAR_9->next)
  VAR_9->next->prev = VAR_9;

 if(VAR_2.debug)
 {
  FUNC_0(VAR_3, "Added macro (%s, %d) <%s(%d)> to <", VAR_2.input, VAR_2.line_number, VAR_9->ident, VAR_6);
  for(; VAR_7; VAR_7 = VAR_7->next)
  {
   switch(VAR_7->type)
   {
   case 128:
    FUNC_0(VAR_3, " \"%s\" ", VAR_7->subst.text);
    break;
   case 130:
    FUNC_0(VAR_3, " #(%d) ", VAR_7->subst.argidx);
    break;
   case 131:
    FUNC_0(VAR_3, "##");
    break;
   case 129:
    FUNC_0(VAR_3, " <%d> ", VAR_7->subst.argidx);
    break;
   }
  }
  FUNC_0(VAR_3, ">\n");
 }
 return VAR_9;
}
