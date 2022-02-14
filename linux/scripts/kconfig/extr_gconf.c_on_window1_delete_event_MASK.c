
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gpointer ;
typedef int gint ;
typedef int gboolean ;
struct TYPE_4__ {int vbox; } ;
typedef int GtkWidget ;
typedef int GtkDialogFlags ;
typedef int GdkEvent ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 int * FUNC_5 (char*,int ,int ,int ,int,int ,int,int ,int,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int * FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_7 ;
 int FUNC_11 (int *,int *) ;

gboolean FUNC_12(GtkWidget * VAR_8, GdkEvent * VAR_9,
     gpointer VAR_10)
{
 GtkWidget *VAR_11, *VAR_12;
 gint VAR_13;

 if (!FUNC_3())
  return VAR_0;

 VAR_11 = FUNC_5("Warning !",
          FUNC_2(VAR_7),
          (GtkDialogFlags)
          (VAR_2 |
           VAR_1),
          VAR_5,
          128,
          VAR_4,
          129,
          VAR_3,
          131, ((void*)0));
 FUNC_7(FUNC_1(VAR_11),
     131);

 VAR_12 = FUNC_8("\nSave configuration ?\n");
 FUNC_4(FUNC_0(FUNC_1(VAR_11)->vbox), VAR_12);
 FUNC_10(VAR_12);

 VAR_13 = FUNC_6(FUNC_1(VAR_11));
 switch (VAR_13) {
 case 128:
  FUNC_11(((void*)0), ((void*)0));
  return VAR_0;
 case 129:
  return VAR_0;
 case 131:
 case 130:
 default:
  FUNC_9(VAR_11);
  return VAR_6;
 }

 return VAR_0;
}
