
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int flags; char* res_name; char* res_class; void* icon_mask; void* icon_pixmap; } ;
typedef TYPE_1__ XWMHints ;
typedef TYPE_1__ XClassHint ;
struct TYPE_13__ {int ctx; } ;
struct TYPE_12__ {int red; int green; int blue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (int ,int ,TYPE_3__*) ;
 TYPE_1__* FUNC_7 () ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* FUNC_8 (int ,scalar_t__,char*,int ,int ) ;
 void* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_11 (int ,int ,int,int,int,int,int ,int ,int ,int ,int ,int *) ;
 int FUNC_12 (int ,scalar_t__,void*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 () ;
 void* FUNC_15 (int ,char*,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,scalar_t__,int) ;
 int FUNC_18 (int ,scalar_t__,TYPE_1__*) ;
 int FUNC_19 (int ,scalar_t__,TYPE_1__*) ;
 int FUNC_20 (int ,scalar_t__,void**,int) ;
 int FUNC_21 (int ,scalar_t__,int ) ;
 int FUNC_22 (int ,int ,char*) ;
 TYPE_4__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 TYPE_3__ VAR_34 ;
 void* VAR_35 ;
 void* VAR_36 ;
 void* VAR_37 ;
 void* VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 void* VAR_41 ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 int FUNC_26 (int ,int ,int ) ;
 void* VAR_42 ;
 int VAR_43 ;
 scalar_t__ VAR_44 ;

__attribute__((used)) static void FUNC_27(void)
{
 XWMHints *VAR_45;
 XClassHint *VAR_46;






 VAR_39 = FUNC_16(((void*)0));
 if (!VAR_39)
  FUNC_22(VAR_25.ctx, VAR_3, "cannot open display");

 VAR_17 = FUNC_15(VAR_39, "CLIPBOARD", VAR_4);
 VAR_18 = FUNC_15(VAR_39, "TARGETS", VAR_4);
 VAR_19 = FUNC_15(VAR_39, "TIMESTAMP", VAR_4);
 VAR_20 = FUNC_15(VAR_39, "UTF8_STRING", VAR_4);
 VAR_15 = FUNC_15(VAR_39, "WM_DELETE_WINDOW", VAR_4);
 VAR_9 = FUNC_15(VAR_39, "_NET_WM_NAME", VAR_4);
 VAR_10 = FUNC_15(VAR_39, "_NET_WM_STATE", VAR_4);
 VAR_11 = FUNC_15(VAR_39, "_NET_WM_STATE_FULLSCREEN", VAR_4);
 VAR_16 = FUNC_15(VAR_39, "_WM_RELOAD_PAGE", VAR_4);

 VAR_43 = FUNC_3(VAR_39);

 FUNC_26(VAR_39, VAR_43, FUNC_4(VAR_39, VAR_43));

 VAR_35 = FUNC_9(VAR_39, VAR_22);
 VAR_37 = FUNC_9(VAR_39, VAR_21);
 VAR_38 = FUNC_9(VAR_39, VAR_23);
 VAR_36 = FUNC_9(VAR_39, VAR_24);

 VAR_34.red = 0x7000;
 VAR_34.green = 0x7000;
 VAR_34.blue = 0x7000;

 FUNC_6(VAR_39, FUNC_1(VAR_39, VAR_43), &VAR_34);

 VAR_44 = FUNC_11(VAR_39, FUNC_2(VAR_39),
  10, 10, 200, 100, 0,
  FUNC_24(),
  VAR_7,
  FUNC_25(),
  0,
  ((void*)0));
 if (VAR_44 == VAR_12)
  FUNC_22(VAR_25.ctx, VAR_3, "cannot create window");

 FUNC_21(VAR_39, VAR_44, FUNC_23());
 FUNC_17(VAR_39, VAR_44,
  VAR_14 | VAR_2 | VAR_8 |
  VAR_13 | VAR_0 | VAR_1);

 VAR_26 = 0;

 VAR_40 = FUNC_10(VAR_39, VAR_44, 0, ((void*)0));

 FUNC_12(VAR_39, VAR_44, VAR_35);

 VAR_45 = FUNC_7();
 if (VAR_45)
 {
  VAR_45->flags = VAR_6 | VAR_5;
  VAR_41 = FUNC_8(VAR_39, VAR_44,
   (char*)VAR_27,
   VAR_32,
   VAR_28);
  VAR_42 = FUNC_8(VAR_39, VAR_44,
   (char*)VAR_29,
   VAR_31,
   VAR_30);
  if (VAR_41 && VAR_42)
  {
   VAR_45->icon_pixmap = VAR_41;
   VAR_45->icon_mask = VAR_42;
   FUNC_19(VAR_39, VAR_44, VAR_45);
  }
  FUNC_13(VAR_45);
 }

 VAR_46 = FUNC_5();
 if (VAR_46)
 {
  VAR_46->res_name = "mupdf";
  VAR_46->res_class = "MuPDF";
  FUNC_18(VAR_39, VAR_44, VAR_46);
  FUNC_13(VAR_46);
 }

 FUNC_20(VAR_39, VAR_44, &VAR_15, 1);

 VAR_33 = FUNC_0(VAR_39);
}
