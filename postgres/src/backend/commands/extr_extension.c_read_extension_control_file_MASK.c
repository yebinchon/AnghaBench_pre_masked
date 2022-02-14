
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int relocatable; int superuser; int encoding; int name; } ;
typedef TYPE_1__ ExtensionControlFile ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static ExtensionControlFile *
FUNC_3(const char *VAR_0)
{
 ExtensionControlFile *VAR_1;




 VAR_1 = (ExtensionControlFile *) FUNC_0(sizeof(ExtensionControlFile));
 VAR_1->name = FUNC_2(VAR_0);
 VAR_1->relocatable = 0;
 VAR_1->superuser = 1;
 VAR_1->encoding = -1;




 FUNC_1(VAR_1, ((void*)0));

 return VAR_1;
}
