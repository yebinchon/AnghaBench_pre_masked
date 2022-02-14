
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RangeList {int dummy; } ;
struct Output {unsigned char when_scan_started; } ;
struct MasscanRecord {unsigned char timestamp; unsigned char ip; unsigned char ip_proto; unsigned char port; unsigned char app_proto; unsigned char ttl; } ;


 int FUNC_0 (struct Output*,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char*,unsigned int) ;
 int FUNC_1 (unsigned char,unsigned char,unsigned char,struct RangeList const*,struct RangeList const*,struct RangeList const*) ;

__attribute__((used)) static void
FUNC_2(struct Output *VAR_0, unsigned char *VAR_1, size_t VAR_2,
              const struct RangeList *VAR_3,
              const struct RangeList *VAR_4,
              const struct RangeList *VAR_5)
{
    struct MasscanRecord VAR_6;
    unsigned char *VAR_7 = VAR_1+14;
    size_t VAR_8 = VAR_2-14;

    if (VAR_2 < 14)
        return;




    VAR_6.timestamp = VAR_1[0]<<24 | VAR_1[1]<<16 | VAR_1[2]<<8 | VAR_1[3];
    VAR_6.ip = VAR_1[4]<<24 | VAR_1[5]<<16 | VAR_1[6]<<8 | VAR_1[7];
    VAR_6.ip_proto = VAR_1[8];
    VAR_6.port = VAR_1[9]<<8 | VAR_1[10];
    VAR_6.app_proto = VAR_1[11]<<8 | VAR_1[12];
    VAR_6.ttl = VAR_1[13];

    if (VAR_0->when_scan_started == 0)
        VAR_0->when_scan_started = VAR_6.timestamp;
    if (!FUNC_1(VAR_6.ip, VAR_6.port, VAR_6.app_proto,
              VAR_3, VAR_4, VAR_5))
          return;




    FUNC_0(
                VAR_0,
                VAR_6.timestamp,
                VAR_6.ip,
                VAR_6.ip_proto,
                VAR_6.port,
                VAR_6.app_proto,
                VAR_6.ttl,
                VAR_7, (unsigned)VAR_8
                );
}
