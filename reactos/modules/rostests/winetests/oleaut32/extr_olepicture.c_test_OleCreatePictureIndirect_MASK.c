
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int desc ;
struct TYPE_3__ {int cbSizeofstruct; short picType; } ;
typedef TYPE_1__ PICTDESC ;
typedef int OLE_HANDLE ;
typedef int IPicture ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,short*) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_1__*,int *,int ,void**) ;
 short VAR_4 ;
 short VAR_5 ;
 short VAR_6 ;
 short VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (short,int **) ;
 int FUNC_9 (int,char*,short,...) ;

__attribute__((used)) static void FUNC_10(void)
{
    PICTDESC VAR_10;
    OLE_HANDLE VAR_11;
    IPicture *VAR_12;
    HRESULT VAR_13;
    short VAR_14, VAR_15;

if (0)
{

    FUNC_7(((void*)0), &VAR_3, VAR_9, ((void*)0));
}

    VAR_10.cbSizeofstruct = sizeof(VAR_10);
    VAR_10.picType = VAR_7;
    VAR_12 = (void *)0xdeadbeef;
    VAR_13 = FUNC_7(&VAR_10, &VAR_3, VAR_9, (void **)&VAR_12);
    FUNC_9(VAR_13 == VAR_2, "got %#x\n", VAR_13);
    FUNC_9(VAR_12 == ((void*)0), "got %p\n", VAR_12);

    for (VAR_15 = VAR_7; VAR_15 <= VAR_5; VAR_15++)
    {
        VAR_13 = FUNC_8(VAR_15, &VAR_12);
        FUNC_9(VAR_13 == VAR_8, "%d: got %#x\n", VAR_15, VAR_13);

        VAR_14 = 0xdead;
        VAR_13 = FUNC_4(VAR_12, &VAR_14);
        FUNC_9(VAR_13 == VAR_8, "%d: got %#x\n", VAR_15, VAR_13);
        FUNC_9(VAR_14 == VAR_15, "%d: got %d\n", VAR_15, VAR_14);

        VAR_11 = 0xdeadbeef;
        VAR_13 = FUNC_3(VAR_12, &VAR_11);
        FUNC_9(VAR_13 == VAR_8, "%d: got %#x\n", VAR_15, VAR_13);
        if (VAR_14 == VAR_7 || VAR_14 == VAR_6)
            FUNC_9(VAR_11 == 0, "%d: got %#x\n", VAR_15, VAR_11);
        else
            FUNC_9(VAR_11 != 0 && VAR_11 != 0xdeadbeef, "%d: got %#x\n", VAR_15, VAR_11);

        VAR_11 = 0xdeadbeef;
        VAR_13 = FUNC_5(VAR_12, &VAR_11);
        if (VAR_14 == VAR_4)
        {
            FUNC_9(VAR_13 == VAR_8, "%d: got %#x\n", VAR_15, VAR_13);
            FUNC_9(VAR_11 == 0xbeefdead, "%d: got %#x\n", VAR_15, VAR_11);
        }
        else
        {
            FUNC_9(VAR_13 == VAR_1, "%d: got %#x\n", VAR_15, VAR_13);
            FUNC_9(VAR_11 == 0xdeadbeef || VAR_11 == 0 , "%d: got %#x\n", VAR_15, VAR_11);
        }

        VAR_13 = FUNC_6(VAR_12, FUNC_1(FUNC_0(VAR_0)));
        if (VAR_14 == VAR_4)
            FUNC_9(VAR_13 == VAR_8, "%d: got %#x\n", VAR_15, VAR_13);
        else
            FUNC_9(VAR_13 == VAR_1, "%d: got %#x\n", VAR_15, VAR_13);

        FUNC_2(VAR_12);
    }
}
