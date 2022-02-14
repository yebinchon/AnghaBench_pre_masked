
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_generic {int dummy; } ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,struct config_generic**,int) ;
 int VAR_0 ;
 struct config_generic** VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (void*,int,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static bool
FUNC_3(struct config_generic *VAR_4, int VAR_5)
{
 if (VAR_2 + 1 >= VAR_3)
 {



  int VAR_6 = VAR_3 + VAR_3 / 4;
  struct config_generic **VAR_7;

  if (VAR_6 == 0)
  {
   VAR_6 = 100;
   VAR_7 = (struct config_generic **)
    FUNC_0(VAR_5, VAR_6 * sizeof(struct config_generic *));
  }
  else
  {
   VAR_7 = (struct config_generic **)
    FUNC_1(VAR_5, VAR_1, VAR_6 * sizeof(struct config_generic *));
  }

  if (VAR_7 == ((void*)0))
   return 0;

  VAR_1 = VAR_7;
  VAR_3 = VAR_6;
 }
 VAR_1[VAR_2++] = VAR_4;
 FUNC_2((void *) VAR_1, VAR_2,
    sizeof(struct config_generic *), VAR_0);
 return 1;
}
