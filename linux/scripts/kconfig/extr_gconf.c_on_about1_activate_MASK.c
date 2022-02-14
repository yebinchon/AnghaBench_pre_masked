
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gpointer ;
typedef char gchar ;
typedef int GtkWidget ;
typedef int GtkMenuItem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int * FUNC_4 (int ,int ,int ,int ,char*,char const*) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int VAR_4 ;

void FUNC_6(GtkMenuItem * VAR_5, gpointer VAR_6)
{
 GtkWidget *VAR_7;
 const gchar *VAR_8 =
     "gkc is copyright (c) 2002 Romain Lievin <roms@lpg.ticalc.org>.\n"
       "Based on the source code from Roman Zippel.\n";

 VAR_7 = FUNC_4(FUNC_1(VAR_4),
     VAR_1,
     VAR_2,
     VAR_0, "%s", VAR_8);
 FUNC_3(FUNC_0(VAR_7), "response",
     FUNC_2(VAR_3),
     FUNC_0(VAR_7));
 FUNC_5(VAR_7);
}
