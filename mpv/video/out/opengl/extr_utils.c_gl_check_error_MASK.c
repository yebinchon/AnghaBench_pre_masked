
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct TYPE_3__ {scalar_t__ (* GetError ) () ;} ;
typedef scalar_t__ GLenum ;
typedef TYPE_1__ GL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mp_log*,int ,char*,char const*,int ) ;
 scalar_t__ FUNC_2 () ;

void FUNC_3(GL *VAR_2, struct mp_log *VAR_3, const char *VAR_4)
{
    for (;;) {
        GLenum VAR_5 = VAR_2->GetError();
        if (VAR_5 == VAR_0)
            break;
        FUNC_1(VAR_3, VAR_1, "%s: OpenGL error %s.\n", VAR_4,
               FUNC_0(VAR_5));
    }
}
