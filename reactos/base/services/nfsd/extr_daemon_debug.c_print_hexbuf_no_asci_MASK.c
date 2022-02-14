
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;

void FUNC_1(int VAR_2, unsigned char *VAR_3, unsigned char *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;
    if (VAR_2 > VAR_1) return;
    FUNC_0(VAR_0, "%s", VAR_3);
    for(VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_5; VAR_6++, VAR_7++) {
        FUNC_0(VAR_0, "%02x ", VAR_4[VAR_6]);
        if (((VAR_7+1) % 10 == 0 && VAR_7 > 0)) {
            FUNC_0(VAR_0, "\n");
        }
    }
    FUNC_0(VAR_0, "\n");
}
