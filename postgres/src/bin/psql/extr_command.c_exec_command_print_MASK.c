
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int backslashResult ;
struct TYPE_6__ {int quiet; } ;
struct TYPE_5__ {scalar_t__ len; int data; } ;
typedef int PsqlScanState ;
typedef TYPE_1__* PQExpBuffer ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;

__attribute__((used)) static backslashResult
FUNC_3(PsqlScanState VAR_3, bool VAR_4,
       PQExpBuffer VAR_5, PQExpBuffer VAR_6)
{
 if (VAR_4)
 {





  if (VAR_5 && VAR_5->len > 0)
   FUNC_2(VAR_5->data);
  else if (VAR_6 && VAR_6->len > 0)
   FUNC_2(VAR_6->data);
  else if (!VAR_1.quiet)
   FUNC_2(FUNC_0("Query buffer is empty."));
  FUNC_1(VAR_2);
 }

 return VAR_0;
}
