
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {TYPE_1__* x11; } ;
typedef int * XVisualInfo ;
struct TYPE_2__ {int display; int screen; } ;
typedef int * GLXFBConfig ;


 int FUNC_0 (int **) ;
 int ** FUNC_1 (int ,int ,int const*,int*) ;
 int ** FUNC_2 (int ,int *) ;
 int FUNC_3 (int **) ;

__attribute__((used)) static GLXFBConfig FUNC_4(struct vo *VAR_0, const int *VAR_1, bool VAR_2)
{
    int VAR_3;
    GLXFBConfig *VAR_4 = FUNC_1(VAR_0->x11->display, VAR_0->x11->screen,
                                         VAR_1, &VAR_3);
    if (!VAR_4)
        return ((void*)0);


    GLXFBConfig VAR_5 = VAR_3 > 0 ? VAR_4[0] : ((void*)0);

    if (VAR_2) {
        for (int VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
            XVisualInfo *VAR_7 = FUNC_2(VAR_0->x11->display, VAR_4[VAR_6]);
            if (VAR_7) {
                bool VAR_8 = FUNC_3(VAR_7);
                FUNC_0(VAR_7);
                if (VAR_8) {
                    VAR_5 = VAR_4[VAR_6];
                    break;
                }
            }
        }
    }

    FUNC_0(VAR_4);

    return VAR_5;
}
