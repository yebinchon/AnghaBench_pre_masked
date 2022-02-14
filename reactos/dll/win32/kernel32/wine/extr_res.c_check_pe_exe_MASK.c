
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int Size; int VirtualAddress; } ;
struct TYPE_6__ {scalar_t__ Magic; TYPE_5__* DataDirectory; } ;
struct TYPE_9__ {TYPE_1__ OptionalHeader; } ;
struct TYPE_7__ {TYPE_5__* DataDirectory; } ;
struct TYPE_8__ {TYPE_2__ OptionalHeader; } ;
typedef int QUEUEDUPDATES ;
typedef int IMAGE_SECTION_HEADER ;
typedef TYPE_3__ IMAGE_NT_HEADERS64 ;
typedef TYPE_4__ IMAGE_NT_HEADERS32 ;
typedef TYPE_5__ IMAGE_DATA_DIRECTORY ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int ,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,int *) ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_3 (scalar_t__,int ,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (char*,int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*,int ) ;
 int * FUNC_7 (void*,int ,int *) ;

__attribute__((used)) static BOOL FUNC_8( HANDLE VAR_6, QUEUEDUPDATES *VAR_7 )
{
    const IMAGE_NT_HEADERS32 *VAR_8;
    const IMAGE_NT_HEADERS64 *VAR_9;
    const IMAGE_SECTION_HEADER *VAR_10;
    const IMAGE_DATA_DIRECTORY *VAR_11;
    BOOL VAR_12 = VAR_0;
    HANDLE VAR_13;
    DWORD VAR_14, VAR_15 = 0;
    void *VAR_16 = ((void*)0);

    VAR_14 = FUNC_2( VAR_6, ((void*)0) );

    VAR_13 = FUNC_1( VAR_6, ((void*)0), VAR_4, 0, 0, ((void*)0) );
    if (!VAR_13)
        goto done;

    VAR_16 = FUNC_3( VAR_13, VAR_1, 0, 0, VAR_14 );
    if (!VAR_16)
        goto done;

    VAR_8 = (IMAGE_NT_HEADERS32 *)FUNC_6( VAR_16, VAR_14 );
    if (!VAR_8)
        goto done;

    VAR_9 = (IMAGE_NT_HEADERS64*)VAR_8;
    VAR_11 = &VAR_8->OptionalHeader.DataDirectory[0];
    if (VAR_8->OptionalHeader.Magic == VAR_3)
        VAR_11 = &VAR_9->OptionalHeader.DataDirectory[0];

    FUNC_4("resources: %08x %08x\n",
          VAR_11[VAR_2].VirtualAddress,
          VAR_11[VAR_2].Size);

    VAR_10 = FUNC_7( VAR_16, VAR_14, &VAR_15 );
    if (!VAR_10)
        goto done;

    VAR_12 = VAR_5;

done:
    if (VAR_16)
        FUNC_5( VAR_16 );
    if (VAR_13)
        FUNC_0( VAR_13 );

    return VAR_12;
}
