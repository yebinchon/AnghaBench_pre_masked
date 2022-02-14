
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gpointer ;
struct TYPE_2__ {int cancel_button; int ok_button; } ;
typedef int GtkWidget ;
typedef int GtkMenuItem ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int * FUNC_5 (char*) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 int VAR_1 ;

void FUNC_7(GtkMenuItem * VAR_2, gpointer VAR_3)
{
 GtkWidget *VAR_4;

 VAR_4 = FUNC_5("Save file as...");
 FUNC_3(FUNC_1(FUNC_0(VAR_4)->ok_button),
    "clicked",
    FUNC_2(VAR_1), (gpointer) VAR_4);
 FUNC_4(FUNC_1
     (FUNC_0(VAR_4)->ok_button),
     "clicked", FUNC_2(VAR_0),
     (gpointer) VAR_4);
 FUNC_4(FUNC_1
     (FUNC_0(VAR_4)->cancel_button),
     "clicked", FUNC_2(VAR_0),
     (gpointer) VAR_4);
 FUNC_6(VAR_4);
}
