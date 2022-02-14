
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int WORD ;
typedef void* UINT ;
struct TYPE_12__ {int biSizeImage; } ;
struct TYPE_14__ {TYPE_1__ bmiHeader; } ;
struct TYPE_13__ {int rdSize; void** rdParm; int rdFunction; } ;
typedef int PHYSDEV ;
typedef TYPE_2__ METARECORD ;
typedef TYPE_3__* LPCVOID ;
typedef void* INT16 ;
typedef void* INT ;
typedef int DWORD ;
typedef TYPE_3__ BITMAPINFO ;


 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (int ,TYPE_2__*,int) ;
 int FUNC_4 (TYPE_3__*,void*) ;
 int FUNC_5 (void**,TYPE_3__*,int) ;

INT FUNC_6( PHYSDEV VAR_1, INT VAR_2, INT VAR_3, DWORD VAR_4,
                             DWORD VAR_5, INT VAR_6, INT VAR_7, UINT VAR_8,
                             UINT VAR_9, LPCVOID VAR_10, BITMAPINFO *VAR_11, UINT VAR_12 )

{
    DWORD VAR_13 = FUNC_4(VAR_11, VAR_12);
    DWORD VAR_14 = sizeof(METARECORD) + 8 * sizeof(WORD) + VAR_13 + VAR_11->bmiHeader.biSizeImage;
    METARECORD *VAR_15 = FUNC_1( FUNC_0(), 0, VAR_14 );
    if(!VAR_15) return 0;

    VAR_15->rdSize = VAR_14 / 2;
    VAR_15->rdFunction = VAR_0;
    VAR_15->rdParm[0] = VAR_12;
    VAR_15->rdParm[1] = VAR_9;
    VAR_15->rdParm[2] = VAR_8;
    VAR_15->rdParm[3] = (INT16)VAR_7;
    VAR_15->rdParm[4] = (INT16)VAR_6;
    VAR_15->rdParm[5] = (INT16)VAR_5;
    VAR_15->rdParm[6] = (INT16)VAR_4;
    VAR_15->rdParm[7] = (INT16)VAR_3;
    VAR_15->rdParm[8] = (INT16)VAR_2;
    FUNC_5(VAR_15->rdParm + 9, VAR_11, VAR_13);
    FUNC_5(VAR_15->rdParm + 9 + VAR_13 / 2, VAR_10, VAR_11->bmiHeader.biSizeImage);
    FUNC_3( VAR_1, VAR_15, VAR_15->rdSize * 2 );
    FUNC_2( FUNC_0(), 0, VAR_15 );
    return VAR_9;
}
