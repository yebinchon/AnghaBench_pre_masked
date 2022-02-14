
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct strsection_header {int index_offset; scalar_t__ count; } ;
struct string_index {scalar_t__ hash; int name_offset; } ;
typedef int WCHAR ;
struct TYPE_5__ {int Length; int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef scalar_t__ ULONG ;
typedef int BYTE ;


 int FUNC_0 (char*,struct strsection_header const*,...) ;
 int FUNC_1 (char*,scalar_t__,TYPE_1__ const*,int const*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__ const*,int ,int ,scalar_t__*) ;
 int VAR_1 ;
 int FUNC_3 (int const*,int ,int) ;
 int FUNC_4 (int const*) ;

__attribute__((used)) static struct string_index *FUNC_5(const struct strsection_header *VAR_2, const UNICODE_STRING *VAR_3)
{
    struct string_index *VAR_4, *VAR_5 = ((void*)0);
    ULONG VAR_6 = 0, VAR_7;

    FUNC_0("section %p, name %wZ\n", VAR_2, VAR_3);
    FUNC_2(VAR_3, VAR_1, VAR_0, &VAR_6);
    VAR_4 = (struct string_index*)((BYTE*)VAR_2 + VAR_2->index_offset);

    for (VAR_7 = 0; VAR_7 < VAR_2->count; VAR_7++)
    {
        FUNC_0("iter->hash 0x%x ?= 0x%x\n", VAR_4->hash, VAR_6);
        FUNC_0("iter->name %S\n", (WCHAR*)((BYTE*)VAR_2 + VAR_4->name_offset));
        if (VAR_4->hash == VAR_6)
        {
            const WCHAR *VAR_8 = (WCHAR*)((BYTE*)VAR_2 + VAR_4->name_offset);

            if (!FUNC_3(VAR_8, VAR_3->Buffer, VAR_3->Length / sizeof(WCHAR)) &&
                FUNC_4(VAR_8) == VAR_3->Length / sizeof(WCHAR))
            {
                VAR_5 = VAR_4;
                break;
            }
            else
                FUNC_1("hash collision 0x%08x, %wZ, %S\n", VAR_6, VAR_3, VAR_8);
        }
        VAR_4++;
    }

    return VAR_5;
}
