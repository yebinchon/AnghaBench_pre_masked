
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int backslashResult ;
struct TYPE_2__ {int quiet; int popt; } ;
typedef int PsqlScanState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int *,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_3 ;
 char* FUNC_3 (int ,int ,int *,int) ;

__attribute__((used)) static backslashResult
FUNC_4(PsqlScanState VAR_4, bool VAR_5)
{
 bool VAR_6 = 1;

 if (VAR_5)
 {
  char *VAR_7 = FUNC_3(VAR_4,
             VAR_0, ((void*)0), 1);

  VAR_6 = FUNC_0("tuples_only", VAR_7, &VAR_3.popt, VAR_3.quiet);
  FUNC_1(VAR_7);
 }
 else
  FUNC_2(VAR_4);

 return VAR_6 ? VAR_2 : VAR_1;
}
