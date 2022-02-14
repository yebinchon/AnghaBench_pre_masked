
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ client ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_0(client *VAR_8) {
    if (VAR_8->flags & VAR_0) return VAR_4;
    if ((VAR_8->flags & VAR_3) && !(VAR_8->flags & VAR_1))
        return VAR_7;
    if (VAR_8->flags & VAR_2) return VAR_6;
    return VAR_5;
}
