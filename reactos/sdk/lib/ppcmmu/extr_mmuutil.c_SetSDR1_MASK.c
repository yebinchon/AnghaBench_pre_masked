
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
inline void FUNC_0( int VAR_0 ) {
    int VAR_1,VAR_2;
    __asm__("mtsdr1 3");
    __asm__("sync");
    __asm__("isync");

    for( VAR_1 = 0; VAR_1 < 256; VAR_1++ ) {
 VAR_2 = VAR_1 << 12;
 __asm__("tlbie %0,0" : : "r" (VAR_2));
    }
    __asm__("eieio");
    __asm__("tlbsync");
    __asm__("ptesync");
}
