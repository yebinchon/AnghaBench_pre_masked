
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Output {unsigned char when_scan_started; } ;
struct MasscanRecord {unsigned char timestamp; unsigned char ip; unsigned char port; unsigned char reason; unsigned char ttl; int ip_proto; int mac; } ;
typedef enum PortStatus { ____Placeholder_PortStatus } PortStatus ;


 int FUNC_0 (int ,unsigned char const*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct Output*,unsigned char,int,unsigned char,int,int,unsigned char,unsigned char,int ) ;

__attribute__((used)) static void
FUNC_3(struct Output *VAR_0,
        enum PortStatus VAR_1,
        const unsigned char *VAR_2, size_t VAR_3)
{
    struct MasscanRecord VAR_4;

    if (VAR_3 < 12)
        return;


    VAR_4.timestamp = VAR_2[0]<<24 | VAR_2[1]<<16 | VAR_2[2]<<8 | VAR_2[3];
    VAR_4.ip = VAR_2[4]<<24 | VAR_2[5]<<16 | VAR_2[6]<<8 | VAR_2[7];
    VAR_4.port = VAR_2[8]<<8 | VAR_2[9];
    VAR_4.reason = VAR_2[10];
    VAR_4.ttl = VAR_2[11];


    if (VAR_4.ip == 0 && VAR_3 >= 12+6)
        FUNC_0(VAR_4.mac, VAR_2+12, 6);
    else
        FUNC_1(VAR_4.mac, 0, 6);

    if (VAR_0->when_scan_started == 0)
        VAR_0->when_scan_started = VAR_4.timestamp;

    switch (VAR_4.port) {
    case 53:
    case 123:
    case 137:
    case 161:
        VAR_4.ip_proto = 17;
        break;
    case 36422:
    case 36412:
    case 2905:
        VAR_4.ip_proto = 132;
        break;
    default:
        VAR_4.ip_proto = 6;
        break;
    }




    FUNC_2(VAR_0,
                    VAR_4.timestamp,
                    VAR_1,
                    VAR_4.ip,
                    VAR_4.ip_proto,
                    VAR_4.port,
                    VAR_4.reason,
                    VAR_4.ttl,
                    VAR_4.mac);

}
