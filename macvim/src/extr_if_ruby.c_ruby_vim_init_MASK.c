
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 void* FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (void*,char*,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,int ,int) ;
 int FUNC_6 (void*,char*,int ,int) ;
 int FUNC_7 (char*,int ,int ) ;
 int VAR_27 ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;

__attribute__((used)) static void FUNC_11(void)
{
    VAR_25 = FUNC_9();
    FUNC_8(&VAR_25);



    VAR_24 = FUNC_4("Vim");
    FUNC_2(VAR_26, "VIM", VAR_24);
    FUNC_2(VAR_24, "VERSION_MAJOR", FUNC_0(VAR_3));
    FUNC_2(VAR_24, "VERSION_MINOR", FUNC_0(VAR_5));
    FUNC_2(VAR_24, "VERSION_BUILD", FUNC_0(VAR_0));
    FUNC_2(VAR_24, "VERSION_PATCHLEVEL", FUNC_0(VAR_6));
    FUNC_2(VAR_24, "VERSION_SHORT", FUNC_10(VAR_7));
    FUNC_2(VAR_24, "VERSION_MEDIUM", FUNC_10(VAR_4));
    FUNC_2(VAR_24, "VERSION_LONG", FUNC_10(VAR_1));
    FUNC_2(VAR_24, "VERSION_LONG_DATE", FUNC_10(VAR_2));
    FUNC_5(VAR_24, "message", VAR_31, 1);
    FUNC_5(VAR_24, "set_option", VAR_32, 1);
    FUNC_5(VAR_24, "command", VAR_29, 1);
    FUNC_5(VAR_24, "evaluate", VAR_30, 1);

    VAR_21 = FUNC_1(VAR_24, "DeletedBufferError",
      VAR_27);
    VAR_22 = FUNC_1(VAR_24, "DeletedWindowError",
      VAR_27);

    VAR_18 = FUNC_1(VAR_24, "Buffer", VAR_26);
    FUNC_6(VAR_18, "current", VAR_17, 0);
    FUNC_6(VAR_18, "count", VAR_16, 0);
    FUNC_6(VAR_18, "[]", VAR_15, 1);
    FUNC_3(VAR_18, "name", VAR_13, 0);
    FUNC_3(VAR_18, "number", VAR_14, 0);
    FUNC_3(VAR_18, "count", VAR_11, 0);
    FUNC_3(VAR_18, "length", VAR_11, 0);
    FUNC_3(VAR_18, "[]", VAR_9, 1);
    FUNC_3(VAR_18, "[]=", VAR_10, 2);
    FUNC_3(VAR_18, "delete", VAR_12, 1);
    FUNC_3(VAR_18, "append", VAR_8, 2);



    FUNC_3(VAR_18, "line_number", VAR_20, 0);
    FUNC_3(VAR_18, "line", VAR_23, 0);
    FUNC_3(VAR_18, "line=", VAR_28, 1);


    VAR_19 = FUNC_1(VAR_24, "Window", VAR_26);
    FUNC_6(VAR_19, "current", VAR_38, 0);
    FUNC_6(VAR_19, "count", VAR_37, 0);
    FUNC_6(VAR_19, "[]", VAR_36, 1);
    FUNC_3(VAR_19, "buffer", VAR_33, 0);
    FUNC_3(VAR_19, "height", VAR_35, 0);
    FUNC_3(VAR_19, "height=", VAR_40, 1);
    FUNC_3(VAR_19, "width", VAR_42, 0);
    FUNC_3(VAR_19, "width=", VAR_41, 1);
    FUNC_3(VAR_19, "cursor", VAR_34, 0);
    FUNC_3(VAR_19, "cursor=", VAR_39, 1);

    FUNC_7("$curbuf", VAR_17, 0);
    FUNC_7("$curwin", VAR_38, 0);
}
