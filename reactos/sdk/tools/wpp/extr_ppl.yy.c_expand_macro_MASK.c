
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* mtext; } ;
struct TYPE_12__ {scalar_t__ type; scalar_t__ expanding; int nargs; char* ident; TYPE_1__ subst; } ;
typedef TYPE_2__ pp_entry_t ;
struct TYPE_13__ {struct TYPE_13__* next; } ;
typedef TYPE_3__ mtext_t ;
struct TYPE_14__ {int nargs; scalar_t__* nnls; TYPE_2__* ppp; } ;
typedef TYPE_4__ macexpstackentry_t ;
struct TYPE_15__ {char* input; int line_number; } ;


 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (TYPE_3__*,TYPE_4__*,int*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_6__ VAR_5 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (TYPE_2__*,int *,int *,int ) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_9(macexpstackentry_t *VAR_7)
{
 mtext_t *VAR_8;
 int VAR_9, VAR_10;
 char *VAR_11;
 int VAR_12 = 0;
 pp_entry_t *VAR_13 = VAR_7->ppp;
 int VAR_14 = VAR_7->nargs;

 FUNC_3(VAR_13->type == VAR_2);
 FUNC_3(VAR_13->expanding == 0);

 if((VAR_13->nargs >= 0 && VAR_14 != VAR_13->nargs) || (VAR_13->nargs < 0 && VAR_14 < -VAR_13->nargs))
 {
  FUNC_7("Too %s macro arguments (%d)", VAR_14 < FUNC_0(VAR_13->nargs) ? "few" : "many", VAR_14);
  return;
 }

 for(VAR_9 = 0; VAR_9 < VAR_14; VAR_9++)
  VAR_12 += VAR_7->nnls[VAR_9];

 if(VAR_4)
  FUNC_4(VAR_6, "expand_macro(%d): %s:%d: '%s'(%d,%d) -> ...\n",
   VAR_3,
   VAR_5.input,
   VAR_5.line_number,
   VAR_13->ident,
   VAR_7->nargs,
   VAR_12);

 VAR_0 = 0;

 for(VAR_8 = VAR_13->subst.mtext; VAR_8; VAR_8 = VAR_8->next)
 {
  if(!(VAR_8 = FUNC_1(VAR_8, VAR_7, &VAR_12)))
   break;
 }

 for(VAR_9 = 0; VAR_9 < VAR_12; VAR_9++)
  FUNC_2("\n", 1);


 FUNC_2(" \0", 2);


 for(VAR_10 = VAR_0, VAR_11 = &VAR_1[VAR_0-1]; VAR_10 > 0; VAR_10--, VAR_11--)
 {
  if(!FUNC_5(*VAR_11 & 0xff))
   break;
 }





 *(++VAR_11) = ' ';
 *(++VAR_11) = '\0';
 VAR_10++;


 for(VAR_9 = 0, VAR_11 = VAR_1; VAR_9 < VAR_10; VAR_9++, VAR_11++)
 {
  if(!FUNC_5(*VAR_11 & 0xff))
   break;
 }

 if(VAR_10 - VAR_9 > 0)
 {
  if(VAR_4)
   FUNC_4(VAR_6, "expand_text: '%s'\n", VAR_1 + VAR_9);
  FUNC_8(VAR_13, ((void*)0), ((void*)0), 0);

  FUNC_6(VAR_1 + VAR_9);
 }
}
