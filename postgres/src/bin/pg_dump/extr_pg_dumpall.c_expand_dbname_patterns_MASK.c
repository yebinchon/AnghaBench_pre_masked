
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int data; } ;
struct TYPE_13__ {TYPE_1__* head; } ;
struct TYPE_12__ {int val; struct TYPE_12__* next; } ;
typedef TYPE_1__ SimpleStringListCell ;
typedef TYPE_2__ SimpleStringList ;
typedef TYPE_3__* PQExpBuffer ;
typedef int PGresult ;
typedef int PGconn ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 TYPE_3__* FUNC_4 () ;
 int FUNC_5 (TYPE_3__*) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,TYPE_3__*,int ,int,int,int *,char*,int *,int *) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_10(PGconn *VAR_0,
        SimpleStringList *VAR_1,
        SimpleStringList *VAR_2)
{
 PQExpBuffer VAR_3;
 PGresult *VAR_4;

 if (VAR_1->head == ((void*)0))
  return;

 VAR_3 = FUNC_4();







 for (SimpleStringListCell *VAR_5 = VAR_1->head; VAR_5; VAR_5 = VAR_5->next)
 {
  FUNC_3(VAR_3,
        "SELECT datname FROM pg_catalog.pg_database n\n");
  FUNC_7(VAR_0, VAR_3, VAR_5->val, 0,
         0, ((void*)0), "datname", ((void*)0), ((void*)0));

  VAR_4 = FUNC_6(VAR_0, VAR_3->data);
  for (int VAR_6 = 0; VAR_6 < FUNC_2(VAR_4); VAR_6++)
  {
   FUNC_9(VAR_2, FUNC_1(VAR_4, VAR_6, 0));
  }

  FUNC_0(VAR_4);
  FUNC_8(VAR_3);
 }

 FUNC_5(VAR_3);
}
