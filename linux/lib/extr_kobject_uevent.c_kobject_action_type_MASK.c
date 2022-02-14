
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum kobject_action { ____Placeholder_kobject_action } kobject_action ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 char** VAR_1 ;
 char* FUNC_1 (char const*,size_t,char) ;
 scalar_t__ FUNC_2 (char*,char const*,size_t) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, size_t VAR_3,
          enum kobject_action *VAR_4,
          const char **VAR_5)
{
 enum kobject_action VAR_6;
 size_t VAR_7;
 const char *VAR_8;
 int VAR_9 = -VAR_0;

 if (VAR_3 && (VAR_2[VAR_3-1] == '\n' || VAR_2[VAR_3-1] == '\0'))
  VAR_3--;

 if (!VAR_3)
  goto out;

 VAR_8 = FUNC_1(VAR_2, VAR_3, ' ');
 if (VAR_8) {
  VAR_7 = VAR_8 - VAR_2;
  VAR_8 = VAR_8 + 1;
 } else
  VAR_7 = VAR_3;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  if (FUNC_2(VAR_1[VAR_6], VAR_2, VAR_7) != 0)
   continue;
  if (VAR_1[VAR_6][VAR_7] != '\0')
   continue;
  if (VAR_5)
   *VAR_5 = VAR_8;
  *VAR_4 = VAR_6;
  VAR_9 = 0;
  break;
 }
out:
 return VAR_9;
}
