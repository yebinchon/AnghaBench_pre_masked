
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {char* buffer; int offset; int size; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;
typedef TYPE_2__ conn ;


 scalar_t__ FUNC_0 (char*,int,char*,...) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, const uint16_t VAR_1,
                               const char *VAR_2, const uint32_t VAR_3,
                               conn *VAR_4) {
    char *VAR_5 = VAR_4->stats.buffer + VAR_4->stats.offset;
    uint32_t VAR_6 = 0;
    int VAR_7 = VAR_4->stats.size - VAR_4->stats.offset;
    int VAR_8 = VAR_7 - 1;

    if (VAR_1 == 0 && VAR_3 == 0) {
        VAR_6 = FUNC_0(VAR_5, VAR_8, "END\r\n");
    } else if (VAR_3 == 0) {
        VAR_6 = FUNC_0(VAR_5, VAR_8, "STAT %s\r\n", VAR_0);
    } else {
        VAR_6 = FUNC_0(VAR_5, VAR_8, "STAT %s %s\r\n", VAR_0, VAR_2);
    }

    VAR_4->stats.offset += VAR_6;
}
