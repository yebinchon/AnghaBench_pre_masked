
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;


 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct wined3d_string_buffer *VAR_0,
        const int *VAR_1, unsigned int VAR_2)
{
    int VAR_3;

    if (!VAR_2 || VAR_2 > 4)
    {
        FUNC_0("Invalid vector size %u.\n", VAR_2);
        return;
    }

    if (VAR_2 > 1)
        FUNC_1(VAR_0, "ivec%u(", VAR_2);

    for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
        FUNC_1(VAR_0, VAR_3 ? ", %#x" : "%#x", VAR_1[VAR_3]);

    if (VAR_2 > 1)
        FUNC_1(VAR_0, ")");
}
