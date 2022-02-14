
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ cbData; int * pbData; } ;
struct TYPE_8__ {void* cbData; void* pbData; } ;
typedef scalar_t__ LONG ;
typedef TYPE_1__ DATA_BLOB ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_4__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *,TYPE_1__*,int *,int *,int ,TYPE_4__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 void* FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(void)
{
    LONG VAR_11;
    DATA_BLOB VAR_12;
    DATA_BLOB VAR_13;

    VAR_12.pbData=(void*)VAR_9;
    VAR_12.cbData=FUNC_5(VAR_9)+1;

    VAR_13.pbData=(void*)VAR_7;
    VAR_13.cbData=FUNC_5(VAR_7)+1;

    FUNC_1(0xDEADBEEF);
    VAR_8 = FUNC_4(((void*)0),VAR_6,((void*)0),((void*)0),((void*)0),0,&VAR_3);
    FUNC_3(!VAR_8, "Encrypting without plain data source.\n");
    VAR_11 = FUNC_0();
    FUNC_3(VAR_11 == VAR_0, "Wrong (%u) GetLastError seen\n",VAR_11);

    FUNC_1(0xDEADBEEF);
    VAR_8 = FUNC_4(&VAR_12,VAR_6,((void*)0),((void*)0),((void*)0),0,((void*)0));
    FUNC_3(!VAR_8, "Encrypting without cipher destination.\n");
    VAR_11 = FUNC_0();
    FUNC_3(VAR_11 == VAR_0, "Wrong (%u) GetLastError seen\n",VAR_11);

    VAR_3.pbData=((void*)0);
    VAR_3.cbData=0;


    FUNC_1(0xDEADBEEF);
    VAR_8 = FUNC_4(&VAR_12,VAR_6,((void*)0),((void*)0),((void*)0),0,&VAR_3);
    FUNC_3(VAR_8 ||
     FUNC_2(!VAR_8),
     "Encrypting without entropy.\n");
    if (VAR_8)
    {
        VAR_11 = FUNC_0();
        FUNC_3(VAR_11 == VAR_2 ||
           VAR_11 == VAR_1,
           "Expected ERROR_SUCCESS or ERROR_IO_PENDING, got %d\n",VAR_11);
    }

    VAR_4.pbData=((void*)0);
    VAR_4.cbData=0;


    FUNC_1(0xDEADBEEF);
    VAR_8 = FUNC_4(&VAR_12,VAR_6,&VAR_13,((void*)0),((void*)0),0,&VAR_4);
    FUNC_3(VAR_8 ||
     FUNC_2(!VAR_8),
     "Encrypting with entropy.\n");

    VAR_5.pbData=((void*)0);
    VAR_5.cbData=0;


    VAR_12.pbData=(void*)VAR_10;
    VAR_12.cbData=FUNC_5(VAR_10)+1;
    FUNC_1(0xDEADBEEF);
    VAR_8 = FUNC_4(&VAR_12,((void*)0),&VAR_13,((void*)0),((void*)0),0,&VAR_5);
    if (!VAR_8)
    {

        FUNC_3(FUNC_0() == VAR_0,
           "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_0());
    }
}
