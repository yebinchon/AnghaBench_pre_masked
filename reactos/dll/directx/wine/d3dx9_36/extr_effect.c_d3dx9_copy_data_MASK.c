
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_object {int size; int * data; } ;
struct d3dx9_base_effect {struct d3dx_object* objects; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char const*,int) ;
 int FUNC_7 (int *,char const*,int) ;
 int FUNC_8 (char const**,int*) ;

__attribute__((used)) static HRESULT FUNC_9(struct d3dx9_base_effect *VAR_2, unsigned int VAR_3, const char **VAR_4)
{
    struct d3dx_object *VAR_5 = &VAR_2->objects[VAR_3];

    if (VAR_5->size || VAR_5->data)
    {
        if (VAR_3)
            FUNC_1("Overwriting object id %u!\n", VAR_3);
        else
            FUNC_5("Overwriting object id 0.\n");

        FUNC_4(FUNC_2(), 0, VAR_5->data);
        VAR_5->data = ((void*)0);
    }

    FUNC_8(VAR_4, &VAR_5->size);
    FUNC_5("Data size: %#x.\n", VAR_5->size);

    if (!VAR_5->size)
        return VAR_0;

    VAR_5->data = FUNC_3(FUNC_2(), 0, VAR_5->size);
    if (!VAR_5->data)
    {
        FUNC_0("Failed to allocate object memory.\n");
        return VAR_1;
    }

    FUNC_5("Data: %s.\n", FUNC_6(*VAR_4, VAR_5->size));
    FUNC_7(VAR_5->data, *VAR_4, VAR_5->size);

    *VAR_4 += ((VAR_5->size + 3) & ~3);

    return VAR_0;
}
