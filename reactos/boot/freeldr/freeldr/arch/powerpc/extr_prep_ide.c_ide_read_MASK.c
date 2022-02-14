
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bytespersec; int seek_sector; int seek_cylinder; int seek_head; int seekto; scalar_t__ port; } ;
typedef TYPE_1__ idectl_desc ;


 short FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,int,int) ;

int FUNC_4( void *VAR_0, char *VAR_1, int VAR_2 ) {
    idectl_desc *VAR_3 = (idectl_desc *)VAR_0;
    short *VAR_4 = (short *)VAR_1;
    int VAR_5;

    FUNC_2( VAR_0 );
    FUNC_1(VAR_3->port+2, VAR_2 / VAR_3->bytespersec);
    FUNC_1(VAR_3->port+3, VAR_3->seek_sector + 1);
    FUNC_1(VAR_3->port+4, VAR_3->seek_cylinder);
    FUNC_1(VAR_3->port+5, VAR_3->seek_cylinder >> 8);
    FUNC_1(VAR_3->port+6, VAR_3->seek_head | 0xa0);
    FUNC_1(VAR_3->port+7, 0x20);

    for( VAR_5 = 0; VAR_5 < VAR_3->bytespersec / sizeof(short); VAR_5++ ) {
    VAR_4[VAR_5] = FUNC_0(VAR_3->port);
    }

    VAR_3->seekto += VAR_3->bytespersec;
    FUNC_3( VAR_0, VAR_3->seekto, VAR_3->seekto >> 32 );

    return VAR_2 - (VAR_2 % VAR_3->bytespersec);
}
