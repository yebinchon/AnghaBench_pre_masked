
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int pgssLocationLen ;
struct TYPE_11__ {unsigned char* jumble; int clocations_buf_size; scalar_t__ clocations_count; scalar_t__ jumble_len; scalar_t__ highest_extern_param_id; int * clocations; } ;
typedef TYPE_1__ pgssJumbleState ;
struct TYPE_13__ {int p_sourcetext; } ;
struct TYPE_12__ {void* queryId; int stmt_len; int stmt_location; scalar_t__ utilityStmt; } ;
typedef TYPE_2__ Query ;
typedef TYPE_3__ ParseState ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (unsigned char*,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_1 ;
 int FUNC_6 () ;
 int VAR_2 ;
 int FUNC_7 (int ,void*,int ,int ,int ,int ,int *,TYPE_1__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_9(ParseState *VAR_3, Query *VAR_4)
{
 pgssJumbleState VAR_5;

 if (&FUNC_8)
  FUNC_8(VAR_3, VAR_4);


 FUNC_0(VAR_4->queryId == FUNC_3(0));


 if (!VAR_1 || !VAR_2 || !FUNC_6())
  return;
 if (VAR_4->utilityStmt)
 {
  VAR_4->queryId = FUNC_3(0);
  return;
 }


 VAR_5.jumble = (unsigned char *) FUNC_5(VAR_0);
 VAR_5.jumble_len = 0;
 VAR_5.clocations_buf_size = 32;
 VAR_5.clocations = (pgssLocationLen *)
  FUNC_5(VAR_5.clocations_buf_size * sizeof(pgssLocationLen));
 VAR_5.clocations_count = 0;
 VAR_5.highest_extern_param_id = 0;


 FUNC_2(&VAR_5, VAR_4);
 VAR_4->queryId =
  FUNC_1(FUNC_4(VAR_5.jumble, VAR_5.jumble_len, 0));





 if (VAR_4->queryId == FUNC_3(0))
  VAR_4->queryId = FUNC_3(1);
 if (VAR_5.clocations_count > 0)
  FUNC_7(VAR_3->p_sourcetext,
       VAR_4->queryId,
       VAR_4->stmt_location,
       VAR_4->stmt_len,
       0,
       0,
       ((void*)0),
       &VAR_5);
}
