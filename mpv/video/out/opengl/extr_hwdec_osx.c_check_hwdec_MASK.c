
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ra_hwdec {int ra; } ;
struct TYPE_3__ {int version; } ;
typedef TYPE_1__ GL ;


 int FUNC_0 () ;
 int FUNC_1 (struct ra_hwdec*,char*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct ra_hwdec *VAR_0)
{
    if (!FUNC_3(VAR_0->ra))
        return 0;

    GL *VAR_1 = FUNC_2(VAR_0->ra);
    if (VAR_1->version < 300) {
        FUNC_1(VAR_0, "need >= OpenGL 3.0 for core rectangle texture support\n");
        return 0;
    }

    if (!FUNC_0()) {
        FUNC_1(VAR_0, "need cocoa opengl backend to be active");
        return 0;
    }

    return 1;
}
