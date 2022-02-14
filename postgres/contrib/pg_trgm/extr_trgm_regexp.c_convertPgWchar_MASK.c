
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bytes; } ;
typedef TYPE_1__ trgm_mb_char ;
typedef int s ;
typedef scalar_t__ pg_wchar ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__*,char*,int) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static bool
FUNC_6(pg_wchar VAR_1, trgm_mb_char *VAR_2)
{

 char VAR_3[VAR_0 + 1];






 if (VAR_1 == 0)
  return 0;


 FUNC_2(VAR_3, 0, sizeof(VAR_3));
 FUNC_4(&VAR_1, VAR_3, 1);
 FUNC_1(VAR_2->bytes, VAR_3, VAR_0);
 return 1;
}
