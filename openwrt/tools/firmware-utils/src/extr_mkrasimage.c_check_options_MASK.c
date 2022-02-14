
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;

int FUNC_2()
{
    if (!VAR_2.name) {
        FUNC_0("No rootfs filename supplied");
        return -2;
    }

    if (!VAR_1.name) {
        FUNC_0("No output filename supplied");
        return -3;
    }

    if (!VAR_0) {
        FUNC_0("No board-name supplied");
        return -4;
    }

    if (!VAR_4) {
        FUNC_0("No version supplied");
        return -5;
    }

    if (VAR_3 <= 0) {
        FUNC_0("Invalid rootfs size supplied");
        return -6;
    }

    if (FUNC_1(VAR_0) > 31) {
        FUNC_0("Board name is to long");
        return -7;
    }
    return 0;
}
