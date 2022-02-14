
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_2()
{

    if (!VAR_2) {

        return(0);
    }
    if (VAR_3) {
        if (FUNC_1(VAR_3,0) == -1) {
            if (VAR_1 == VAR_0) {
                return(0);
            }
            return(1);
        }
        return(0);
    }
    return(VAR_2 != FUNC_0());
}
