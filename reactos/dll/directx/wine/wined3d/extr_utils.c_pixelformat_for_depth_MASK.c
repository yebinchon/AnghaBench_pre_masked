
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_format_id { ____Placeholder_wined3d_format_id } wined3d_format_id ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

enum wined3d_format_id FUNC_0(DWORD VAR_5)
{
    switch (VAR_5)
    {
        case 8: return VAR_3;
        case 15: return VAR_0;
        case 16: return VAR_1;
        case 24: return VAR_2;
        case 32: return VAR_2;
        default: return VAR_4;
    }
}
