
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef scalar_t__ ULONG ;
typedef int UCHAR ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static USHORT FUNC_1(USHORT VAR_0, UCHAR *VAR_1, UCHAR *VAR_2)
{
    VAR_2[0] = FUNC_0((ULONG) VAR_1 + 0) & 0xFF;
    VAR_2[1] = FUNC_0((ULONG) VAR_1 + 1) & 0xFF;

    return( *(USHORT *) VAR_2 );
}
