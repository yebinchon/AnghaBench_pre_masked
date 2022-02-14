
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum TCP_What { ____Placeholder_TCP_What } TCP_What ;
typedef int buf ;
 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static const char *
FUNC_1(enum TCP_What VAR_0)
{
    static char VAR_1[64];
    switch (VAR_0) {
        case 128: return "TIMEOUT";
        case 129: return "SYNACK";
        case 130: return "RST";
        case 131: return "FIN";
        case 133: return "ACK";
        case 132: return "DATA";
        default:
            FUNC_0(VAR_1, sizeof(VAR_1), "%d", VAR_0);
            return VAR_1;
    }
}
