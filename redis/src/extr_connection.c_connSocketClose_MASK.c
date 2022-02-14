
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; int flags; } ;
typedef TYPE_1__ connection ;
struct TYPE_6__ {int el; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int) ;
 TYPE_3__ VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(connection *VAR_5) {
    if (VAR_5->fd != -1) {
        FUNC_0(VAR_4.el,VAR_5->fd,VAR_0);
        FUNC_0(VAR_4.el,VAR_5->fd,VAR_1);
        FUNC_1(VAR_5->fd);
        VAR_5->fd = -1;
    }




    if (VAR_5->flags & VAR_3) {
        VAR_5->flags |= VAR_2;
        return;
    }

    FUNC_2(VAR_5);
}
