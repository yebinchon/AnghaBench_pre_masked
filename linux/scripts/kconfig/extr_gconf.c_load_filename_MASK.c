
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gpointer ;
typedef int gchar ;
typedef int GtkFileSelection ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void
FUNC_5(GtkFileSelection * VAR_1, gpointer VAR_2)
{
 const gchar *VAR_3;

 VAR_3 = FUNC_3(FUNC_0
          (VAR_2));

 if (FUNC_1(VAR_3))
  FUNC_4("Error", "Unable to load configuration !");
 else
  FUNC_2(&VAR_0);
}
