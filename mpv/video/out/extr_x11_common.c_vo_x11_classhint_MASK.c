
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vo_x11_state {int display; } ;
struct vo {struct vo_x11_state* x11; struct mp_vo_opts* opts; } ;
struct mp_vo_opts {char* winname; } ;
struct TYPE_3__ {char* res_name; char* res_class; } ;
typedef TYPE_1__ XClassHint ;
typedef int Window ;


 int VAR_0 ;
 int FUNC_0 (struct vo_x11_state*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ,int,int ,unsigned char*,int) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int VAR_2 ;
 long FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct vo *VAR_3, Window VAR_4, const char *VAR_5)
{
    struct mp_vo_opts *VAR_6 = VAR_3->opts;
    struct vo_x11_state *VAR_7 = VAR_3->x11;
    XClassHint VAR_8;
    long VAR_9 = FUNC_3();

    VAR_8.res_name = VAR_6->winname ? VAR_6->winname : (char *)VAR_5;
    VAR_8.res_class = "mpv";
    FUNC_2(VAR_7->display, VAR_4, &VAR_8);
    FUNC_1(VAR_7->display, VAR_4, FUNC_0(VAR_7, VAR_2), VAR_1,
                    32, VAR_0, (unsigned char *) &VAR_9, 1);
}
