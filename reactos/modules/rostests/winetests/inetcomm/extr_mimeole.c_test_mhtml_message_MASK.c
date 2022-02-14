
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int IStream ;
typedef int IMimeMessage ;
typedef int IMimeBody ;
typedef int HRESULT ;
typedef int HBODY ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *,void**) ;
 int FUNC_4 (int *,int ,int ,int*) ;
 int FUNC_5 (int *,int*,int **) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int **) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_10 (int ) ;
 int VAR_7 ;
 int FUNC_11 (int,char*,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int,char*,int) ;

__attribute__((used)) static void FUNC_14(void)
{
    IMimeMessage *VAR_8;
    IMimeBody *VAR_9;
    HBODY *VAR_10;
    IStream *VAR_11;
    ULONG VAR_12;
    HRESULT VAR_13;

    VAR_13 = FUNC_9(((void*)0), &VAR_8);
    FUNC_11(VAR_13 == VAR_5, "MimeOleCreateMessage failed: %08x\n", VAR_13);

    VAR_11 = FUNC_10(VAR_7);
    VAR_13 = FUNC_6(VAR_8, VAR_11);
    FUNC_8(VAR_11);
    FUNC_11(VAR_13 == VAR_5, "Load failed: %08x\n", VAR_13);

    VAR_13 = FUNC_4(VAR_8, VAR_0, VAR_6, &VAR_12);
    FUNC_11(VAR_13 == VAR_5, "CountBodies failed: %08x\n", VAR_13);
    FUNC_11(VAR_12 == 3, "got %d\n", VAR_12);

    VAR_13 = FUNC_5(VAR_8, &VAR_12, &VAR_10);
    FUNC_11(VAR_13 == VAR_5, "GetAttachments failed: %08x\n", VAR_13);
    FUNC_11(VAR_12 == 2, "count = %u\n", VAR_12);

    VAR_13 = FUNC_3(VAR_8, VAR_10[0], &VAR_4, (void**)&VAR_9);
    FUNC_11(VAR_13 == VAR_5, "BindToObject failed: %08x\n", VAR_13);

    VAR_13 = FUNC_1(VAR_9, VAR_2, &VAR_11);
    FUNC_11(VAR_13 == VAR_5, "GetData failed: %08x\n", VAR_13);
    FUNC_13(VAR_11, VAR_5, "<HTML></HTML>", -1);
    FUNC_8(VAR_11);

    FUNC_12(VAR_9, VAR_3);

    FUNC_2(VAR_9);

    VAR_13 = FUNC_3(VAR_8, VAR_10[1], &VAR_4, (void**)&VAR_9);
    FUNC_11(VAR_13 == VAR_5, "BindToObject failed: %08x\n", VAR_13);

    FUNC_12(VAR_9, VAR_1);

    VAR_13 = FUNC_1(VAR_9, VAR_2, &VAR_11);
    FUNC_11(VAR_13 == VAR_5, "GetData failed: %08x\n", VAR_13);
    FUNC_13(VAR_11, VAR_5, "Test", -1);
    FUNC_8(VAR_11);

    FUNC_2(VAR_9);

    FUNC_0(VAR_10);

    FUNC_7(VAR_8);
}
