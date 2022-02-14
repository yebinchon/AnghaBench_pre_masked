
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_generic {int dummy; } ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 struct config_generic* FUNC_1 (char const*,int) ;
 scalar_t__ FUNC_2 (void*,void*,int ,int,int ) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char** VAR_3 ;
 int VAR_4 ;
 int * FUNC_4 (char const*,int ) ;

__attribute__((used)) static struct config_generic *
FUNC_5(const char *VAR_5, bool VAR_6, int VAR_7)
{
 const char **VAR_8 = &VAR_5;
 struct config_generic **VAR_9;
 int VAR_10;

 FUNC_0(VAR_5);





 VAR_9 = (struct config_generic **) FUNC_2((void *) &VAR_8,
            (void *) VAR_2,
            VAR_4,
            sizeof(struct config_generic *),
            VAR_1);
 if (VAR_9)
  return *VAR_9;






 for (VAR_10 = 0; VAR_3[VAR_10] != ((void*)0); VAR_10 += 2)
 {
  if (FUNC_3(VAR_5, VAR_3[VAR_10]) == 0)
   return FUNC_5(VAR_3[VAR_10 + 1], 0, VAR_7);
 }

 if (VAR_6)
 {



  if (FUNC_4(VAR_5, VAR_0) != ((void*)0))
   return FUNC_1(VAR_5, VAR_7);
 }


 return ((void*)0);
}
