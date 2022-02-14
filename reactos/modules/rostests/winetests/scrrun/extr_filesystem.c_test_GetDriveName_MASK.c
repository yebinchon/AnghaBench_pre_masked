
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct getdrivename_test {int * drive; scalar_t__* path; } ;
typedef int HRESULT ;
typedef int * BSTR ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int **) ;
 int VAR_1 ;
 int * FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 struct getdrivename_test* VAR_3 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int,char*,int ,...) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void)
{
    const struct getdrivename_test *VAR_4 = VAR_3;
    HRESULT VAR_5;
    BSTR VAR_6;

    VAR_5 = FUNC_0(VAR_2, ((void*)0), ((void*)0));
    FUNC_4(VAR_5 == VAR_0, "got 0x%08x\n", VAR_5);

    VAR_6 = (void*)0xdeadbeef;
    VAR_5 = FUNC_0(VAR_2, ((void*)0), &VAR_6);
    FUNC_4(VAR_5 == VAR_1, "got 0x%08x\n", VAR_5);
    FUNC_4(VAR_6 == ((void*)0), "got %p\n", *VAR_6);

    while (*VAR_4->path) {
        BSTR VAR_7 = FUNC_1(VAR_4->path);
        VAR_6 = (void*)0xdeadbeef;
        VAR_5 = FUNC_0(VAR_2, VAR_7, &VAR_6);
        FUNC_4(VAR_5 == VAR_1, "got 0x%08x\n", VAR_5);
        if (VAR_6)
            FUNC_4(!FUNC_3(VAR_4->drive, VAR_6), "got %s, expected %s\n", FUNC_5(VAR_6), FUNC_5(VAR_4->drive));
        else
            FUNC_4(!*VAR_4->drive, "got %s, expected %s\n", FUNC_5(VAR_6), FUNC_5(VAR_4->drive));
        FUNC_2(VAR_7);
        FUNC_2(VAR_6);
        VAR_4++;
    }
}
