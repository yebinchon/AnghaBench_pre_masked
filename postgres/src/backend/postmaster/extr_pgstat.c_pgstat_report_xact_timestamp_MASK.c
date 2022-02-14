
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int TimestampTz ;
struct TYPE_5__ {int st_xact_start_timestamp; } ;
typedef TYPE_1__ PgBackendStatus ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__ volatile*) ;
 int FUNC_1 (TYPE_1__ volatile*) ;
 int VAR_1 ;

void
FUNC_2(TimestampTz VAR_2)
{
 volatile PgBackendStatus *VAR_3 = VAR_0;

 if (!VAR_1 || !VAR_3)
  return;






 FUNC_0(VAR_3);

 VAR_3->st_xact_start_timestamp = VAR_2;

 FUNC_1(VAR_3);
}
