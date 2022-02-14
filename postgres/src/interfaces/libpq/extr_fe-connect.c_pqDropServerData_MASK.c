
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ pgParameterStatus ;
struct TYPE_7__ {int std_strings; char* last_sqlstate; int auth_req_received; int password_needed; int write_failed; scalar_t__ be_key; scalar_t__ be_pid; TYPE_1__* write_err_msg; TYPE_1__* lobjfuncs; scalar_t__ sversion; int client_encoding; TYPE_1__* pstatus; int * notifyTail; TYPE_1__* notifyHead; } ;
typedef TYPE_1__ PGnotify ;
typedef TYPE_3__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(PGconn *VAR_1)
{
 PGnotify *VAR_2;
 pgParameterStatus *VAR_3;


 VAR_2 = VAR_1->notifyHead;
 while (VAR_2 != ((void*)0))
 {
  PGnotify *VAR_4 = VAR_2;

  VAR_2 = VAR_2->next;
  FUNC_0(VAR_4);
 }
 VAR_1->notifyHead = VAR_1->notifyTail = ((void*)0);


 VAR_3 = VAR_1->pstatus;
 while (VAR_3 != ((void*)0))
 {
  pgParameterStatus *VAR_5 = VAR_3;

  VAR_3 = VAR_3->next;
  FUNC_0(VAR_5);
 }
 VAR_1->pstatus = ((void*)0);
 VAR_1->client_encoding = VAR_0;
 VAR_1->std_strings = 0;
 VAR_1->sversion = 0;


 if (VAR_1->lobjfuncs)
  FUNC_0(VAR_1->lobjfuncs);
 VAR_1->lobjfuncs = ((void*)0);


 VAR_1->last_sqlstate[0] = '\0';
 VAR_1->auth_req_received = 0;
 VAR_1->password_needed = 0;
 VAR_1->write_failed = 0;
 if (VAR_1->write_err_msg)
  FUNC_0(VAR_1->write_err_msg);
 VAR_1->write_err_msg = ((void*)0);
 VAR_1->be_pid = 0;
 VAR_1->be_key = 0;
}
