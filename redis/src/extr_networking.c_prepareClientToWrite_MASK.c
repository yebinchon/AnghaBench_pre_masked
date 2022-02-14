
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int conn; } ;
typedef TYPE_1__ client ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(client *VAR_8) {


    if (VAR_8->flags & (VAR_0|VAR_3)) return VAR_7;


    if (VAR_8->flags & (VAR_4|VAR_5)) return VAR_6;



    if ((VAR_8->flags & VAR_1) &&
        !(VAR_8->flags & VAR_2)) return VAR_6;

    if (!VAR_8->conn) return VAR_6;



    if (!FUNC_0(VAR_8)) FUNC_1(VAR_8);


    return VAR_7;
}
