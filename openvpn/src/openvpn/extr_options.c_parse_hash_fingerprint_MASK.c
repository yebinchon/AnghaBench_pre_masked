
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct gc_arena {int dummy; } ;


 scalar_t__ FUNC_0 (int,int,struct gc_arena*) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char*,char*,int*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static uint8_t *
FUNC_4(const char *VAR_0, int VAR_1, int VAR_2, struct gc_arena *VAR_3)
{
    int VAR_4;
    const char *VAR_5 = VAR_0;
    uint8_t *VAR_6 = (uint8_t *) FUNC_0(VAR_1, 1, VAR_3);
    char VAR_7 = 1;
    int VAR_8;
    char VAR_9[3];

    for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4)
    {
        if (FUNC_3(VAR_5) < 2)
        {
            FUNC_1(VAR_2, "format error in hash fingerprint: %s", VAR_0);
        }
        VAR_9[0] = *VAR_5++;
        VAR_9[1] = *VAR_5++;
        VAR_9[2] = 0;
        VAR_8 = 0;
        if (FUNC_2(VAR_9, "%x", &VAR_8) != 1)
        {
            FUNC_1(VAR_2, "format error in hash fingerprint hex byte: %s", VAR_0);
        }
        VAR_6[VAR_4] = (uint8_t)VAR_8;
        VAR_7 = *VAR_5++;
        if (VAR_7 != ':' && VAR_7 != 0)
        {
            FUNC_1(VAR_2, "format error in hash fingerprint delimiter: %s", VAR_0);
        }
        if (VAR_7 == 0)
        {
            break;
        }
    }
    if (VAR_7 != 0 || VAR_4 != VAR_1-1)
    {
        FUNC_1(VAR_2, "hash fingerprint is different length than expected (%d bytes): %s", VAR_1, VAR_0);
    }
    return VAR_6;
}
