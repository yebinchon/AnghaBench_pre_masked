
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_5__ {size_t size; int * data; int name; } ;
struct TYPE_4__ {int pwcsName; } ;
typedef TYPE_1__ STATSTG ;
typedef int IStream ;
typedef int IStorage ;
typedef int IEnumSTATSTG ;
typedef size_t HRESULT ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (size_t) ;
 size_t FUNC_2 (int *,int,TYPE_1__*,size_t*) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int *,int ,int *,int ,int **) ;
 size_t FUNC_5 (int *,int ,int *,int,int ,int **) ;
 size_t FUNC_6 (int *,int *,int,size_t*) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *,char,int) ;
 int FUNC_11 (int,char*,...) ;

__attribute__((used)) static void FUNC_12(IStorage *VAR_6)
{
    IEnumSTATSTG *VAR_7 = ((void*)0);
    IStream *VAR_8;
    HRESULT VAR_9;
    STATSTG VAR_10;
    ULONG VAR_11, VAR_12;
    BYTE VAR_13[VAR_0];
    BYTE VAR_14[VAR_0];
    DWORD VAR_15;

    FUNC_10(VAR_14, 'a', VAR_0);

    VAR_9 = FUNC_4(VAR_6, 0, ((void*)0), 0, &VAR_7);
    FUNC_11(VAR_9 == VAR_3, "Expected S_OK, got %08x\n", VAR_9);

    VAR_11 = 0;
    while(VAR_4)
    {
        VAR_12 = 0;
        VAR_9 = FUNC_2(VAR_7, 1, &VAR_10, &VAR_12);
        if(FUNC_1(VAR_9) || !VAR_12)
            break;

        FUNC_11(!FUNC_8(VAR_10.pwcsName, VAR_5[VAR_11].name),
           "Expected table %d name to match\n", VAR_11);

        VAR_8 = ((void*)0);
        VAR_9 = FUNC_5(VAR_6, VAR_10.pwcsName, ((void*)0),
                                 VAR_1 | VAR_2, 0, &VAR_8);
        FUNC_11(VAR_9 == VAR_3, "Expected S_OK, got %08x\n", VAR_9);
        FUNC_11(VAR_8 != ((void*)0), "Expected non-NULL stream\n");

        FUNC_0(VAR_10.pwcsName);

        VAR_15 = VAR_0;
        FUNC_10(VAR_13, 'a', VAR_0);
        VAR_9 = FUNC_6(VAR_8, VAR_13, VAR_15, &VAR_12);
        FUNC_11(VAR_9 == VAR_3, "Expected S_OK, got %08x\n", VAR_9);

        FUNC_11(VAR_12 == VAR_5[VAR_11].size,
           "Expected %d, got %d\n", VAR_5[VAR_11].size, VAR_12);

        if (!VAR_5[VAR_11].size)
            FUNC_11(!FUNC_9(VAR_13, VAR_14, VAR_0), "data should not be changed\n");
        else
            FUNC_11(!FUNC_9(VAR_13, VAR_5[VAR_11].data, VAR_5[VAR_11].size),
               "Expected table %d data to match\n", VAR_11);

        FUNC_7(VAR_8);
        VAR_11++;
    }

    FUNC_11(VAR_11 == 3, "Expected 3, got %d\n", VAR_11);

    FUNC_3(VAR_7);
}
