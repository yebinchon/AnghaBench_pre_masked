
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;


 int FUNC_0 (TYPE_1__*,char*,char const*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (void*) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static char *
FUNC_5(const char *VAR_0, const char *VAR_1,
      const char *VAR_2, const char *VAR_3)
{
 StringInfoData VAR_4;
 const char *VAR_5;

 FUNC_2(&VAR_4);

 if (VAR_0)
 {
  VAR_5 = FUNC_4(VAR_0);
  FUNC_1(&VAR_4, VAR_5);
  if (VAR_0 != VAR_5)
   FUNC_3((void *) VAR_5);
 }
 if (VAR_1)
 {
  VAR_5 = FUNC_4(VAR_1);
  FUNC_0(&VAR_4, ".%s", VAR_5);
  if (VAR_1 != VAR_5)
   FUNC_3((void *) VAR_5);
 }
 if (VAR_2)
 {
  VAR_5 = FUNC_4(VAR_2);
  FUNC_0(&VAR_4, ".%s", VAR_5);
  if (VAR_2 != VAR_5)
   FUNC_3((void *) VAR_5);
 }
 if (VAR_3)
 {
  VAR_5 = FUNC_4(VAR_3);
  FUNC_0(&VAR_4, ".%s", VAR_5);
  if (VAR_3 != VAR_5)
   FUNC_3((void *) VAR_5);
 }
 return VAR_4.data;
}
