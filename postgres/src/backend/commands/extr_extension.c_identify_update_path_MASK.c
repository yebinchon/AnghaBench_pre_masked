
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
typedef int List ;
typedef int ExtensionVersionInfo ;
typedef TYPE_1__ ExtensionControlFile ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char const*,char const*) ;
 int * FUNC_3 (int *,int *,int *,int,int) ;
 int * FUNC_4 (char const*,int **) ;
 int * FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static List *
FUNC_6(ExtensionControlFile *VAR_3,
      const char *VAR_4, const char *VAR_5)
{
 List *VAR_6;
 List *VAR_7;
 ExtensionVersionInfo *VAR_8;
 ExtensionVersionInfo *VAR_9;


 VAR_7 = FUNC_5(VAR_3);


 VAR_8 = FUNC_4(VAR_4, &VAR_7);
 VAR_9 = FUNC_4(VAR_5, &VAR_7);


 VAR_6 = FUNC_3(VAR_7, VAR_8, VAR_9, 0, 0);

 if (VAR_6 == VAR_2)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("extension \"%s\" has no update path from version \"%s\" to version \"%s\"",
      VAR_3->name, VAR_4, VAR_5)));

 return VAR_6;
}
