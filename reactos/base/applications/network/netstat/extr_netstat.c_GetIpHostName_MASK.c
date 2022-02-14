
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nIpAddr ;
typedef int UINT ;
typedef char* PCHAR ;
typedef int INT ;
typedef char CHAR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int,int,int,int) ;
 int FUNC_5 (char*,char*,int) ;

PCHAR
FUNC_6(BOOL VAR_1, UINT VAR_2, CHAR VAR_3[], INT VAR_4)
{

    UINT VAR_5;


    VAR_5 = FUNC_3(VAR_2);
    if (VAR_0) {
        FUNC_4(VAR_3, "%d.%d.%d.%d",
            (VAR_5 >> 24) & 0xFF,
            (VAR_5 >> 16) & 0xFF,
            (VAR_5 >> 8) & 0xFF,
            (VAR_5) & 0xFF);
        return VAR_3;
    }

    VAR_3[0] = '\0';


    if (!VAR_2) {
        if (!VAR_1) {
            FUNC_4(VAR_3, "%d.%d.%d.%d",
                (VAR_5 >> 24) & 0xFF,
                (VAR_5 >> 16) & 0xFF,
                (VAR_5 >> 8) & 0xFF,
                (VAR_5) & 0xFF);
        } else {
            if (FUNC_2(VAR_3, VAR_4) != 0)
                FUNC_0(FUNC_1());
        }
    } else if (VAR_2 == 0x0100007f) {
        if (VAR_1) {
            if (FUNC_2(VAR_3, VAR_4) != 0)
                FUNC_0(FUNC_1());
        } else {
            FUNC_5(VAR_3, "localhost", 10);
        }


    } else {
        FUNC_4(VAR_3, "%d.%d.%d.%d",
            ((VAR_5 >> 24) & 0x000000FF),
            ((VAR_5 >> 16) & 0x000000FF),
            ((VAR_5 >> 8) & 0x000000FF),
            ((VAR_5) & 0x000000FF));
    }
    return VAR_3;
}
