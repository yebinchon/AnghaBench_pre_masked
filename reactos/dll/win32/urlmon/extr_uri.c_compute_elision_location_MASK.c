
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ipv4; } ;
typedef TYPE_1__ ipv6_address ;
typedef scalar_t__ USHORT ;
typedef int INT ;
typedef int DWORD ;
typedef int BOOL ;



__attribute__((used)) static void FUNC_0(const ipv6_address *VAR_0, const USHORT VAR_1[8],
                                     INT *VAR_2, DWORD *VAR_3) {
    DWORD VAR_4, VAR_5, VAR_6;
    INT VAR_7, VAR_8;

    VAR_5 = VAR_6 = 0;
    VAR_7 = VAR_8 = -1;
    for(VAR_4 = 0; VAR_4 < 8; ++VAR_4) {
        BOOL VAR_9 = (VAR_0->ipv4 && VAR_4 == 6);
        BOOL VAR_10 = (VAR_9 || VAR_4 == 7);

        if(VAR_9) {

            if(VAR_1[VAR_4] == 0 && VAR_1[VAR_4+1] == 0) {
                if(VAR_8 == -1)
                    VAR_8 = VAR_4;

                VAR_6 += 2;
                ++VAR_4;
            }
        } else if(VAR_1[VAR_4] == 0) {
            if(VAR_8 == -1)
                VAR_8 = VAR_4;

            ++VAR_6;
        }

        if(VAR_10 || VAR_1[VAR_4] != 0) {



            if(VAR_6 > 1 && VAR_6 > VAR_5) {

                VAR_5 = VAR_6;
                VAR_7 = VAR_8;
            }


            VAR_8 = -1;
            VAR_6 = 0;
        }
    }

    *VAR_2 = VAR_7;
    *VAR_3 = VAR_5;
}
