
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int IUnknown_iface; } ;
typedef TYPE_1__ threadref ;
typedef int LONG ;
typedef int IUnknown ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int*) ;
 int FUNC_1 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_2 (int **) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    threadref VAR_3;
    IUnknown *VAR_4;
    HRESULT VAR_5;
    LONG VAR_6;


    if (!&FUNC_3) {
        FUNC_4("SHSetThreadRef not found\n");
        return;
    }


    VAR_5 = FUNC_3(((void*)0));
    FUNC_1(VAR_5 == VAR_2, "got 0x%x (expected S_OK)\n", VAR_5);


    FUNC_0(&VAR_3, &VAR_6);
    VAR_0 = 0;
    VAR_6 = 1;
    VAR_5 = FUNC_3(&VAR_3.IUnknown_iface);
    FUNC_1( (VAR_5 == VAR_2) && (VAR_6 == 1) && (!VAR_0),
        "got 0x%x with %d, %d (expected S_OK with 1, 0)\n",
        VAR_5, VAR_6, VAR_0);


    VAR_0 = 0;
    VAR_6 = 1;
    VAR_4 = ((void*)0);
    VAR_5 = FUNC_2(&VAR_4);
    FUNC_1( (VAR_5 == VAR_2) && (VAR_4 == &VAR_3.IUnknown_iface) && (VAR_6 == 2) && (VAR_0 == 1),
        "got 0x%x and %p with %d, %d (expected S_OK and %p with 2, 1)\n",
        VAR_5, VAR_4, VAR_6, VAR_0, &VAR_3);


    VAR_5 = FUNC_3(((void*)0));
    FUNC_1(VAR_5 == VAR_2, "got 0x%x (expected S_OK)\n", VAR_5);


    VAR_5 = FUNC_2(&VAR_4);
    FUNC_1( (VAR_5 == VAR_1) && (VAR_4 == ((void*)0)),
        "got 0x%x and %p (expected E_NOINTERFACE and NULL)\n", VAR_5, VAR_4);

}
