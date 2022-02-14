
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;

int FUNC_3(void) {
    int VAR_4, VAR_5;
    int VAR_6[256];
    for (VAR_4 = 0; VAR_4 < 256; VAR_4 ++ ) {
        VAR_6[VAR_4] = (uint8_t)(
              (FUNC_0(FUNC_2((VAR_4/255.0)*VAR_1))- VAR_2/VAR_0)
              * (VAR_3/(VAR_0-1/VAR_0))
              );
    }
    FUNC_1("#ifndef RGBLIGHT_EFFECT_BREATHE_TABLE\n");
    FUNC_1("#define RGBLIGHT_EFFECT_BREATHE_TABLE\n\n");
    FUNC_1("const uint8_t rgblight_effect_breathe_table[] PROGMEM = {\n");
    FUNC_1("  /* #define RGBLIGHT_EFFECT_BREATHE_CENTER   %.2f */\n", VAR_2);
    FUNC_1("  /* #define RGBLIGHT_EFFECT_BREATHE_MAX      %d */\n", VAR_3);

    for (int VAR_7 = 0, VAR_8 = (1<<VAR_7); VAR_7 < 3 ; VAR_7 += 1, VAR_8 = (1<<VAR_7) ) {
        FUNC_1("\n #if RGBLIGHT_BREATHE_TABLE_SIZE == %d\n",
               VAR_7 == 0 ? 256:(VAR_7== 1 ? 128: 64));
        for (VAR_4 = 0; VAR_4 < 256; VAR_4 += VAR_8 ) {
            FUNC_1("  0x%x%s", VAR_6[VAR_4], (VAR_4+VAR_8)>=256?"":"," );
            if ((VAR_4+VAR_8) % 8 == 0)
                FUNC_1("\n");
        }
        FUNC_1(" #endif /* %d bytes table */\n", VAR_7 == 0 ? 256:(VAR_7== 1 ? 128: 64));
    }
    FUNC_1("};\n");
    FUNC_1("\nstatic const int table_scale = 256/sizeof(rgblight_effect_breathe_table);\n");
    FUNC_1("\n#endif /* RGBLIGHT_EFFECT_BREATHE_TABLE */\n");
    return 0;
}
