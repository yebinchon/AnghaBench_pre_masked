
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int conn; } ;
typedef TYPE_1__ client ;
struct TYPE_5__ {char* unixsocket; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (char*,size_t,char*,char*) ;

void FUNC_2(client *VAR_2, char *VAR_3,
                            size_t VAR_4) {
    if (VAR_2->flags & VAR_0) {

        FUNC_1(VAR_3,VAR_4,"%s:0",VAR_1.unixsocket);
    } else {

        FUNC_0(VAR_2->conn,VAR_3,VAR_4);
    }
}
