
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;

uint8_t FUNC_2(void) {
    VAR_4 = ((uint32_t)(VAR_2 & 0x7FF)) | ((uint32_t)(VAR_3 & 0x3F8) << 8);

    switch (VAR_4) {
        case 0x1134E: VAR_1[0] = 0x01; break;
        case 0x3774D: VAR_1[0] = 0x02; break;
        case 0x10BCC: VAR_1[0] = 0x04; break;
        case 0x16B4B: VAR_1[0] = 0x08; break;
        case 0x167CA: VAR_1[0] = 0x10; break;
        case 0x35FC9: VAR_1[0] = 0x20; break;
        case 0x15B48: VAR_1[0] = 0x40; break;
        case 0x28347: VAR_1[0] = 0x80; break;
        case 0x173C6: VAR_1[0] = 0x100; break;
        case 0x143CF: VAR_1[0] = 0x200; break;
        case 0x3FDC5: VAR_1[0] = 0x400; break;
        case 0x3FD21: VAR_1[0] = 0x800; break;
        case 0x3FD77: VAR_1[0] = 0x1000; break;
        case 0x3FD72: VAR_1[0] = 0x2000; break;

        case 0x3E7FA: VAR_1[0] = 0x8000; break;
        case 0x183EE: VAR_1[0] = 0x10000; break;
        case 0x197F3: VAR_1[0] = 0x20000; break;
        case 0x1AB7E: VAR_1[0] = 0x40000; break;

        case 0x107C3: VAR_1[1] = 0x01; break;
        case 0x3FD2E: VAR_1[1] = 0x02; break;
        case 0x3FD28: VAR_1[1] = 0x04; break;
        case 0x3FD3A: VAR_1[1] = 0x08; break;
        case 0x3FD2D: VAR_1[1] = 0x10; break;
        case 0x3FD2B: VAR_1[1] = 0x20; break;
        case 0x3FDA5: VAR_1[1] = 0x40; break;
        case 0x3FDAA: VAR_1[1] = 0x80; break;
        case 0x3FD36: VAR_1[1] = 0x100; break;
        case 0x3FD30: VAR_1[1] = 0x200; break;
        case 0x3FDAF: VAR_1[1] = 0x400; break;
        case 0x3FD22: VAR_1[1] = 0x800; break;
        case 0x157D4: VAR_1[1] = 0x1000; break;


        case 0x1C778: VAR_1[1] = 0x8000; break;
        case 0x387ED: VAR_1[1] = 0x10000; break;
        case 0x19B74: VAR_1[1] = 0x20000; break;
        case 0x3FD7D: VAR_1[1] = 0x40000; break;


        case 0x3FDBE: VAR_1[2] = 0x02; break;
        case 0x3FDAC: VAR_1[2] = 0x04; break;
        case 0x3FDBB: VAR_1[2] = 0x08; break;
        case 0x3FD39: VAR_1[2] = 0x10; break;
        case 0x3FDB8: VAR_1[2] = 0x20; break;
        case 0x3FDB7: VAR_1[2] = 0x40; break;
        case 0x3FD35: VAR_1[2] = 0x80; break;
        case 0x3FDB4: VAR_1[2] = 0x100; break;
        case 0x3FD33: VAR_1[2] = 0x200; break;
        case 0x3FDA3: VAR_1[2] = 0x400; break;
        case 0x3FD24: VAR_1[2] = 0x800; break;
        case 0x0FFDB: VAR_1[2] = 0x1000; break;
        case 0x3FDF5: VAR_1[2] = 0x2000; break;
        case 0x3FDFF: VAR_1[2] = 0x4000; break;
        case 0x3C3E4: VAR_1[2] = 0x8000; break;
        case 0x38B6C: VAR_1[2] = 0x10000; break;
        case 0x39FF6: VAR_1[2] = 0x20000; break;
        case 0x3FDFC: VAR_1[2] = 0x40000; break;


        case 0x3FDA6: VAR_1[3] = 0x02; break;
        case 0x3FD27: VAR_1[3] = 0x04; break;
        case 0x3FD3C: VAR_1[3] = 0x08; break;
        case 0x3FDA9: VAR_1[3] = 0x10; break;
        case 0x3FDBD: VAR_1[3] = 0x20; break;
        case 0x3FDB1: VAR_1[3] = 0x40; break;
        case 0x3FDB2: VAR_1[3] = 0x80; break;
        case 0x30353: VAR_1[3] = 0x100; break;
        case 0x37BD1: VAR_1[3] = 0x200; break;
        case 0x363D2: VAR_1[3] = 0x400; break;
        case 0x3FD5F: VAR_1[3] = 0x800; break;



        case 0x1BF00: VAR_1[3] = 0x8000; break;
        case 0x18FEB: VAR_1[3] = 0x10000; break;
        case 0x3FF69: VAR_1[3] = 0x20000; break;
        case 0x3A37B: VAR_1[3] = 0x40000; break;
        default:
                 if ((VAR_3 & 0x1000) == 0) { VAR_1[1] = 0x4000; break; }
                 if ((VAR_3 & 0x2000) == 0) { VAR_1[3] = 0x4000; break; }
                 if ((VAR_3 & 0x4000) == 0) { VAR_1[0] = 0x4000; break; }
                 if ((VAR_3 & 0x8000) == 0) { VAR_1[2] = 0x01; break; }
                 VAR_1[0] = 0x00;
                 VAR_1[1] = 0x00;
                 VAR_1[2] = 0x00;
                 VAR_1[3] = 0x00;
    }

    if (FUNC_1(VAR_0) == 0) { VAR_1[3] |= 0x01; }

    VAR_2 = 65535;
    VAR_3 = 65535;

    FUNC_0();
    return 1;
}
