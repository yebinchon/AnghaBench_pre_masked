
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGLONG ;


 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(void)
{
    ULONGLONG VAR_0;

    if ( !&FUNC_1 )
    {
        FUNC_2("RtlUlonglongByteSwap is not available\n");
        return;
    }

    if ( FUNC_1( 0 ) != 0 )
    {
        FUNC_2("Broken RtlUlonglongByteSwap in win2k\n");
        return;
    }

    VAR_0 = FUNC_1( ((ULONGLONG)0x76543210 << 32) | 0x87654321 );
    FUNC_0( (((ULONGLONG)0x21436587 << 32) | 0x10325476) == VAR_0,
       "RtlUlonglongByteSwap(0x7654321087654321) returns 0x%s, expected 0x2143658710325476\n",
       FUNC_3(VAR_0));
}
