
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

inline BOOL FUNC_0(WCHAR VAR_2)
{
    if (0x0E00 <= VAR_2 && VAR_2 <= 0x0E7F)
        return VAR_1;

    if (0x3000 <= VAR_2 && VAR_2 <= 0x9FFF)
        return VAR_1;

    if (0xAC00 <= VAR_2 && VAR_2 <= 0xD7FF)
        return VAR_1;

    if (0xFF00 <= VAR_2 && VAR_2 <= 0xFFEF)
        return VAR_1;

    return VAR_0;
}
