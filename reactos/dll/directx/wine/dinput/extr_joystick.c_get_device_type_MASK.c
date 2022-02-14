
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

DWORD FUNC_0(DWORD VAR_6, BOOL VAR_7)
{
    if (VAR_7)
        return VAR_6 >= 0x0800 ? VAR_2 | (VAR_0 << 8) :
                    VAR_5 | (VAR_4 << 8);

    return VAR_6 >= 0x0800 ? VAR_1 | (VAR_0 << 8) :
                VAR_5 | (VAR_3 << 8);
}
