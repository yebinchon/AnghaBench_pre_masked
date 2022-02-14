
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int icon; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int ,char*,...) ;
 int FUNC_2 (char*,char const*,int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3, const char *VAR_4, int VAR_5, char VAR_6[VAR_0], char VAR_7[VAR_0])
{
 const char *VAR_8 = VAR_1[VAR_5].name;
 int VAR_9 = VAR_1[VAR_5].icon;
 if (VAR_8[0] == '~')
 {
  if (!VAR_3)
   return 0;
  if (VAR_8[1] == '/')
  {
   FUNC_1(VAR_6, VAR_0, "%s/%s", VAR_3, VAR_8+2);
   FUNC_1(VAR_7, VAR_0, "%C %s", VAR_9, VAR_8+2);
  }
  else
  {
   FUNC_1(VAR_6, VAR_0, "%s", VAR_3);
   FUNC_1(VAR_7, VAR_0, "%C %s", VAR_9, VAR_4 ? VAR_4 : "~");
  }
 }
 else
 {
  FUNC_2(VAR_6, VAR_8, VAR_0);
  FUNC_1(VAR_7, VAR_0, "%C %s", VAR_9, VAR_8);
 }
 return FUNC_0(VAR_2, VAR_6);
}
