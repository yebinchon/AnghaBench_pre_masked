
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_switcher {int tty_fd; } ;
struct vt_mode {int mode; int member_0; } ;


 int VAR_0 ;
 int FUNC_0 (struct vt_switcher*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,struct vt_mode*) ;
 int FUNC_4 (int ) ;
 int * VAR_6 ;

void FUNC_5(struct vt_switcher *VAR_7)
{
    struct vt_mode VAR_8 = {0};
    VAR_8.mode = VAR_3;
    if (FUNC_3(VAR_7->tty_fd, VAR_4, &VAR_8) < 0) {
        FUNC_0(VAR_7, "VT_SETMODE failed: %s\n", FUNC_4(VAR_5));
        return;
    }

    FUNC_2(VAR_1, VAR_2);
    FUNC_2(VAR_0, VAR_2);
    FUNC_1(VAR_7->tty_fd);
    FUNC_1(VAR_6[0]);
    FUNC_1(VAR_6[1]);
}
