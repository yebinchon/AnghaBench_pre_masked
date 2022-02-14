
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bytespersec; short cylinders; short heads; short sectors; scalar_t__ port; } ;
typedef TYPE_1__ idectl_desc ;


 short FUNC_0 (scalar_t__) ;
 short FUNC_1 (short) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (char*,char*,short,short,short) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 () ;

void FUNC_9( void *VAR_0 ) {
    idectl_desc *VAR_1 = (idectl_desc *)VAR_0;
    short VAR_2[256];
    char VAR_3[41];
    short *VAR_4 = (short *)VAR_2, VAR_5;
    int VAR_6;

    FUNC_5( VAR_0 );
    FUNC_3( VAR_0 );
    VAR_1->bytespersec = 512;
    FUNC_2(VAR_1->port+2, 1);
    FUNC_2(VAR_1->port+3, 0);
    FUNC_2(VAR_1->port+4, 0);
    FUNC_2(VAR_1->port+5, 0);
    FUNC_2(VAR_1->port+6, 0);
    FUNC_2(VAR_1->port+7, 0xec);
    FUNC_4( VAR_0 );

    for( VAR_6 = 0; VAR_6 < VAR_1->bytespersec / sizeof(short); VAR_6++ ) {
    VAR_5 = FUNC_0(VAR_1->port);
    VAR_4[VAR_6] = FUNC_1(VAR_5);
    FUNC_8();
    }

    VAR_1->cylinders = VAR_2[1];
    VAR_1->heads = VAR_2[3];
    VAR_1->sectors = VAR_2[6];



    FUNC_7(VAR_3, (char *)(VAR_2+0x1b), 41);
    FUNC_6("HARD DISC MODEL: %s c,h,s %d,%d,%d\n",
       VAR_3, VAR_1->cylinders, VAR_1->heads, VAR_1->sectors);
}
