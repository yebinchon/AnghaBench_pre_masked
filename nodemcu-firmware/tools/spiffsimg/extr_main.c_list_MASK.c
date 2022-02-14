
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spiffs_dirent {size_t type; int size; int name; } ;
typedef int spiffs_DIR ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int *) ;
 scalar_t__ FUNC_2 (int *,struct spiffs_dirent*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*,char const,int,char*) ;

__attribute__((used)) static void FUNC_6 (void)
{
  spiffs_DIR VAR_1;
  if (!FUNC_1 (&VAR_0, "/", &VAR_1))
    FUNC_3 ("spiffs_opendir");
  struct spiffs_dirent VAR_2;
  while (FUNC_2 (&VAR_1, &VAR_2))
  {
    static const char VAR_3[] = "?fdhs";
    char VAR_4[sizeof(VAR_2.name)+1] = { 0 };
    FUNC_4 (VAR_4, VAR_2.name, sizeof(VAR_2.name));
    FUNC_5("%c %6u %s\n", VAR_3[VAR_2.type], VAR_2.size, VAR_4);
  }
  FUNC_0 (&VAR_1);
}
