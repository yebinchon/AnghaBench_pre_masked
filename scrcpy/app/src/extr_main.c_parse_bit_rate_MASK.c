
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,...) ;
 long FUNC_1 (char*,char**,int ) ;

__attribute__((used)) static bool
FUNC_2(char *VAR_0, uint32_t *VAR_1) {
    char *VAR_2;
    if (*VAR_0 == '\0') {
        FUNC_0("Bit-rate parameter is empty");
        return 0;
    }
    long VAR_3 = FUNC_1(VAR_0, &VAR_2, 0);
    int VAR_4 = 1;
    if (*VAR_2 != '\0') {
        if (VAR_0 == VAR_2) {
            FUNC_0("Invalid bit-rate: %s", VAR_0);
            return 0;
        }
        if ((*VAR_2 == 'M' || *VAR_2 == 'm') && VAR_2[1] == '\0') {
            VAR_4 = 1000000;
        } else if ((*VAR_2 == 'K' || *VAR_2 == 'k') && VAR_2[1] == '\0') {
            VAR_4 = 1000;
        } else {
            FUNC_0("Invalid bit-rate unit: %s", VAR_0);
            return 0;
        }
    }
    if (VAR_3 < 0 || ((uint32_t) -1) / VAR_4 < VAR_3) {
        FUNC_0("Bitrate must be positive and less than 2^32: %s", VAR_0);
        return 0;
    }

    *VAR_1 = (uint32_t) VAR_3 * VAR_4;
    return 1;
}
