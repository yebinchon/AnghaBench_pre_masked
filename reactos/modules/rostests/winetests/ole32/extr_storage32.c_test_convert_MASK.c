
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IStorage ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (char const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (char const*,int,int ,int **) ;
 int VAR_8 ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static void FUNC_6(void)
{
    static const WCHAR VAR_9[] = {'s','t','o','r','a','g','e','.','s','t','g',0};
    IStorage *VAR_10;
    HRESULT VAR_11;

    VAR_11 = FUNC_1(((void*)0));
    FUNC_5(VAR_11 == VAR_0, "got 0x%08x\n", VAR_11);

    VAR_11 = FUNC_4( VAR_9, VAR_2 | VAR_4 | VAR_3, 0, &VAR_10);
    FUNC_5(VAR_11 == VAR_7, "StgCreateDocfile failed\n");
    VAR_11 = FUNC_1(VAR_10);
    FUNC_5(VAR_11 == VAR_5, "got 0x%08x\n", VAR_11);
    VAR_11 = FUNC_3(VAR_10, VAR_8);
    FUNC_5(VAR_11 == VAR_7, "got 0x%08x\n", VAR_11);
    VAR_11 = FUNC_3(VAR_10, VAR_8);
    FUNC_5(VAR_11 == VAR_7, "got 0x%08x\n", VAR_11);
    VAR_11 = FUNC_1(VAR_10);
    FUNC_5(VAR_11 == VAR_7, "got 0x%08x\n", VAR_11);
    VAR_11 = FUNC_3(VAR_10, VAR_1);
    FUNC_5(VAR_11 == VAR_7, "got 0x%08x\n", VAR_11);
    VAR_11 = FUNC_1(VAR_10);
    FUNC_5(VAR_11 == VAR_6, "got 0x%08x\n", VAR_11);

    FUNC_2(VAR_10);

    FUNC_0(VAR_9);
}
