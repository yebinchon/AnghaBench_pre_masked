
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int statstg ;
typedef int buf ;
struct TYPE_16__ {TYPE_1__* lpVtbl; } ;
struct TYPE_15__ {int * pwcsName; } ;
struct TYPE_14__ {int (* Write ) (TYPE_3__*,char*,int,int*) ;int (* Seek ) (TYPE_3__*,int const,int ,int *) ;int (* Read ) (TYPE_3__*,unsigned char*,int,int*) ;} ;
typedef TYPE_2__ STATSTG ;
typedef int LARGE_INTEGER ;
typedef TYPE_3__ IStream ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int,int) ;
 int FUNC_4 (int,char*,int,...) ;
 int FUNC_5 (TYPE_3__*,char*,int,int*) ;
 int FUNC_6 (TYPE_3__*,int const,int ,int *) ;
 int FUNC_7 (TYPE_3__*,unsigned char*,int,int*) ;
 int FUNC_8 (TYPE_3__*,int const,int ,int *) ;
 int FUNC_9 (TYPE_3__*,unsigned char*,int,int*) ;
 int FUNC_10 (TYPE_3__*,unsigned char*,int,int*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(IStream *VAR_7, DWORD VAR_8)
{
    static const LARGE_INTEGER VAR_9;
    HRESULT VAR_10;
    unsigned char VAR_11[16];
    DWORD VAR_12, VAR_13;
    STATSTG VAR_14;



    VAR_12 = 0xdeadbeaf;
    VAR_10 = VAR_7->lpVtbl->Write(VAR_7, "\x5e\xa7", 2, &VAR_12);
    if (VAR_8 == VAR_2 || VAR_8 == VAR_1)
    {
        FUNC_4(VAR_10 == VAR_6, "IStream_Write error %#x (access %#x)\n", VAR_10, VAR_8);
        FUNC_4(VAR_12 == 2, "expected 2, got %u\n", VAR_12);
    }
    else
    {
        FUNC_4(VAR_10 == VAR_3 || FUNC_2(VAR_10 == VAR_6) , "expected STG_E_ACCESSDENIED, got %#x (access %#x)\n", VAR_10, VAR_8);
        FUNC_4(VAR_12 == 0xdeadbeaf || FUNC_2(VAR_12 == 2) , "expected 0xdeadbeaf, got %#x\n", VAR_12);
        VAR_12 = 0;
        if (VAR_10 == VAR_6) return;
    }

    VAR_10 = VAR_7->lpVtbl->Seek(VAR_7, VAR_9, VAR_4, ((void*)0));
    FUNC_4(VAR_10 == VAR_6, "Seek error %#x\n", VAR_10);

    VAR_13 = 0xdeadbeaf;
    VAR_10 = VAR_7->lpVtbl->Read(VAR_7, VAR_11, 2, &VAR_13);
    if (VAR_12 != 0)
    {
        FUNC_4(VAR_10 == VAR_6 || FUNC_2(VAR_10 == VAR_5) , "IStream_Read error %#x (access %#x, written %u)\n", VAR_10, VAR_8, VAR_12);
        if (VAR_10 == VAR_6 && (VAR_8 == VAR_2 || VAR_8 == VAR_1))
        {
            FUNC_4(VAR_13 == 2, "expected 2, got %u\n", VAR_13);
            FUNC_4(VAR_11[0] == 0x5e && VAR_11[1] == 0xa7, "expected 5ea7, got %02x%02x\n", VAR_11[0], VAR_11[1]);
        }
        else
            FUNC_4(VAR_13 == 0, "expected 0, got %u\n", VAR_13);
    }
    else
    {
        FUNC_4(VAR_10 == VAR_5, "expected S_FALSE, got %#x (access %#x, written %u)\n", VAR_10, VAR_8, VAR_12);
        FUNC_4(VAR_13 == 0, "expected 0, got %u\n", VAR_13);
    }

    VAR_10 = VAR_7->lpVtbl->Seek(VAR_7, VAR_9, VAR_4, ((void*)0));
    FUNC_4(VAR_10 == VAR_6, "Seek error %#x\n", VAR_10);

    VAR_13 = 0xdeadbeaf;
    VAR_10 = VAR_7->lpVtbl->Read(VAR_7, VAR_11, 0, &VAR_13);
    FUNC_4(VAR_10 == VAR_6, "IStream_Read error %#x (access %#x, written %u)\n", VAR_10, VAR_8, VAR_12);
    FUNC_4(VAR_13 == 0, "expected 0, got %u\n", VAR_13);

    VAR_13 = 0xdeadbeaf;
    VAR_10 = VAR_7->lpVtbl->Read(VAR_7, VAR_11, sizeof(VAR_11), &VAR_13);
    FUNC_4(VAR_10 == VAR_5, "expected S_FALSE, got %#x (access %#x, written %u)\n", VAR_10, VAR_8, VAR_12);
    FUNC_4(VAR_13 == VAR_12, "expected %u, got %u\n", VAR_12, VAR_13);
    if (VAR_13)
        FUNC_4(VAR_11[0] == 0x5e && VAR_11[1] == 0xa7, "expected 5ea7, got %02x%02x\n", VAR_11[0], VAR_11[1]);

    FUNC_3(&VAR_14, 0xff, sizeof(VAR_14));
    VAR_10 = FUNC_1(VAR_7, &VAR_14, 0);
    FUNC_4(VAR_10 == VAR_6, "Stat failed, hr %#x.\n", VAR_10);
    FUNC_4(VAR_14.pwcsName != ((void*)0), "Unexpected name %s.\n", FUNC_11(VAR_14.pwcsName));
    FUNC_0(VAR_14.pwcsName);

    FUNC_3(&VAR_14, 0xff, sizeof(VAR_14));
    VAR_10 = FUNC_1(VAR_7, &VAR_14, VAR_0);
    FUNC_4(VAR_10 == VAR_6, "Stat failed, hr %#x.\n", VAR_10);
    FUNC_4(VAR_14.pwcsName == ((void*)0), "Unexpected name %s.\n", FUNC_11(VAR_14.pwcsName));
}
