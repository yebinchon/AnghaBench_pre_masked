
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int gchar ;
struct TYPE_9__ {int window; } ;
struct TYPE_8__ {TYPE_1__* prompt; } ;
struct TYPE_7__ {int text; } ;
typedef int GtkWidget ;
typedef int GtkTextBuffer ;
typedef int GtkStyle ;
typedef int GtkCheckMenuItem ;
typedef int GladeXML ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (int *,char*) ;
 int * FUNC_5 (int const*,char*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 void* FUNC_8 (int *,char*,char*,...) ;
 int * FUNC_9 (int ) ;
 int * FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (void*,int ) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int ,int ) ;
 void* VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_14 (int *,int ,int *,char*,int **) ;
 TYPE_2__ VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;

__attribute__((used)) static void FUNC_15(const gchar *VAR_21)
{
 GladeXML *VAR_22;
 GtkWidget *VAR_23;
 GtkTextBuffer *VAR_24;
 GtkStyle *VAR_25;

 VAR_22 = FUNC_5(VAR_21, "window1", ((void*)0));
 if (!VAR_22)
  FUNC_3("GUI loading failed !\n");
 FUNC_6(VAR_22);

 VAR_5 = FUNC_4(VAR_22, "window1");
 VAR_4 = FUNC_4(VAR_22, "hpaned1");
 VAR_17 = FUNC_4(VAR_22, "vpaned1");
 VAR_15 = FUNC_4(VAR_22, "treeview1");
 VAR_16 = FUNC_4(VAR_22, "treeview2");
 VAR_14 = FUNC_4(VAR_22, "textview3");

 VAR_2 = FUNC_4(VAR_22, "button1");
 FUNC_11(VAR_2, VAR_0);

 VAR_23 = FUNC_4(VAR_22, "show_name1");
 FUNC_7((GtkCheckMenuItem *) VAR_23,
           VAR_9);

 VAR_23 = FUNC_4(VAR_22, "show_range1");
 FUNC_7((GtkCheckMenuItem *) VAR_23,
           VAR_10);

 VAR_23 = FUNC_4(VAR_22, "show_data1");
 FUNC_7((GtkCheckMenuItem *) VAR_23,
           VAR_11);

 VAR_7 = FUNC_4(VAR_22, "button3");
 VAR_8 = FUNC_4(VAR_22, "save1");
 FUNC_2(VAR_3);

 VAR_25 = FUNC_10(VAR_5);
 VAR_23 = FUNC_4(VAR_22, "toolbar1");

 FUNC_14(VAR_22, VAR_5->window, VAR_25,
       "button4", (gchar **) VAR_18);
 FUNC_14(VAR_22, VAR_5->window, VAR_25,
       "button5", (gchar **) VAR_19);
 FUNC_14(VAR_22, VAR_5->window, VAR_25,
       "button6", (gchar **) VAR_20);

 VAR_24 = FUNC_9(FUNC_0(VAR_14));
 VAR_12 = FUNC_8(VAR_24, "mytag1",
       "foreground", "red",
       "weight", VAR_1,
       ((void*)0));
 VAR_13 = FUNC_8(VAR_24, "mytag2",

       ((void*)0));

 FUNC_13(FUNC_1(VAR_5), VAR_6.prompt->text);

 FUNC_12(VAR_5);
}
