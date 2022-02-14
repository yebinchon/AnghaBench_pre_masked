
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_vec4 {int dummy; } ;
struct wined3d_gl_info {int dummy; } ;
struct constant_heap {unsigned int size; TYPE_1__* entries; } ;
struct TYPE_2__ {scalar_t__ version; unsigned int idx; } ;
typedef int GLint ;
typedef scalar_t__ DWORD ;





 int FUNC_0 (struct wined3d_gl_info const*,int const,struct wined3d_vec4 const*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static inline void FUNC_2(const struct wined3d_gl_info *VAR_0,
        const struct wined3d_vec4 *VAR_1, const GLint *VAR_2,
        const struct constant_heap *VAR_3, unsigned char *VAR_4, DWORD VAR_5)
{
    int VAR_6 = 0;
    unsigned int VAR_7 = 1;
    unsigned int VAR_8;

    if (VAR_3->entries[VAR_7].version <= VAR_5) return;

    VAR_8 = VAR_3->entries[VAR_7].idx;
    FUNC_0(VAR_0, VAR_2[VAR_8], &VAR_1[VAR_8]);
    VAR_4[VAR_6] = 129;

    while (VAR_6 >= 0)
    {

        switch(VAR_4[VAR_6])
        {
            case 129:
            {
                unsigned int VAR_9 = VAR_7 << 1;
                if (VAR_9 < VAR_3->size && VAR_3->entries[VAR_9].version > VAR_5)
                {
                    VAR_7 = VAR_9;
                    VAR_8 = VAR_3->entries[VAR_7].idx;
                    FUNC_0(VAR_0, VAR_2[VAR_8], &VAR_1[VAR_8]);

                    VAR_4[VAR_6++] = 128;
                    VAR_4[VAR_6] = 129;
                    break;
                }
            }

            case 128:
            {
                unsigned int VAR_10 = (VAR_7 << 1) + 1;
                if (VAR_10 < VAR_3->size && VAR_3->entries[VAR_10].version > VAR_5)
                {
                    VAR_7 = VAR_10;
                    VAR_8 = VAR_3->entries[VAR_7].idx;
                    FUNC_0(VAR_0, VAR_2[VAR_8], &VAR_1[VAR_8]);

                    VAR_4[VAR_6++] = 130;
                    VAR_4[VAR_6] = 129;
                    break;
                }
            }

            case 130:
                VAR_7 >>= 1;
                --VAR_6;
                break;
        }
    }
    FUNC_1("walk_constant_heap_clamped()");
}
