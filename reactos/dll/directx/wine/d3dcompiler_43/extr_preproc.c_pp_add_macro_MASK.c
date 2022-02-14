
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int * mtext; } ;
struct TYPE_11__ {char* ident; int nargs; struct TYPE_11__* prev; struct TYPE_11__* next; int linenumber; int filename; TYPE_1__ subst; int ** margs; int type; } ;
typedef TYPE_2__ pp_entry_t ;
typedef int mtext_t ;
typedef int marg_t ;
struct TYPE_13__ {TYPE_2__** defines; } ;
struct TYPE_12__ {char* input; int line_number; scalar_t__ pedantic; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 TYPE_6__* VAR_1 ;
 int FUNC_2 (char*) ;
 TYPE_5__ VAR_2 ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 TYPE_2__* FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int ,int ) ;

pp_entry_t *FUNC_8(char *VAR_3, marg_t *VAR_4[], int VAR_5, mtext_t *VAR_6)
{
 int VAR_7;
 pp_entry_t *VAR_8;

 if(!VAR_3)
  return ((void*)0);
 VAR_7 = FUNC_5(VAR_3);
 if((VAR_8 = FUNC_6(VAR_3)) != ((void*)0))
 {
  if(VAR_2.pedantic)
   FUNC_7("Redefinition of %s\n\tPrevious definition: %s:%d", VAR_3, VAR_8->filename, VAR_8->linenumber);
  FUNC_2(VAR_3);
 }
 VAR_8 = FUNC_3(sizeof(pp_entry_t));
 if(!VAR_8)
  return ((void*)0);
 FUNC_1( VAR_8, 0, sizeof(*VAR_8) );
 VAR_8->ident = VAR_3;
 VAR_8->type = VAR_0;
 VAR_8->margs = VAR_4;
 VAR_8->nargs = VAR_5;
 VAR_8->subst.mtext= VAR_6;
 VAR_8->filename = FUNC_4(VAR_2.input ? VAR_2.input : "<internal or cmdline>");
 if(!VAR_8->filename)
 {
  FUNC_0(VAR_8);
  return ((void*)0);
 }
 VAR_8->linenumber = VAR_2.input ? VAR_2.line_number : 0;
 VAR_8->next = VAR_1->defines[VAR_7];
 VAR_1->defines[VAR_7] = VAR_8;
 if(VAR_8->next)
  VAR_8->next->prev = VAR_8;
 return VAR_8;
}
