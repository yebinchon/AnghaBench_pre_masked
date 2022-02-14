
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int **) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    IUnknown *VAR_1;
    HRESULT VAR_2;


    if (!&FUNC_1) {
        FUNC_2("SHGetThreadRef not found\n");
        return;
    }

    VAR_1 = ((void*)0);
    VAR_2 = FUNC_1(&VAR_1);
    FUNC_0( (VAR_2 == VAR_0) && (VAR_1 == ((void*)0)),
        "got 0x%x and %p (expected E_NOINTERFACE and NULL)\n", VAR_2, VAR_1);

    if (0) {

        FUNC_1(((void*)0));
    }
}
