
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int HwIdle; int HwDetect; int GetMemoryMap; int VideoGetDisplaySize; int VideoSetDisplayMode; int VideoClearScreen; int ConsGetCh; int ConsKbHit; int DiskReadLogicalSectors; int ConsPutChar; } ;


 int FUNC_0 (char*) ;
 char* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;

void FUNC_3()
{
    VAR_1.ConsPutChar = VAR_8;

    FUNC_2("Serial on\n");

    FUNC_1( &VAR_12 );

    VAR_1.DiskReadLogicalSectors = VAR_5;

    VAR_1.ConsKbHit = VAR_4;
    VAR_1.ConsGetCh = VAR_3;

    VAR_1.VideoClearScreen = VAR_9;
    VAR_1.VideoSetDisplayMode = VAR_11;
    VAR_1.VideoGetDisplaySize = VAR_10;

    VAR_1.GetMemoryMap = VAR_6;
    VAR_1.HwDetect = VAR_7;
    VAR_1.HwIdle = VAR_2;

    FUNC_2( "FreeLDR version [%s]\n", VAR_0 );

    FUNC_0( "" );
}
