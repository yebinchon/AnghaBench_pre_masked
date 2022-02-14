
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int,int ,int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int
FUNC_7 (int VAR_4)
{




    if (FUNC_4 (VAR_4) < 0) {
        if (VAR_3 == VAR_0)
            return 0;
        else {
            FUNC_5 ("Failed to fsync: %s.\n", FUNC_6(VAR_3));
            return -1;
        }
    }
    return 0;
}
