
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct guidsection_header {int index_offset; scalar_t__ count; } ;
struct guid_index {int guid; } ;
typedef scalar_t__ ULONG ;
typedef int GUID ;
typedef int BYTE ;


 int FUNC_0 (int const*,int *,int) ;

__attribute__((used)) static struct guid_index *FUNC_1(const struct guidsection_header *VAR_0, const GUID *VAR_1)
{
    struct guid_index *VAR_2, *VAR_3 = ((void*)0);
    ULONG VAR_4;

    VAR_2 = (struct guid_index*)((BYTE*)VAR_0 + VAR_0->index_offset);

    for (VAR_4 = 0; VAR_4 < VAR_0->count; VAR_4++)
    {
        if (!FUNC_0(VAR_1, &VAR_2->guid, sizeof(*VAR_1)))
        {
            VAR_3 = VAR_2;
            break;
        }
        VAR_2++;
    }

    return VAR_3;
}
