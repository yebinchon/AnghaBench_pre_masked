
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int uint8_t ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int*,int,unsigned char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,unsigned char,int ) ;

uint8_t FUNC_3(uint8_t VAR_2, unsigned char VAR_3) {
    uint8_t VAR_4 = VAR_2;
    uint8_t VAR_5 = FUNC_0(VAR_0 << 1, VAR_1, &VAR_4, sizeof(VAR_4), &VAR_3, sizeof(VAR_3));
    if (VAR_5) {
        FUNC_2("mcp: set_register %d = %d failed: %s\n", VAR_2, VAR_3, FUNC_1(VAR_5));
    }
    return VAR_5 == 0;
}
