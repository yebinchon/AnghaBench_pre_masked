
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
    if(VAR_3 < 7)
        return VAR_0;

    if(VAR_2[0] == '<' && VAR_2[1] == '?'
            && (VAR_2[2] == 'x' || VAR_2[2] == 'X')
            && (VAR_2[3] == 'm' || VAR_2[3] == 'M')
            && (VAR_2[4] == 'l' || VAR_2[4] == 'L')
            && VAR_2[5] == ' ') return VAR_1;

    return VAR_0;
}
