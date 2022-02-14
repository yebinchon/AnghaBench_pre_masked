
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGLONG ;
typedef int ULONG ;
typedef int PVOID ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int) ;
 scalar_t__ FUNC_2 (int,int,int) ;
 int VAR_2 ;
 int FUNC_3 (char*,...) ;

BOOLEAN FUNC_4( ULONG VAR_3, ULONGLONG VAR_4,
                   ULONG VAR_5, PVOID VAR_6 ) {
    int VAR_7 = 0;

    if( VAR_2 == -1 ) {
    VAR_2 = FUNC_0( VAR_0 );

    if( VAR_2 == -1 ) {
        FUNC_3("Could not open any disk devices we know about\n");
        return VAR_1;
    }
    }

    if( VAR_2 == -1 ) {
    FUNC_3("Got partition handle %x\n", VAR_2);
    return VAR_1;
    }

    if( FUNC_2( VAR_2,
           (ULONG)(VAR_4 >> 25),
           (ULONG)((VAR_4 * 512) & 0xffffffff) ) ) {
    FUNC_3("Seek to %x failed\n", (ULONG)(VAR_4 * 512));
    return VAR_1;
    }

    VAR_7 = FUNC_1( VAR_2, VAR_6, (ULONG)(VAR_5 * 512) );
    return VAR_7 > 0;
}
