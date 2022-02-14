
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IClassFactory ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int *,int *,void**) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int VAR_15 ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_6(void)
{
    IClassFactory *VAR_16;
    HRESULT VAR_17;

    VAR_15 = VAR_4;

    VAR_17 = FUNC_0(&VAR_1, VAR_0, ((void*)0), &VAR_3,
                            (void**)&VAR_16);
    FUNC_4(VAR_17 == VAR_6 ||
       FUNC_3(VAR_17 == VAR_5),
       "CoGetClassObject failed: %08x\n", VAR_17);
    if(FUNC_1(VAR_17))
        return;

    VAR_11 = VAR_12;
    FUNC_5(VAR_16, VAR_8, VAR_7);
    VAR_11 = VAR_13;
    FUNC_5(VAR_16, VAR_9, VAR_7);
    VAR_11 = VAR_14;
    FUNC_5(VAR_16, VAR_10, VAR_2);

    FUNC_2(VAR_16);
}
