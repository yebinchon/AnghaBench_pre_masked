
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RECT ;
typedef int MYSTRUCT ;
typedef int IWidget ;
typedef int IDispatch ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int *,int **) ;
 scalar_t__ FUNC_3 (int *,int ,int *,int *,int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int,char*,...) ;
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

__attribute__((used)) static void FUNC_8(IWidget *VAR_14, IDispatch *VAR_15)
{
    MYSTRUCT VAR_16, VAR_17, VAR_18, *VAR_19;
    RECT VAR_20, VAR_21, VAR_22;
    HRESULT VAR_23;

    FUNC_6(&VAR_16, &VAR_2, sizeof(MYSTRUCT));
    FUNC_6(&VAR_17, &VAR_3, sizeof(MYSTRUCT));
    FUNC_6(&VAR_18, &VAR_4, sizeof(MYSTRUCT));
    VAR_23 = FUNC_1(VAR_14, VAR_1, &VAR_16, &VAR_17, &VAR_18);
    FUNC_7(VAR_23 == VAR_0, "Got hr %#x.\n", VAR_23);
    FUNC_7(!FUNC_5(&VAR_16, &VAR_5, sizeof(MYSTRUCT)), "Structs didn't match.\n");
    FUNC_7(!FUNC_5(&VAR_17, &VAR_3, sizeof(MYSTRUCT)), "Structs didn't match.\n");
    FUNC_7(!FUNC_5(&VAR_18, &VAR_6, sizeof(MYSTRUCT)), "Structs didn't match.\n");

    FUNC_6(&VAR_17, &VAR_1, sizeof(MYSTRUCT));
    VAR_19 = &VAR_17;
    VAR_23 = FUNC_2(VAR_14, &VAR_19);
    FUNC_7(VAR_23 == VAR_0, "Got hr %#x.\n", VAR_23);



    VAR_23 = FUNC_4(VAR_14, VAR_13);
    FUNC_7(VAR_23 == VAR_0, "Got hr %#x.\n", VAR_23);



    VAR_20 = VAR_8;
    VAR_21 = VAR_9;
    VAR_22 = VAR_10;
    VAR_23 = FUNC_3(VAR_14, VAR_7, &VAR_20, &VAR_21, &VAR_22);
    FUNC_7(VAR_23 == VAR_0, "Got hr %#x.\n", VAR_23);
    FUNC_7(FUNC_0(&VAR_20, &VAR_11), "Rects didn't match.\n");
    FUNC_7(FUNC_0(&VAR_21, &VAR_9), "Rects didn't match.\n");
    FUNC_7(FUNC_0(&VAR_22, &VAR_12), "Rects didn't match.\n");
}
