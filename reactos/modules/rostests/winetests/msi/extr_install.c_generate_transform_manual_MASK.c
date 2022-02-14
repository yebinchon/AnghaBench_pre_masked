
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_7__ {size_t size; int data; int name; } ;
struct TYPE_5__ {int member_0; int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_6__ {int member_0; TYPE_1__ member_3; int member_2; int member_1; } ;
typedef int IStream ;
typedef int IStorage ;
typedef scalar_t__ HRESULT ;
typedef size_t DWORD ;
typedef TYPE_2__ CLSID ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,size_t,int ,int ,int **) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_2__ const*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,size_t,size_t*) ;
 int FUNC_6 (int ,int ,int ,int,int *,int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_7 (int *,size_t const,int ,int **) ;
 int VAR_8 ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 () ;
 TYPE_3__* VAR_9 ;

__attribute__((used)) static void FUNC_10(void)
{
    IStorage *VAR_10 = ((void*)0);
    IStream *VAR_11;
    WCHAR VAR_12[0x20];
    HRESULT VAR_13;
    DWORD VAR_14, VAR_15;
    const DWORD VAR_16 = VAR_2|VAR_4|VAR_3|VAR_5;

    const CLSID VAR_17 = { 0xc1082,0,0,{0xc0,0,0,0,0,0,0,0x46}};

    FUNC_6(VAR_0, 0, VAR_8, -1, VAR_12, 0x20);

    VAR_13 = FUNC_7(VAR_12, VAR_16, 0, &VAR_10);
    FUNC_8(VAR_13 == VAR_7, "failed to create storage\n");
    if (!VAR_10)
        return;

    VAR_13 = FUNC_3(VAR_10, &VAR_17);
    FUNC_8(VAR_13 == VAR_7, "failed to set storage type\n");

    for (VAR_14=0; VAR_14<VAR_1; VAR_14++)
    {
        VAR_13 = FUNC_1(VAR_10, VAR_9[VAR_14].name,
                            VAR_6 | VAR_5, 0, 0, &VAR_11);
        if (FUNC_0(VAR_13))
        {
            FUNC_8(0, "failed to create stream %08x\n", VAR_13);
            continue;
        }

        VAR_13 = FUNC_5(VAR_11, VAR_9[VAR_14].data,
                          VAR_9[VAR_14].size, &VAR_15);
        if (FUNC_0(VAR_13) || VAR_15 != VAR_9[VAR_14].size)
            FUNC_8(0, "failed to write stream\n");
        FUNC_4(VAR_11);
    }

    FUNC_2(VAR_10);

    FUNC_9();
}
