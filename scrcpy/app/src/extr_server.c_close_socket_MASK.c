
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ socket_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_4(socket_t *VAR_2) {
    FUNC_1(*VAR_2 != VAR_0);
    FUNC_3(*VAR_2, VAR_1);
    if (!FUNC_2(*VAR_2)) {
        FUNC_0("Could not close socket");
        return;
    }
    *VAR_2 = VAR_0;
}
