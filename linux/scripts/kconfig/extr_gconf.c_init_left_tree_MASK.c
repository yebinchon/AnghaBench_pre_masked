
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GtkTreeViewColumn ;
typedef int GtkTreeView ;
typedef int GtkTreeSelection ;
typedef int GtkCellRenderer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_8 ;
 int * FUNC_2 () ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int ,int *,char*,int ,char*,int ,char*,...) ;
 int FUNC_9 (int *,char*) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int ) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_15(void)
{
 GtkTreeView *VAR_11 = FUNC_0(VAR_10);
 GtkCellRenderer *VAR_12;
 GtkTreeSelection *VAR_13;
 GtkTreeViewColumn *VAR_14;

 FUNC_12(VAR_11, VAR_9);
 FUNC_11(VAR_11, VAR_8);
 FUNC_13(VAR_11, VAR_8);

 VAR_14 = FUNC_6();
 FUNC_5(VAR_11, VAR_14);
 FUNC_9(VAR_14, "Options");

 VAR_12 = FUNC_3();
 FUNC_7(FUNC_1(VAR_14),
     VAR_12, VAR_6);
 FUNC_8(FUNC_1(VAR_14),
         VAR_12,
         "active", VAR_0,
         "inconsistent", VAR_1,
         "visible", VAR_3,
         "radio", VAR_2, ((void*)0));
 VAR_12 = FUNC_2();
 FUNC_7(FUNC_1(VAR_14),
     VAR_12, VAR_6);
 FUNC_8(FUNC_1(VAR_14),
         VAR_12,
         "text", VAR_5,
         "foreground-gdk",
         VAR_4, ((void*)0));

 VAR_13 = FUNC_10(VAR_11);
 FUNC_4(VAR_13, VAR_7);
 FUNC_14(VAR_10);
}
