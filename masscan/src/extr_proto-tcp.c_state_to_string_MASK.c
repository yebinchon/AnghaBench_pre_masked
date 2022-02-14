
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static const char *
FUNC_1(int VAR_0)
{
    static char VAR_1[64];
    switch (VAR_0) {


        case 130: return "LAST-ACK";
        case 132: return "FIN-WAIT-1";
        case 131: return "FIN-WAIT-2";
        case 135: return "CLOSING";
        case 128: return "TIME-WAIT";
        case 129: return "SYN_SENT";
        case 133:return "ESTABLISHED_SEND";
        case 134:return "ESTABLISHED_RECV";

        default:
            FUNC_0(VAR_1, sizeof(VAR_1), "%d", VAR_0);
            return VAR_1;
    }
}
