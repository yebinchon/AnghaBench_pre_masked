
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RangeList {scalar_t__ count; } ;
struct Output {unsigned char when_scan_started; } ;
struct MasscanRecord {unsigned char timestamp; unsigned char ip; unsigned char ip_proto; unsigned char port; unsigned char reason; unsigned char ttl; int mac; } ;
typedef enum PortStatus { ____Placeholder_PortStatus } PortStatus ;


 int FUNC_0 (int ,unsigned char const*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct Output*,unsigned char,int,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,int ) ;
 int FUNC_3 (struct RangeList const*,unsigned char) ;

__attribute__((used)) static void
FUNC_4(struct Output *VAR_0,
        enum PortStatus VAR_1,
        const unsigned char *VAR_2, size_t VAR_3,
        const struct RangeList *VAR_4,
        const struct RangeList *VAR_5)
{
    struct MasscanRecord VAR_6;

    if (VAR_3 < 13)
        return;


    VAR_6.timestamp = VAR_2[0]<<24 | VAR_2[1]<<16 | VAR_2[2]<<8 | VAR_2[3];
    VAR_6.ip = VAR_2[4]<<24 | VAR_2[5]<<16 | VAR_2[6]<<8 | VAR_2[7];
    VAR_6.ip_proto = VAR_2[8];
    VAR_6.port = VAR_2[9]<<8 | VAR_2[10];
    VAR_6.reason = VAR_2[11];
    VAR_6.ttl = VAR_2[12];


    if (VAR_6.ip == 0 && VAR_3 >= 13+6)
        FUNC_0(VAR_6.mac, VAR_2+13, 6);
    else
        FUNC_1(VAR_6.mac, 0, 6);

    if (VAR_0->when_scan_started == 0)
        VAR_0->when_scan_started = VAR_6.timestamp;




    if (VAR_4 && VAR_4->count) {
        if (!FUNC_3(VAR_4, VAR_6.ip))
            return;
    }
    if (VAR_5 && VAR_5->count) {
        if (!FUNC_3(VAR_5, VAR_6.port))
            return;
    }




    FUNC_2(VAR_0,
                    VAR_6.timestamp,
                    VAR_1,
                    VAR_6.ip,
                    VAR_6.ip_proto,
                    VAR_6.port,
                    VAR_6.reason,
                    VAR_6.ttl,
                    VAR_6.mac);

}
