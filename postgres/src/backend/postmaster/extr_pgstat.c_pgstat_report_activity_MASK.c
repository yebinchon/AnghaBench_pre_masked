
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* TimestampTz ;
struct TYPE_8__ {scalar_t__ wait_event_info; } ;
struct TYPE_7__ {scalar_t__ st_state; char* st_activity_raw; void* st_activity_start_timestamp; void* st_state_start_timestamp; scalar_t__ st_xact_start_timestamp; } ;
typedef TYPE_1__ PgBackendStatus ;
typedef TYPE_2__ PGPROC ;
typedef scalar_t__ BackendState ;


 void* FUNC_0 () ;
 void* FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__) ;
 TYPE_1__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (TYPE_1__ volatile*) ;
 int FUNC_4 (TYPE_1__ volatile*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (char const*) ;

void
FUNC_8(BackendState VAR_5, const char *VAR_6)
{
 volatile PgBackendStatus *VAR_7 = VAR_0;
 TimestampTz VAR_8;
 TimestampTz VAR_9;
 int VAR_10 = 0;

 FUNC_5(VAR_6);

 if (!VAR_7)
  return;

 if (!VAR_3)
 {
  if (VAR_7->st_state != VAR_2)
  {
   volatile PGPROC *VAR_11 = VAR_1;






   FUNC_3(VAR_7);
   VAR_7->st_state = VAR_2;
   VAR_7->st_state_start_timestamp = 0;
   VAR_7->st_activity_raw[0] = '\0';
   VAR_7->st_activity_start_timestamp = 0;

   VAR_7->st_xact_start_timestamp = 0;
   VAR_11->wait_event_info = 0;
   FUNC_4(VAR_7);
  }
  return;
 }





 VAR_8 = FUNC_0();
 if (VAR_6 != ((void*)0))
 {





  VAR_10 = FUNC_2(FUNC_7(VAR_6), VAR_4 - 1);
 }
 VAR_9 = FUNC_1();




 FUNC_3(VAR_7);

 VAR_7->st_state = VAR_5;
 VAR_7->st_state_start_timestamp = VAR_9;

 if (VAR_6 != ((void*)0))
 {
  FUNC_6((char *) VAR_7->st_activity_raw, VAR_6, VAR_10);
  VAR_7->st_activity_raw[VAR_10] = '\0';
  VAR_7->st_activity_start_timestamp = VAR_8;
 }

 FUNC_4(VAR_7);
}
