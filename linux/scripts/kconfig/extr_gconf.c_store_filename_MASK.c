
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gpointer ;
typedef int gchar ;
typedef int GtkFileSelection ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int const*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void
FUNC_6(GtkFileSelection * VAR_0, gpointer VAR_1)
{
 const gchar *VAR_2;

 VAR_2 = FUNC_3(FUNC_0
          (VAR_1));

 if (FUNC_2(VAR_2))
  FUNC_5("Error", "Unable to save configuration !");

 FUNC_4(FUNC_1(VAR_1));
}
