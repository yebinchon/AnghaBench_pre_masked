
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* mtext; } ;
struct TYPE_11__ {scalar_t__ type; scalar_t__ expanding; int nargs; TYPE_1__ subst; } ;
typedef TYPE_2__ pp_entry_t ;
struct TYPE_12__ {struct TYPE_12__* next; } ;
typedef TYPE_3__ mtext_t ;
struct TYPE_13__ {int nargs; scalar_t__* nnls; TYPE_2__* ppp; } ;
typedef TYPE_4__ macexpstackentry_t ;


 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (TYPE_3__*,TYPE_4__*,int*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (TYPE_2__*,int *,int *,int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(macexpstackentry_t *VAR_3)
{
 mtext_t *VAR_4;
 int VAR_5, VAR_6;
 char *VAR_7;
 int VAR_8 = 0;
 pp_entry_t *VAR_9 = VAR_3->ppp;
 int VAR_10 = VAR_3->nargs;

 FUNC_3(VAR_9->type == VAR_2);
 FUNC_3(VAR_9->expanding == 0);

 if((VAR_9->nargs >= 0 && VAR_10 != VAR_9->nargs) || (VAR_9->nargs < 0 && VAR_10 < -VAR_9->nargs))
 {
  FUNC_5("Too %s macro arguments (%d)", VAR_10 < FUNC_0(VAR_9->nargs) ? "few" : "many", VAR_10);
  return;
 }

 for(VAR_5 = 0; VAR_5 < VAR_10; VAR_5++)
  VAR_8 += VAR_3->nnls[VAR_5];

 VAR_0 = 0;

 for(VAR_4 = VAR_9->subst.mtext; VAR_4; VAR_4 = VAR_4->next)
 {
  if(!(VAR_4 = FUNC_1(VAR_4, VAR_3, &VAR_8)))
   break;
 }

 for(VAR_5 = 0; VAR_5 < VAR_8; VAR_5++)
  FUNC_2("\n", 1);


 FUNC_2(" \0", 2);


 for(VAR_6 = VAR_0, VAR_7 = &VAR_1[VAR_0-1]; VAR_6 > 0; VAR_6--, VAR_7--)
 {
  if(!FUNC_4(*VAR_7 & 0xff))
   break;
 }





 *(++VAR_7) = ' ';
 *(++VAR_7) = '\0';
 VAR_6++;


 for(VAR_5 = 0, VAR_7 = VAR_1; VAR_5 < VAR_6; VAR_5++, VAR_7++)
 {
  if(!FUNC_4(*VAR_7 & 0xff))
   break;
 }

 if(VAR_6 - VAR_5 > 0)
 {
  FUNC_6(VAR_9, ((void*)0), ((void*)0), 0);

  FUNC_7(VAR_1 + VAR_5);
 }
}
