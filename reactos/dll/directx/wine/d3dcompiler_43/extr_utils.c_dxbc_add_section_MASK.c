
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dxbc_section {int tag; int data_size; char const* data; } ;
struct dxbc {size_t count; size_t size; struct dxbc_section* sections; } ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 struct dxbc_section* FUNC_2 (int ,int ,struct dxbc_section*,int) ;
 int VAR_1 ;
 int FUNC_3 (char*,struct dxbc*,int ,int) ;
 int FUNC_4 (char const*,int) ;

HRESULT FUNC_5(struct dxbc *VAR_2, DWORD VAR_3, const char *VAR_4, DWORD VAR_5)
{
    FUNC_3("dxbc %p, tag %s, size %#x.\n", VAR_2, FUNC_4((const char *)&VAR_3, 4), VAR_5);

    if (VAR_2->count >= VAR_2->size)
    {
        struct dxbc_section *VAR_6;
        DWORD VAR_7 = VAR_2->size << 1;

        VAR_6 = FUNC_2(FUNC_1(), 0, VAR_2->sections, VAR_7 * sizeof(*VAR_2->sections));
        if (!VAR_6)
        {
            FUNC_0("Failed to allocate dxbc section memory\n");
            return VAR_0;
        }

        VAR_2->sections = VAR_6;
        VAR_2->size = VAR_7;
    }

    VAR_2->sections[VAR_2->count].tag = VAR_3;
    VAR_2->sections[VAR_2->count].data_size = VAR_5;
    VAR_2->sections[VAR_2->count].data = VAR_4;
    ++VAR_2->count;

    return VAR_1;
}
