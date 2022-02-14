
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* directory; } ;
typedef TYPE_1__ ExtensionControlFile ;


 int VAR_0 ;
 char* FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*,int,char*,char*,char*) ;

__attribute__((used)) static char *
FUNC_6(ExtensionControlFile *VAR_2)
{
 char VAR_3[VAR_0];
 char *VAR_4;





 if (!VAR_2->directory)
  return FUNC_0();

 if (FUNC_2(VAR_2->directory))
  return FUNC_4(VAR_2->directory);

 FUNC_1(VAR_1, VAR_3);
 VAR_4 = (char *) FUNC_3(VAR_0);
 FUNC_5(VAR_4, VAR_0, "%s/%s", VAR_3, VAR_2->directory);

 return VAR_4;
}
