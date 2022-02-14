
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int version; int es; int mpgl_caps; } ;
typedef TYPE_1__ GL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

int FUNC_0(GL *VAR_15)
{
    return (VAR_15->version == 210 ? VAR_6 : 0)
         | (VAR_15->version >= 300 ? VAR_8 : 0)
         | (VAR_15->es == 200 ? VAR_1 : 0)
         | (VAR_15->es >= 300 ? VAR_2 : 0)
         | (VAR_15->es >= 320 ? VAR_3 : 0)
         | (VAR_15->mpgl_caps & VAR_11 ? VAR_4 : 0)
         | ((VAR_15->es >= 300 &&
            (VAR_15->mpgl_caps & VAR_12)) ? VAR_5 : 0)
         | ((VAR_15->version == 210 &&
            (VAR_15->mpgl_caps & VAR_10) &&
            (VAR_15->mpgl_caps & VAR_14) &&
            (VAR_15->mpgl_caps & VAR_13)) ? VAR_7 : 0)
         | (VAR_15->mpgl_caps & VAR_9 ? VAR_0 : 0);
}
