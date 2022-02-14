
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int,char*,int,...) ;
 int FUNC_3 (int*,int **) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,int *,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    IUnknown *VAR_3;
    IUnknown *VAR_4;
    LONG VAR_5;
    HRESULT VAR_6;


    if (!&FUNC_3) {
        FUNC_7("SHCreateThreadRef not found\n");
        return;
    }


    VAR_6 = FUNC_5(((void*)0));
    FUNC_2(VAR_6 == VAR_2, "got 0x%x (expected S_OK)\n", VAR_6);

    VAR_3 = ((void*)0);
    VAR_5 = 0xdeadbeef;
    VAR_6 = FUNC_3(&VAR_5, &VAR_3);
    FUNC_2((VAR_6 == VAR_2) && VAR_3 && (VAR_5 == 1),
        "got 0x%x and %p with %d (expected S_OK and '!= NULL' with 1)\n",
        VAR_6, VAR_3, VAR_5);


    VAR_4 = ((void*)0);
    VAR_6 = FUNC_4(&VAR_4);
    FUNC_2( (VAR_6 == VAR_1) && (VAR_4 == ((void*)0)),
        "got 0x%x and %p (expected E_NOINTERFACE and NULL)\n", VAR_6, VAR_4);


    VAR_6 = FUNC_5(VAR_3);
    FUNC_2(VAR_6 == VAR_2, "got 0x%x (expected S_OK)\n", VAR_6);


    VAR_4 = ((void*)0);
    VAR_6 = FUNC_4(&VAR_4);
    FUNC_2( (VAR_6 == VAR_2) && (VAR_4 == VAR_3) && (VAR_5 == 2),
        "got 0x%x and %p with %d (expected S_OK and %p with 2)\n",
        VAR_6, VAR_4, VAR_5, VAR_3);


    if (FUNC_1(VAR_6)) {
        VAR_6 = FUNC_0(VAR_3);
        FUNC_2((VAR_6 == 1) && (VAR_6 == VAR_5),
            "got %d with %d (expected 1 with 1)\n", VAR_6, VAR_5);
    }


    if (VAR_3) {
        VAR_6 = FUNC_0(VAR_3);
        FUNC_2((VAR_6 == 0) && (VAR_6 == VAR_5),
            "got %d with %d (expected 0 with 0)\n", VAR_6, VAR_5);
    }

    if (0) {


        VAR_4 = ((void*)0);
        VAR_6 = FUNC_4(&VAR_4);
        FUNC_6("got 0x%x and %p with %d\n", VAR_6, VAR_4, VAR_5);
    }


    VAR_6 = FUNC_5(((void*)0));
    FUNC_2(VAR_6 == VAR_2, "got 0x%x (expected S_OK)\n", VAR_6);


    if (0) {

        VAR_3 = ((void*)0);
        VAR_6 = FUNC_3(((void*)0), &VAR_3);
        FUNC_2(VAR_6 == VAR_0, "got 0x%x (expected E_INVALIDARG)\n", VAR_6);

        VAR_5 = 0xdeadbeef;

        VAR_6 = FUNC_3(&VAR_5, ((void*)0));
        FUNC_2( (VAR_6 == VAR_0) && (VAR_5 == 0xdeadbeef),
            "got 0x%x with 0x%x (expected E_INVALIDARG and oxdeadbeef)\n",
            VAR_6, VAR_5);
    }
}
