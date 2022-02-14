
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_generic {int flags; char* name; } ;
typedef int StringInfoData ;


 int VAR_0 ;
 char* FUNC_0 (struct config_generic*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct config_generic *VAR_2)
{
 if (VAR_1 && (VAR_2->flags & VAR_0))
 {
  char *VAR_3 = FUNC_0(VAR_2, 0);
  StringInfoData VAR_4;

  FUNC_2(&VAR_4, 'S');
  FUNC_4(&VAR_4, VAR_2->name);
  FUNC_4(&VAR_4, VAR_3);
  FUNC_3(&VAR_4);

  FUNC_1(VAR_3);
 }
}
