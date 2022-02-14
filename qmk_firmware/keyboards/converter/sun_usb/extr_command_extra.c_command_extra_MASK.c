
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;

bool FUNC_3(uint8_t VAR_2)
{
    switch (VAR_2) {
        case 133:
        case 128:
            FUNC_0("\n\n----- Sun converter Help -----\n");
            FUNC_0("Home:        Toggle Bell\n");
            FUNC_0("End:         Toggle Click\n");
            FUNC_0("PgUp:        LED all On\n");
            FUNC_0("PgDown:      LED all Off\n");
            FUNC_0("Insert:      Layout\n");
            FUNC_0("Delete:      Reset\n");
            return 0;
        case 135:
            FUNC_0("Reset\n");
            FUNC_1(0x01);
            break;
        case 132:
     VAR_0 = !VAR_0;
     if (VAR_0) {
                FUNC_0("Bell On\n");
         FUNC_1(0x02);
     } else {
         FUNC_0("Bell Off\n");
         FUNC_1(0x03);
     }
            break;
        case 134:
     VAR_1 = !VAR_1;
     if (VAR_1) {
         FUNC_0("Click On\n");
  FUNC_1(0x0A);
     } else {
         FUNC_0("Click Off\n");
                FUNC_1(0x0B);
     }
     break;
        case 129:
            FUNC_0("LED all on\n");
            FUNC_1(0x0E);
            FUNC_1(0xFF);
            break;
        case 130:
            FUNC_0("LED all off\n");
            FUNC_1(0x0E);
            FUNC_1(0x00);
            break;
        case 131:
            FUNC_0("layout\n");
            FUNC_1(0x0F);
            break;
        default:
            FUNC_2("Unknown extra command: %02X\n", VAR_2);
            return 0;
    }
    return 1;
}
