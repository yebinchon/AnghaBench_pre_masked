
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tlibredirect_data {int name_offset; int name_len; } ;
struct ifacepsredirect_data {int tlbid; } ;
typedef int data ;
typedef scalar_t__ WCHAR ;
struct TYPE_3__ {int cbSize; scalar_t__ lpSectionBase; scalar_t__ lpData; } ;
typedef int * REFIID ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;
typedef TYPE_1__ ACTCTX_SECTION_KEYED_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ,int *,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static BOOL FUNC_3(REFIID VAR_4, WCHAR *VAR_5, DWORD VAR_6)
{
    struct ifacepsredirect_data *VAR_7;
    struct tlibredirect_data *VAR_8;
    ACTCTX_SECTION_KEYED_DATA VAR_9;
    WCHAR *VAR_10;

    VAR_9.cbSize = sizeof(VAR_9);
    if (!FUNC_1(0, ((void*)0), VAR_0,
            VAR_4, &VAR_9))
        return VAR_2;

    VAR_7 = (struct ifacepsredirect_data *)VAR_9.lpData;
    if (!FUNC_1(0, ((void*)0), VAR_1,
            &VAR_7->tlbid, &VAR_9))
        return VAR_2;

    VAR_8 = (struct tlibredirect_data *)VAR_9.lpData;
    VAR_10 = (WCHAR *)((BYTE *)VAR_9.lpSectionBase + VAR_8->name_offset);

    if (VAR_8->name_len/sizeof(WCHAR) >= VAR_6)
    {
        FUNC_0("need larger module buffer, %u\n", VAR_8->name_len);
        return VAR_2;
    }

    FUNC_2(VAR_5, VAR_10, VAR_8->name_len);
    VAR_5[VAR_8->name_len/sizeof(WCHAR)] = 0;
    return VAR_3;
}
