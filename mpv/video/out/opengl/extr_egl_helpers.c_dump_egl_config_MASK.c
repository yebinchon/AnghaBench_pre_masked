
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct TYPE_3__ {char* name; int attrib; } ;
typedef int EGLint ;
typedef int EGLDisplay ;
typedef int EGLConfig ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (struct mp_log*,int,char*,char const*,...) ;

__attribute__((used)) static void FUNC_3(struct mp_log *VAR_1, int VAR_2, EGLDisplay VAR_3,
                            EGLConfig VAR_4)
{
    for (int VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
        const char *VAR_6 = VAR_0[VAR_5].name;
        EGLint VAR_7 = -1;
        if (FUNC_1(VAR_3, VAR_4, VAR_0[VAR_5].attrib, &VAR_7)) {
            FUNC_2(VAR_1, VAR_2, "  %s=%d\n", VAR_6, VAR_7);
        } else {
            FUNC_2(VAR_1, VAR_2, "  %s=<error>\n", VAR_6);
        }
    }
}
