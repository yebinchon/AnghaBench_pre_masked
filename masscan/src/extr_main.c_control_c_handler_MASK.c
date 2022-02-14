
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(int VAR_3)
{
    static unsigned VAR_4 = 0;
    static unsigned VAR_5 = 0;
    if (VAR_4 == 0) {
        FUNC_2(VAR_2,
                "waiting several seconds to exit..."
                "                                            \n"
                );
        FUNC_1(VAR_2);
        VAR_4 = 1+VAR_3;
        VAR_1 = VAR_4;
    } else {
        if (VAR_0) {
            FUNC_2(VAR_2, "\nERROR: threads not exiting %d\n", VAR_0);
            if (VAR_0++ > 1)
                FUNC_0(1);
        } else {
            VAR_5 = 1;
            VAR_0 = VAR_5;
        }
    }

}
