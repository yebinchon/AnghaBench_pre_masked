
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sdlPtr ;
typedef int * sdlFunctionPtr ;
struct TYPE_3__ {int * requests; int functions; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (int *,char*,int) ;

__attribute__((used)) static sdlFunctionPtr FUNC_5(sdlPtr VAR_0, const char *VAR_1)
{
 sdlFunctionPtr VAR_2;

 int VAR_3 = FUNC_3(VAR_1);
 char *VAR_4 = FUNC_1(VAR_1,VAR_3);
 FUNC_2(VAR_4,VAR_3);
 if (VAR_0 != ((void*)0)) {
  if ((VAR_2 = FUNC_4(&VAR_0->functions, VAR_4, VAR_3)) != ((void*)0)) {
   FUNC_0(VAR_4);
   return VAR_2;
  } else if (VAR_0->requests != ((void*)0) && (VAR_2 = FUNC_4(VAR_0->requests, VAR_4, VAR_3)) != ((void*)0)) {
   FUNC_0(VAR_4);
   return VAR_2;
  }
 }
 FUNC_0(VAR_4);
 return ((void*)0);
}
