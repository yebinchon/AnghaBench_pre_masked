
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Output {unsigned char when_scan_started; } ;
struct MasscanRecord {unsigned char timestamp; unsigned char ip; unsigned char port; unsigned char app_proto; } ;


 int FUNC_0 (struct Output*,unsigned char,unsigned char,int,unsigned char,unsigned char,int ,unsigned char*,unsigned int) ;

__attribute__((used)) static void
FUNC_1(struct Output *VAR_0, unsigned char *VAR_1, size_t VAR_2)
{
    struct MasscanRecord VAR_3;




    VAR_3.timestamp = VAR_1[0]<<24 | VAR_1[1]<<16 | VAR_1[2]<<8 | VAR_1[3];
    VAR_3.ip = VAR_1[4]<<24 | VAR_1[5]<<16 | VAR_1[6]<<8 | VAR_1[7];
    VAR_3.port = VAR_1[8]<<8 | VAR_1[9];
    VAR_3.app_proto = VAR_1[10]<<8 | VAR_1[11];

    if (VAR_0->when_scan_started == 0)
        VAR_0->when_scan_started = VAR_3.timestamp;




    FUNC_0(
                VAR_0,
                VAR_3.timestamp,
                VAR_3.ip,
                6,
                VAR_3.port,
                VAR_3.app_proto,
                0,
                VAR_1+12, (unsigned)VAR_2-12
                );
}
