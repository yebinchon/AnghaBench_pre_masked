
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct d3dx_top_level_parameter {int annotation_count; int * annotations; TYPE_1__ param; } ;
struct d3dx_object {int dummy; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (struct d3dx9_base_effect*,int *,char const*,char const**,struct d3dx_object*) ;
 scalar_t__ FUNC_7 (struct d3dx9_base_effect*,TYPE_1__*,char const*,char const**,int *,int) ;
 scalar_t__ FUNC_8 (struct d3dx9_base_effect*,TYPE_1__*,char const*,char const*,struct d3dx_object*) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char const**,int*) ;

__attribute__((used)) static HRESULT FUNC_12(struct d3dx9_base_effect *VAR_4, struct d3dx_top_level_parameter *VAR_5,
        const char *VAR_6, const char **VAR_7, struct d3dx_object *VAR_8)
{
    DWORD VAR_9;
    HRESULT VAR_10;
    unsigned int VAR_11;
    const char *VAR_12;

    FUNC_11(VAR_7, &VAR_9);
    FUNC_4("Typedef offset: %#x.\n", VAR_9);
    VAR_12 = VAR_6 + VAR_9;

    FUNC_11(VAR_7, &VAR_9);
    FUNC_4("Value offset: %#x.\n", VAR_9);

    FUNC_11(VAR_7, &VAR_5->param.flags);
    FUNC_4("Flags: %#x.\n", VAR_5->param.flags);

    FUNC_11(VAR_7, &VAR_5->annotation_count);
    FUNC_4("Annotation count: %u.\n", VAR_5->annotation_count);

    VAR_10 = FUNC_7(VAR_4, &VAR_5->param, VAR_6, &VAR_12, ((void*)0), VAR_5->param.flags);
    if (VAR_10 != VAR_0)
    {
        FUNC_5("Failed to parse type definition.\n");
        return VAR_10;
    }

    VAR_10 = FUNC_8(VAR_4, &VAR_5->param, VAR_6, VAR_6 + VAR_9, VAR_8);
    if (VAR_10 != VAR_0)
    {
        FUNC_5("Failed to parse value.\n");
        return VAR_10;
    }

    if (VAR_5->annotation_count)
    {
        VAR_5->annotations = FUNC_2(FUNC_1(), VAR_3,
                sizeof(*VAR_5->annotations) * VAR_5->annotation_count);
        if (!VAR_5->annotations)
        {
            FUNC_0("Out of memory.\n");
            VAR_10 = VAR_1;
            goto err_out;
        }

        for (VAR_11 = 0; VAR_11 < VAR_5->annotation_count; ++VAR_11)
        {
            FUNC_10(&VAR_5->annotations[VAR_11]);
            VAR_10 = FUNC_6(VAR_4, &VAR_5->annotations[VAR_11], VAR_6, VAR_7, VAR_8);
            if (VAR_10 != VAR_0)
            {
                FUNC_5("Failed to parse annotation.\n");
                goto err_out;
            }
        }
    }

    return VAR_0;

err_out:

    if (VAR_5->annotations)
    {
        for (VAR_11 = 0; VAR_11 < VAR_5->annotation_count; ++VAR_11)
            FUNC_9(&VAR_5->annotations[VAR_11], VAR_2, VAR_2);
        FUNC_3(FUNC_1(), 0, VAR_5->annotations);
        VAR_5->annotations = ((void*)0);
    }

    return VAR_10;
}
