
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int backslashResult ;
struct TYPE_2__ {char* gset_prefix; } ;
typedef int PsqlScanState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char*) ;
 TYPE_1__ VAR_3 ;
 char* FUNC_2 (int ,int ,int *,int) ;

__attribute__((used)) static backslashResult
FUNC_3(PsqlScanState VAR_4, bool VAR_5)
{
 backslashResult VAR_6 = VAR_2;

 if (VAR_5)
 {
  char *VAR_7 = FUNC_2(VAR_4,
             VAR_0, ((void*)0), 0);

  if (VAR_7)
   VAR_3.gset_prefix = VAR_7;
  else
  {

   VAR_3.gset_prefix = FUNC_1("");
  }

  VAR_6 = VAR_1;
 }
 else
  FUNC_0(VAR_4);

 return VAR_6;
}
