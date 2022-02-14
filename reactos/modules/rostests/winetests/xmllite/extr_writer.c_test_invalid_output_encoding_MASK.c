
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IXmlWriter ;
typedef int IUnknown ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int ,int) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int *,int ,int *,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,int ) ;
 scalar_t__ FUNC_13 (int *,int ) ;
 scalar_t__ FUNC_14 (int *,int ,int ) ;
 scalar_t__ FUNC_15 (int *,int ,int *) ;
 scalar_t__ FUNC_16 (int *,int ) ;
 scalar_t__ FUNC_17 (int *,int ,int) ;
 scalar_t__ FUNC_18 (int *,int ) ;
 scalar_t__ FUNC_19 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_20 (int *,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_21 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_22(IXmlWriter *VAR_4, IUnknown *VAR_5)
{
    HRESULT VAR_6;

    VAR_6 = FUNC_1(VAR_4, VAR_5);
    FUNC_21(VAR_6 == VAR_1, "Failed to set output, hr %#x.\n", VAR_6);



    VAR_6 = FUNC_2(VAR_4, ((void*)0), VAR_3, ((void*)0), VAR_3);
    FUNC_21(VAR_6 == VAR_0, "Unexpected hr %#x.\n", VAR_6);

    VAR_6 = FUNC_3(VAR_4, VAR_3);
    FUNC_21(VAR_6 == VAR_0, "Unexpected hr %#x.\n", VAR_6);

    VAR_6 = FUNC_4(VAR_4, 0x100);
    FUNC_21(VAR_6 == VAR_0, "Unexpected hr %#x.\n", VAR_6);

    VAR_6 = FUNC_5(VAR_4, VAR_3, 1);
    FUNC_21(VAR_6 == VAR_0, "Unexpected hr %#x.\n", VAR_6);

    VAR_6 = FUNC_6(VAR_4, VAR_3);
    FUNC_21(VAR_6 == VAR_0, "Unexpected hr %#x.\n", VAR_6);



    VAR_6 = FUNC_7(VAR_4, ((void*)0), VAR_3, ((void*)0), ((void*)0));
    FUNC_21(VAR_6 == VAR_0, "Unexpected hr %#x.\n", VAR_6);

    VAR_6 = FUNC_8(VAR_4);
    FUNC_21(VAR_6 == VAR_0, "Unexpected hr %#x.\n", VAR_6);

    VAR_6 = FUNC_9(VAR_4);
    FUNC_21(VAR_6 == VAR_0, "Unexpected hr %#x.\n", VAR_6);

    VAR_6 = FUNC_10(VAR_4, VAR_3);
    FUNC_21(VAR_6 == VAR_0, "Unexpected hr %#x.\n", VAR_6);

    VAR_6 = FUNC_11(VAR_4);
    FUNC_21(VAR_6 == VAR_0, "Unexpected hr %#x.\n", VAR_6);

    VAR_6 = FUNC_12(VAR_4, VAR_3);
    FUNC_21(VAR_6 == VAR_0, "Unexpected hr %#x.\n", VAR_6);

    VAR_6 = FUNC_13(VAR_4, VAR_3);
    FUNC_21(VAR_6 == VAR_0, "Unexpected hr %#x.\n", VAR_6);




    VAR_6 = FUNC_14(VAR_4, VAR_3, VAR_3);
    FUNC_21(VAR_6 == VAR_0, "Unexpected hr %#x.\n", VAR_6);

    VAR_6 = FUNC_15(VAR_4, VAR_3, ((void*)0));
    FUNC_21(VAR_6 == VAR_0, "Unexpected hr %#x.\n", VAR_6);

    VAR_6 = FUNC_16(VAR_4, VAR_3);
    FUNC_21(VAR_6 == VAR_0, "Unexpected hr %#x.\n", VAR_6);

    VAR_6 = FUNC_17(VAR_4, VAR_3, 1);
    FUNC_21(VAR_6 == VAR_0, "Unexpected hr %#x.\n", VAR_6);

    VAR_6 = FUNC_18(VAR_4, VAR_2);
    FUNC_21(VAR_6 == VAR_0, "Unexpected hr %#x.\n", VAR_6);

    VAR_6 = FUNC_19(VAR_4, ((void*)0), VAR_3, ((void*)0));
    FUNC_21(VAR_6 == VAR_0, "Unexpected hr %#x.\n", VAR_6);

    VAR_6 = FUNC_20(VAR_4, VAR_3);
    FUNC_21(VAR_6 == VAR_0, "Unexpected hr %#x.\n", VAR_6);




    VAR_6 = FUNC_0(VAR_4);
    FUNC_21(VAR_6 == VAR_1, "Failed to flush, hr %#x.\n", VAR_6);
}
