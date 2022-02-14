
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; } ;
typedef TYPE_1__ ExtensionControlFile ;


 int VAR_0 ;
 char* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,char*,char*,char*,char const*,...) ;

__attribute__((used)) static char *
FUNC_4(ExtensionControlFile *VAR_1,
         const char *VAR_2, const char *VAR_3)
{
 char *VAR_4;
 char *VAR_5;

 VAR_5 = FUNC_0(VAR_1);

 VAR_4 = (char *) FUNC_1(VAR_0);
 if (VAR_2)
  FUNC_3(VAR_4, VAR_0, "%s/%s--%s--%s.sql",
     VAR_5, VAR_1->name, VAR_2, VAR_3);
 else
  FUNC_3(VAR_4, VAR_0, "%s/%s--%s.sql",
     VAR_5, VAR_1->name, VAR_3);

 FUNC_2(VAR_5);

 return VAR_4;
}
