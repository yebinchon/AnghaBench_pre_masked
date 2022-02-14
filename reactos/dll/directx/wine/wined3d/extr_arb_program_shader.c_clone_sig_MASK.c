
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_shader_signature {unsigned int element_count; TYPE_1__* elements; } ;
struct TYPE_2__ {char* semantic_name; } ;


 char* FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (unsigned int,int) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct wined3d_shader_signature *VAR_0, const struct wined3d_shader_signature *VAR_1)
{
    unsigned int VAR_2;
    char *VAR_3;

    VAR_0->element_count = VAR_1->element_count;
    VAR_0->elements = FUNC_1(VAR_0->element_count, sizeof(*VAR_0->elements));
    for (VAR_2 = 0; VAR_2 < VAR_1->element_count; ++VAR_2)
    {
        VAR_0->elements[VAR_2] = VAR_1->elements[VAR_2];

        if (!VAR_0->elements[VAR_2].semantic_name)
            continue;


        VAR_3 = FUNC_0(FUNC_3(VAR_1->elements[VAR_2].semantic_name) + 1);
        FUNC_2(VAR_3, VAR_1->elements[VAR_2].semantic_name);
        VAR_0->elements[VAR_2].semantic_name = VAR_3;
    }
}
