
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf8_char_t ;
typedef int uint16_t ;



uint16_t FUNC_0 (const utf8_char_t* VAR_0)
{
    const unsigned char* VAR_1 = 0;
    const unsigned char* VAR_2 = (const unsigned char*) VAR_0;

    if (0==VAR_0) { return 0x0000;}


{
    unsigned char VAR_3;
    VAR_3 = *VAR_2;
    if (VAR_3 <= '`') {
        if (VAR_3 <= '*') {
            if (VAR_3 <= '&') {
                if (VAR_3 <= 0x00) goto yy2;
                if (VAR_3 <= 0x1F) goto yy4;
                goto yy6;
            } else {
                if (VAR_3 <= '\'') goto yy8;
                if (VAR_3 <= ')') goto yy6;
                goto yy10;
            }
        } else {
            if (VAR_3 <= ']') {
                if (VAR_3 == '\\') goto yy12;
                goto yy6;
            } else {
                if (VAR_3 <= '^') goto yy14;
                if (VAR_3 <= '_') goto yy16;
                goto yy18;
            }
        }
    } else {
        if (VAR_3 <= 0x7F) {
            if (VAR_3 <= '|') {
                if (VAR_3 <= 'z') goto yy6;
                if (VAR_3 <= '{') goto yy20;
                goto yy22;
            } else {
                if (VAR_3 <= '}') goto yy24;
                if (VAR_3 <= '~') goto yy26;
                goto yy28;
            }
        } else {
            if (VAR_3 <= 0xC3) {
                if (VAR_3 <= 0xC1) goto yy4;
                if (VAR_3 <= 0xC2) goto yy30;
                goto yy31;
            } else {
                if (VAR_3 == 0xE2) goto yy32;
                goto yy4;
            }
        }
    }
yy2:
    ++VAR_2;
    { return 0x0000; }
yy4:
    ++VAR_2;
yy5:
    { return 0x0000; }
yy6:
    ++VAR_2;
    { return (VAR_0[0]<<8) &0xFF00; }
yy8:
    ++VAR_2;
    { return 0x1229; }
yy10:
    ++VAR_2;
    { return 0x1228; }
yy12:
    ++VAR_2;
    { return 0x132B; }
yy14:
    ++VAR_2;
    { return 0x132C; }
yy16:
    ++VAR_2;
    { return 0x132D; }
yy18:
    ++VAR_2;
    { return 0x1226; }
yy20:
    ++VAR_2;
    { return 0x1329; }
yy22:
    ++VAR_2;
    { return 0x132E; }
yy24:
    ++VAR_2;
    { return 0x132A; }
yy26:
    ++VAR_2;
    { return 0x132F; }
yy28:
    ++VAR_2;
    { return 0x0000; }
yy30:
    VAR_3 = *++VAR_2;
    switch (VAR_3) {
    case 0xA0: goto yy33;
    case 0xA1: goto yy35;
    case 0xA2: goto yy37;
    case 0xA3: goto yy39;
    case 0xA4: goto yy41;
    case 0xA5: goto yy43;
    case 0xA6: goto yy45;
    case 0xA9: goto yy47;
    case 0xAB: goto yy49;
    case 0xAE: goto yy51;
    case 0xB0: goto yy53;
    case 0xBB: goto yy55;
    case 0xBD: goto yy57;
    case 0xBF: goto yy59;
    default: goto yy5;
    }
yy31:
    VAR_3 = *++VAR_2;
    switch (VAR_3) {
    case 0x80: goto yy61;
    case 0x81: goto yy63;
    case 0x82: goto yy65;
    case 0x83: goto yy67;
    case 0x84: goto yy69;
    case 0x85: goto yy71;
    case 0x87: goto yy73;
    case 0x88: goto yy75;
    case 0x89: goto yy77;
    case 0x8A: goto yy79;
    case 0x8B: goto yy81;
    case 0x8C: goto yy83;
    case 0x8D: goto yy85;
    case 0x8E: goto yy87;
    case 0x8F: goto yy89;
    case 0x91: goto yy91;
    case 0x92: goto yy93;
    case 0x93: goto yy95;
    case 0x94: goto yy97;
    case 0x95: goto yy99;
    case 0x96: goto yy101;
    case 0x98: goto yy103;
    case 0x99: goto yy105;
    case 0x9A: goto yy107;
    case 0x9B: goto yy109;
    case 0x9C: goto yy111;
    case 0x9F: goto yy113;
    case 0xA0: goto yy115;
    case 0xA1: goto yy117;
    case 0xA2: goto yy119;
    case 0xA3: goto yy121;
    case 0xA4: goto yy123;
    case 0xA5: goto yy125;
    case 0xA7: goto yy127;
    case 0xA8: goto yy129;
    case 0xA9: goto yy131;
    case 0xAA: goto yy133;
    case 0xAB: goto yy135;
    case 0xAC: goto yy137;
    case 0xAD: goto yy139;
    case 0xAE: goto yy141;
    case 0xAF: goto yy143;
    case 0xB1: goto yy145;
    case 0xB2: goto yy147;
    case 0xB3: goto yy149;
    case 0xB4: goto yy151;
    case 0xB5: goto yy153;
    case 0xB6: goto yy155;
    case 0xB7: goto yy157;
    case 0xB8: goto yy159;
    case 0xB9: goto yy161;
    case 0xBA: goto yy163;
    case 0xBB: goto yy165;
    case 0xBC: goto yy167;
    default: goto yy5;
    }
yy32:
    VAR_3 = *(VAR_1 = ++VAR_2);
    switch (VAR_3) {
    case 0x80: goto yy169;
    case 0x84: goto yy171;
    case 0x94: goto yy172;
    case 0x96: goto yy173;
    case 0x99: goto yy174;
    default: goto yy5;
    }
yy33:
    ++VAR_2;
    { return 0x1139; }
yy35:
    ++VAR_2;
    { return 0x1227; }
yy37:
    ++VAR_2;
    { return 0x1135; }
yy39:
    ++VAR_2;
    { return 0x1136; }
yy41:
    ++VAR_2;
    { return 0x1336; }
yy43:
    ++VAR_2;
    { return 0x1335; }
yy45:
    ++VAR_2;
    { return 0x1337; }
yy47:
    ++VAR_2;
    { return 0x122B; }
yy49:
    ++VAR_2;
    { return 0x123E; }
yy51:
    ++VAR_2;
    { return 0x1130; }
yy53:
    ++VAR_2;
    { return 0x1131; }
yy55:
    ++VAR_2;
    { return 0x123F; }
yy57:
    ++VAR_2;
    { return 0x1132; }
yy59:
    ++VAR_2;
    { return 0x1133; }
yy61:
    ++VAR_2;
    { return 0x1230; }
yy63:
    ++VAR_2;
    { return 0x1220; }
yy65:
    ++VAR_2;
    { return 0x1231; }
yy67:
    ++VAR_2;
    { return 0x1320; }
yy69:
    ++VAR_2;
    { return 0x1330; }
yy71:
    ++VAR_2;
    { return 0x1338; }
yy73:
    ++VAR_2;
    { return 0x1232; }
yy75:
    ++VAR_2;
    { return 0x1233; }
yy77:
    ++VAR_2;
    { return 0x1221; }
yy79:
    ++VAR_2;
    { return 0x1234; }
yy81:
    ++VAR_2;
    { return 0x1235; }
yy83:
    ++VAR_2;
    { return 0x1323; }
yy85:
    ++VAR_2;
    { return 0x1322; }
yy87:
    ++VAR_2;
    { return 0x1237; }
yy89:
    ++VAR_2;
    { return 0x1238; }
yy91:
    ++VAR_2;
    { return 0x7D00; }
yy93:
    ++VAR_2;
    { return 0x1325; }
yy95:
    ++VAR_2;
    { return 0x1222; }
yy97:
    ++VAR_2;
    { return 0x123A; }
yy99:
    ++VAR_2;
    { return 0x1327; }
yy101:
    ++VAR_2;
    { return 0x1332; }
yy103:
    ++VAR_2;
    { return 0x133A; }
yy105:
    ++VAR_2;
    { return 0x123B; }
yy107:
    ++VAR_2;
    { return 0x1223; }
yy109:
    ++VAR_2;
    { return 0x123D; }
yy111:
    ++VAR_2;
    { return 0x1224; }
yy113:
    ++VAR_2;
    { return 0x1334; }
yy115:
    ++VAR_2;
    { return 0x1138; }
yy117:
    ++VAR_2;
    { return 0x2A00; }
yy119:
    ++VAR_2;
    { return 0x113B; }
yy121:
    ++VAR_2;
    { return 0x1321; }
yy123:
    ++VAR_2;
    { return 0x1331; }
yy125:
    ++VAR_2;
    { return 0x1339; }
yy127:
    ++VAR_2;
    { return 0x7B00; }
yy129:
    ++VAR_2;
    { return 0x113A; }
yy131:
    ++VAR_2;
    { return 0x5C00; }
yy133:
    ++VAR_2;
    { return 0x113C; }
yy135:
    ++VAR_2;
    { return 0x1236; }
yy137:
    ++VAR_2;
    { return 0x1324; }
yy139:
    ++VAR_2;
    { return 0x5E00; }
yy141:
    ++VAR_2;
    { return 0x113D; }
yy143:
    ++VAR_2;
    { return 0x1239; }
yy145:
    ++VAR_2;
    { return 0x7E00; }
yy147:
    ++VAR_2;
    { return 0x1326; }
yy149:
    ++VAR_2;
    { return 0x5F00; }
yy151:
    ++VAR_2;
    { return 0x113E; }
yy153:
    ++VAR_2;
    { return 0x1328; }
yy155:
    ++VAR_2;
    { return 0x1333; }
yy157:
    ++VAR_2;
    { return 0x7C00; }
yy159:
    ++VAR_2;
    { return 0x133B; }
yy161:
    ++VAR_2;
    { return 0x123C; }
yy163:
    ++VAR_2;
    { return 0x6000; }
yy165:
    ++VAR_2;
    { return 0x113F; }
yy167:
    ++VAR_2;
    { return 0x1225; }
yy169:
    VAR_3 = *++VAR_2;
    switch (VAR_3) {
    case 0x94: goto yy175;
    case 0x98: goto yy177;
    case 0x99: goto yy179;
    case 0x9C: goto yy181;
    case 0x9D: goto yy183;
    case 0xA2: goto yy185;
    default: goto yy170;
    }
yy170:
    VAR_2 = VAR_1;
    goto yy5;
yy171:
    VAR_3 = *++VAR_2;
    if (VAR_3 == 0xA0) goto yy187;
    if (VAR_3 == 0xA2) goto yy189;
    goto yy170;
yy172:
    VAR_3 = *++VAR_2;
    switch (VAR_3) {
    case 0x8C: goto yy191;
    case 0x90: goto yy193;
    case 0x94: goto yy195;
    case 0x98: goto yy197;
    default: goto yy170;
    }
yy173:
    VAR_3 = *++VAR_2;
    if (VAR_3 == 0x88) goto yy199;
    goto yy170;
yy174:
    VAR_3 = *++VAR_2;
    if (VAR_3 == 0xAA) goto yy201;
    goto yy170;
yy175:
    ++VAR_2;
    { return 0x122A; }
yy177:
    ++VAR_2;
    { return 0x1226; }
yy179:
    ++VAR_2;
    { return 0x2700; }
yy181:
    ++VAR_2;
    { return 0x122E; }
yy183:
    ++VAR_2;
    { return 0x122F; }
yy185:
    ++VAR_2;
    { return 0x122D; }
yy187:
    ++VAR_2;
    { return 0x122C; }
yy189:
    ++VAR_2;
    { return 0x1134; }
yy191:
    ++VAR_2;
    { return 0x133C; }
yy193:
    ++VAR_2;
    { return 0x133D; }
yy195:
    ++VAR_2;
    { return 0x133E; }
yy197:
    ++VAR_2;
    { return 0x133F; }
yy199:
    ++VAR_2;
    { return 0x7F00; }
yy201:
    ++VAR_2;
    { return 0x1137; }
}

}
