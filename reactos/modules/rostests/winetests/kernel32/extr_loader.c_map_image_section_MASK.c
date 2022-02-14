
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int info ;
typedef int ULONG ;
struct TYPE_19__ {scalar_t__ Magic; } ;
struct TYPE_25__ {TYPE_3__ OptionalHeader; } ;
struct TYPE_21__ {TYPE_4__* DataDirectory; } ;
struct TYPE_24__ {TYPE_5__ OptionalHeader; } ;
struct TYPE_23__ {int QuadPart; } ;
struct TYPE_17__ {int LowPart; int HighPart; } ;
struct TYPE_18__ {TYPE_1__ u; int QuadPart; } ;
struct TYPE_22__ {int Attributes; TYPE_2__ Size; int * BaseAddress; } ;
struct TYPE_20__ {scalar_t__ VirtualAddress; } ;
struct TYPE_16__ {int Flags; } ;
typedef int SIZE_T ;
typedef TYPE_6__ SECTION_BASIC_INFORMATION ;
typedef int NTSTATUS ;
typedef TYPE_7__ LARGE_INTEGER ;
typedef int IMAGE_SECTION_HEADER ;
typedef TYPE_8__ IMAGE_NT_HEADERS32 ;
typedef TYPE_9__ IMAGE_NT_HEADERS ;
typedef TYPE_10__ IMAGE_COR20_HEADER ;
typedef int * HMODULE ;
typedef scalar_t__ HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 () ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int * FUNC_5 (char*,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *,TYPE_9__ const*,int const*,void const*,char*) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_9 (int,char*,int,...) ;
 int FUNC_10 (scalar_t__*,int,int *,TYPE_7__*,int ,int,scalar_t__) ;
 int FUNC_11 (scalar_t__,int ,TYPE_6__*,int,int*) ;
 int FUNC_12 (int,char*,TYPE_9__ const*,void const*) ;

__attribute__((used)) static NTSTATUS FUNC_13( const IMAGE_NT_HEADERS *VAR_21, const IMAGE_SECTION_HEADER *VAR_22,
                                   const void *VAR_23, int VAR_24 )
{
    char VAR_25[VAR_10];
    LARGE_INTEGER VAR_26;
    HANDLE VAR_27, VAR_28;
    NTSTATUS VAR_29;
    ULONG VAR_30;
    BOOL VAR_31;
    HMODULE VAR_32;

    VAR_30 = FUNC_8( &VAR_19, VAR_21, VAR_22, VAR_23, VAR_25 );

    VAR_27 = FUNC_1(VAR_25, VAR_5, VAR_4, ((void*)0), VAR_11, 0, 0);
    FUNC_9(VAR_27 != VAR_9, "CreateFile error %d\n", FUNC_4());

    VAR_26.QuadPart = VAR_30;
    VAR_29 = FUNC_10(&VAR_28, VAR_17 | VAR_13 | VAR_14,
                              ((void*)0), &VAR_26, VAR_12, VAR_16, VAR_27 );
    if (!VAR_29)
    {
        SECTION_BASIC_INFORMATION VAR_33;
        SIZE_T VAR_34 = 0xdeadbeef;
        NTSTATUS VAR_35 = FUNC_11( VAR_28, VAR_18, &VAR_33, sizeof(VAR_33), &VAR_34 );
        FUNC_9( !VAR_35, "NtQuerySection failed err %x\n", VAR_35 );
        FUNC_9( VAR_34 == sizeof(VAR_33), "NtQuerySection wrong size %lu\n", VAR_34 );
        FUNC_9( VAR_33.Attributes == (VAR_16 | VAR_15), "NtQuerySection wrong attr %x\n", VAR_33.Attributes );
        FUNC_9( VAR_33.BaseAddress == ((void*)0), "NtQuerySection wrong base %p\n", *VAR_33.BaseAddress );
        FUNC_9( VAR_33.Size.QuadPart == VAR_30, "NtQuerySection wrong size %x%08x / %08x\n",
            VAR_33.Size.u.HighPart, VAR_33.Size.u.LowPart, VAR_30 );
        VAR_31 = FUNC_12( VAR_24, VAR_25, VAR_21, VAR_23 );

        if (VAR_21->OptionalHeader.Magic == (VAR_20 ? VAR_7
                                                         : VAR_8))
        {
            FUNC_6( 0xdeadbeef );
            VAR_32 = FUNC_5( VAR_25, 0, VAR_1 );
            if (!VAR_31 && VAR_21->OptionalHeader.Magic == VAR_7)
            {
                BOOL VAR_36 = VAR_3;
                if (((const IMAGE_NT_HEADERS32 *)VAR_21)->OptionalHeader.DataDirectory[VAR_6].VirtualAddress)
                {
                    const IMAGE_COR20_HEADER *VAR_37 = VAR_23;
                    VAR_36 = (VAR_37->Flags & VAR_0) != 0;
                }
                FUNC_9( VAR_32 != ((void*)0) || FUNC_7(VAR_36),
                    "%u: loading failed err %u\n", VAR_24, FUNC_4() );
            }
            else
            {
                FUNC_9( !VAR_32, "%u: loading succeeded\n", VAR_24 );
                FUNC_9( FUNC_4() == VAR_2, "%u: wrong error %u\n", VAR_24, FUNC_4() );
            }
            if (VAR_32) FUNC_3( VAR_32 );
        }
    }
    if (VAR_28) FUNC_0( VAR_28 );
    FUNC_0( VAR_27 );
    FUNC_2( VAR_25 );
    return VAR_29;
}
