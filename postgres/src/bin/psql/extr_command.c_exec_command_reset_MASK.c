
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int backslashResult ;
struct TYPE_2__ {int quiet; } ;
typedef int PsqlScanState ;
typedef int PQExpBuffer ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static backslashResult
FUNC_4(PsqlScanState VAR_2, bool VAR_3,
       PQExpBuffer VAR_4)
{
 if (VAR_3)
 {
  FUNC_3(VAR_4);
  FUNC_1(VAR_2);
  if (!VAR_1.quiet)
   FUNC_2(FUNC_0("Query buffer reset (cleared)."));
 }

 return VAR_0;
}
