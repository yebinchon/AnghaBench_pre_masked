
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int guint ;
struct TYPE_3__ {int * (* constructor ) (int ,int ,int *) ;} ;
typedef int Main ;
typedef int GtkWindow ;
typedef int GtkWidget ;
typedef int GtkVBox ;
typedef int GtkLabel ;
typedef int GtkHBox ;
typedef int GtkContainer ;
typedef int GtkButton ;
typedef int GType ;
typedef int GObjectConstructParam ;
typedef TYPE_1__ GObjectClass ;
typedef int GObject ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ,int *) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int VAR_2 ;
 int * FUNC_10 (int ,int ,int *) ;

__attribute__((used)) static GObject * FUNC_11 (GType VAR_3, guint VAR_4, GObjectConstructParam * VAR_5) {
 GObject * VAR_6;
 GObjectClass * VAR_7;
 Main * VAR_8;
 GtkVBox* VAR_9 = ((void*)0);
 GtkLabel* VAR_10 = ((void*)0);
 GtkHBox* VAR_11 = ((void*)0);
 GtkButton* VAR_12 = ((void*)0);
 GtkButton* VAR_13 = ((void*)0);
 GtkButton* VAR_14 = ((void*)0);
 GtkVBox* VAR_15;
 GtkVBox* VAR_16;
 GtkLabel* VAR_17;
 GtkLabel* VAR_18;
 GtkHBox* VAR_19;
 GtkHBox* VAR_20;
 GtkButton* VAR_21;
 GtkButton* VAR_22;
 GtkButton* VAR_23;
 GtkButton* VAR_24;
 GtkButton* VAR_25;
 GtkButton* VAR_26;
 GtkVBox* VAR_27;
 GtkLabel* VAR_28;
 GtkHBox* VAR_29;
 GtkButton* VAR_30;
 GtkHBox* VAR_31;
 GtkButton* VAR_32;
 GtkHBox* VAR_33;
 GtkButton* VAR_34;
 GtkVBox* VAR_35;
 GtkHBox* VAR_36;
 GtkVBox* VAR_37;
 VAR_7 = FUNC_0 (VAR_2);
 VAR_6 = VAR_7->constructor (VAR_3, VAR_4, VAR_5);
 VAR_8 = FUNC_1 (VAR_6);
 VAR_15 = (GtkVBox*) FUNC_9 (VAR_0, 0);
 VAR_16 = FUNC_3 (VAR_15);
 FUNC_2 (VAR_9);
 VAR_9 = VAR_16;
 VAR_17 = (GtkLabel*) FUNC_8 ("hello world");
 VAR_18 = FUNC_3 (VAR_17);
 FUNC_2 (VAR_10);
 VAR_10 = VAR_18;
 VAR_19 = (GtkHBox*) FUNC_7 (VAR_0, 0);
 VAR_20 = FUNC_3 (VAR_19);
 FUNC_2 (VAR_11);
 VAR_11 = VAR_20;
 VAR_21 = (GtkButton*) FUNC_5 ("Install");
 VAR_22 = FUNC_3 (VAR_21);
 FUNC_2 (VAR_12);
 VAR_12 = VAR_22;
 VAR_23 = (GtkButton*) FUNC_5 ("Update");
 VAR_24 = FUNC_3 (VAR_23);
 FUNC_2 (VAR_13);
 VAR_13 = VAR_24;
 VAR_25 = (GtkButton*) FUNC_5 ("Deinstall");
 VAR_26 = FUNC_3 (VAR_25);
 FUNC_2 (VAR_14);
 VAR_14 = VAR_26;
 FUNC_4 ((GtkWindow*) VAR_8, "type", VAR_1, ((void*)0));
 VAR_27 = VAR_9;
 VAR_28 = VAR_10;
 FUNC_6 ((GtkContainer*) VAR_27, (GtkWidget*) VAR_28);
 VAR_29 = VAR_11;
 VAR_30 = VAR_12;
 FUNC_6 ((GtkContainer*) VAR_29, (GtkWidget*) VAR_30);
 VAR_31 = VAR_11;
 VAR_32 = VAR_13;
 FUNC_6 ((GtkContainer*) VAR_31, (GtkWidget*) VAR_32);
 VAR_33 = VAR_11;
 VAR_34 = VAR_14;
 FUNC_6 ((GtkContainer*) VAR_33, (GtkWidget*) VAR_34);
 VAR_35 = VAR_9;
 VAR_36 = VAR_11;
 FUNC_6 ((GtkContainer*) VAR_35, (GtkWidget*) VAR_36);
 VAR_37 = VAR_9;
 FUNC_6 ((GtkContainer*) VAR_8, (GtkWidget*) VAR_37);
 FUNC_2 (VAR_14);
 FUNC_2 (VAR_13);
 FUNC_2 (VAR_12);
 FUNC_2 (VAR_11);
 FUNC_2 (VAR_10);
 FUNC_2 (VAR_9);
 return VAR_6;
}
