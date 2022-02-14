
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
 int FUNC_3 (char*,int ,char*,char*,char*,char const*) ;

__attribute__((used)) static char *
FUNC_4(ExtensionControlFile *VAR_1,
           const char *VAR_2)
{
 char *VAR_3;
 char *VAR_4;

 VAR_4 = FUNC_0(VAR_1);

 VAR_3 = (char *) FUNC_1(VAR_0);
 FUNC_3(VAR_3, VAR_0, "%s/%s--%s.control",
    VAR_4, VAR_1->name, VAR_2);

 FUNC_2(VAR_4);

 return VAR_3;
}
