
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int border_offset; int border_width; int * vimToolBar; int * vimToolBarGroup; int * vimMenuBar; int * vimWindow; int * vimTextArea; int * vimContainer; int * vimPanelGroup; int * event_buffer; } ;
struct TYPE_5__ {int member_0; int member_1; int w; } ;
struct TYPE_4__ {int member_1; int member_0; } ;
typedef int PtArg_t ;
typedef TYPE_1__ PhPoint_t ;
typedef int PhEvent_t ;
typedef TYPE_2__ PhDim_t ;


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
 int FUNC_0 (int *,int ,int ,int *) ;
 int FUNC_1 (int *,int,int ,int *) ;
 void* FUNC_2 (int ,int *,int,int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int *,int ,...) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
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
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int * VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_59 ;
 int VAR_60 ;
 TYPE_3__ VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int * VAR_74 ;
 int * VAR_75 ;
 int VAR_76 ;
 int FUNC_6 (int ,int ) ;

int
FUNC_7(void)
{
    PtArg_t VAR_77[10];
    int VAR_78 = 0, VAR_79 = 0;

    PhDim_t VAR_80 = {100, 100};
    PhPoint_t VAR_81 = {0, 0};

    VAR_61.event_buffer = (PhEvent_t *) FUNC_5(VAR_0);
    if (VAR_61.event_buffer == ((void*)0))
 return VAR_1;


    VAR_59 = FUNC_4(((void*)0), "latin1");


    VAR_61.border_offset = VAR_61.border_width = VAR_4 + 2;


    FUNC_3(&VAR_77[ VAR_79++ ], VAR_40, VAR_52, VAR_11);
    FUNC_3(&VAR_77[ VAR_79++ ], VAR_41, VAR_58,
     VAR_11 | VAR_13 | VAR_12);
    FUNC_3(&VAR_77[ VAR_79++ ], VAR_31, &VAR_80, 0);
    VAR_61.vimWindow = FUNC_2(VAR_21, ((void*)0), VAR_79, VAR_77);
    if (VAR_61.vimWindow == ((void*)0))
 return VAR_1;

    FUNC_0(VAR_61.vimWindow, VAR_48, VAR_70, ((void*)0));
    FUNC_0(VAR_61.vimWindow, VAR_49,
     VAR_71, ((void*)0));

    VAR_79 = 0;
    FUNC_3(&VAR_77[ VAR_79++ ], VAR_25, VAR_23, VAR_55);
    FUNC_3(&VAR_77[ VAR_79++ ], VAR_31, &VAR_80, 0);
    FUNC_3(&VAR_77[ VAR_79++ ], VAR_36, &VAR_81, 0);
    FUNC_3(&VAR_77[ VAR_79++ ], VAR_26, VAR_52, VAR_22);
    FUNC_3(&VAR_77[ VAR_79++ ], VAR_27, 0, 0);
    FUNC_3(&VAR_77[ VAR_79++ ], VAR_34, 0, 0);
    FUNC_3(&VAR_77[ VAR_79++ ], VAR_33, 0, 0);
    FUNC_3(&VAR_77[ VAR_79++ ], VAR_28, VAR_58, VAR_42);

    VAR_61.vimContainer = FUNC_2(VAR_15, VAR_61.vimWindow, VAR_79, VAR_77);
    if (VAR_61.vimContainer == ((void*)0))
 return VAR_1;

    FUNC_0(VAR_61.vimContainer, VAR_46, VAR_73, ((void*)0));



    VAR_79 = 0;

    FUNC_3(&VAR_77[ VAR_79++ ], VAR_37, VAR_67, 1);
    FUNC_3(&VAR_77[ VAR_79++ ], VAR_27, VAR_4, 0);




    FUNC_3(&VAR_77[ VAR_79++ ], VAR_32, VAR_58,
     VAR_53 | VAR_54);

    FUNC_3(&VAR_77[ VAR_79++ ], VAR_30, VAR_5, 0);
    FUNC_3(&VAR_77[ VAR_79++ ], VAR_29, VAR_72, 0);


    VAR_61.vimTextArea = FUNC_2(VAR_17, VAR_51, VAR_79, VAR_77);
    if (VAR_61.vimTextArea == ((void*)0))
 return VAR_1;



    FUNC_1(VAR_61.vimTextArea,
     VAR_7 | VAR_8 | VAR_10,
     VAR_65, ((void*)0));
    FUNC_1(VAR_61.vimTextArea, VAR_9,
     VAR_63, ((void*)0));
    FUNC_0(VAR_61.vimTextArea, VAR_43,
     VAR_62, ((void*)0));
    FUNC_0(VAR_61.vimTextArea, VAR_44,
     VAR_62, ((void*)0));
    VAR_74 = FUNC_2(VAR_18, VAR_61.vimWindow, 0, ((void*)0));
    if (VAR_74 == ((void*)0))
 return VAR_1;

    VAR_75 = FUNC_2(VAR_18, VAR_61.vimWindow, 0, ((void*)0));
    if (VAR_75 == ((void*)0))
 return VAR_1;

    FUNC_0(VAR_74, VAR_47,
     VAR_68, ((void*)0));
    FUNC_0(VAR_75, VAR_47,
     VAR_69, ((void*)0));
    return VAR_6;
}
