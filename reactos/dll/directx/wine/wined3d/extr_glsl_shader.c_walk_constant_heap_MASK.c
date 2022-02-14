
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_vec4 {int x; } ;
struct wined3d_gl_info {int dummy; } ;
struct constant_heap {unsigned int size; TYPE_1__* entries; } ;
struct TYPE_2__ {scalar_t__ version; unsigned int idx; } ;
typedef int GLint ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;



 int FUNC_1 (char*) ;
 int FUNC_2 (int const,unsigned int,int *) ;

__attribute__((used)) static inline void FUNC_3(const struct wined3d_gl_info *VAR_0, const struct wined3d_vec4 *VAR_1,
        const GLint *VAR_2, const struct constant_heap *VAR_3, unsigned char *VAR_4, DWORD VAR_5)
{
    unsigned int VAR_6 = ~0U, VAR_7 = 0;
    int VAR_8 = 0;
    unsigned int VAR_9 = 1;
    unsigned int VAR_10;

    if (VAR_3->entries[VAR_9].version <= VAR_5) return;

    VAR_10 = VAR_3->entries[VAR_9].idx;
    if (VAR_2[VAR_10] != -1)
        VAR_6 = VAR_7 = VAR_10;
    VAR_4[VAR_8] = 129;

    while (VAR_8 >= 0)
    {

        switch(VAR_4[VAR_8])
        {
            case 129:
            {
                unsigned int VAR_11 = VAR_9 << 1;
                if (VAR_11 < VAR_3->size && VAR_3->entries[VAR_11].version > VAR_5)
                {
                    VAR_9 = VAR_11;
                    VAR_10 = VAR_3->entries[VAR_9].idx;
                    if (VAR_2[VAR_10] != -1)
                    {
                        if (VAR_6 > VAR_10)
                            VAR_6 = VAR_10;
                        if (VAR_7 < VAR_10)
                            VAR_7 = VAR_10;
                    }

                    VAR_4[VAR_8++] = 128;
                    VAR_4[VAR_8] = 129;
                    break;
                }
            }

            case 128:
            {
                unsigned int VAR_12 = (VAR_9 << 1) + 1;
                if (VAR_12 < VAR_3->size && VAR_3->entries[VAR_12].version > VAR_5)
                {
                    VAR_9 = VAR_12;
                    VAR_10 = VAR_3->entries[VAR_9].idx;
                    if (VAR_2[VAR_10] != -1)
                    {
                        if (VAR_6 > VAR_10)
                            VAR_6 = VAR_10;
                        if (VAR_7 < VAR_10)
                            VAR_7 = VAR_10;
                    }

                    VAR_4[VAR_8++] = 130;
                    VAR_4[VAR_8] = 129;
                    break;
                }
            }

            case 130:
                VAR_9 >>= 1;
                --VAR_8;
                break;
        }
    }
    if (VAR_6 <= VAR_7)
        FUNC_0(FUNC_2(VAR_2[VAR_6], VAR_7 - VAR_6 + 1, &VAR_1[VAR_6].x));
    FUNC_1("walk_constant_heap()");
}
