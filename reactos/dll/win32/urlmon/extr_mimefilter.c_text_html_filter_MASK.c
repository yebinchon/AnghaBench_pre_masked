
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef char BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(const BYTE *VAR_2, DWORD VAR_3)
{
    if(VAR_3 < 6)
        return VAR_0;

    if((VAR_2[0] == '<'
                && (VAR_2[1] == 'h' || VAR_2[1] == 'H')
                && (VAR_2[2] == 't' || VAR_2[2] == 'T')
                && (VAR_2[3] == 'm' || VAR_2[3] == 'M')
                && (VAR_2[4] == 'l' || VAR_2[4] == 'L'))
            || (VAR_2[0] == '<'
                && (VAR_2[1] == 'h' || VAR_2[1] == 'H')
                && (VAR_2[2] == 'e' || VAR_2[2] == 'E')
                && (VAR_2[3] == 'a' || VAR_2[3] == 'A')
                && (VAR_2[4] == 'd' || VAR_2[4] == 'D'))
            || (VAR_2[0] == '<'
                && (VAR_2[1] == 'b' || VAR_2[1] == 'B')
                && (VAR_2[2] == 'o' || VAR_2[2] == 'O')
                && (VAR_2[3] == 'd' || VAR_2[3] == 'D')
                && (VAR_2[4] == 'y' || VAR_2[4] == 'Y'))) return VAR_1;

    return VAR_0;
}
