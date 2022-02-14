
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int BytesPerSector; int Heads; int Sectors; } ;
typedef TYPE_1__* PGEOMETRY ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;

BOOLEAN FUNC_1( ULONG VAR_1, PGEOMETRY VAR_2 ) {
    FUNC_0("GetGeometry(%d)\n", VAR_1);
    VAR_2->BytesPerSector = 512;
    VAR_2->Heads = 16;
    VAR_2->Sectors = 63;
    return VAR_0;
}
