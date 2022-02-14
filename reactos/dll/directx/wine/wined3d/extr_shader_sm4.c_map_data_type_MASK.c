
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_data_type { ____Placeholder_wined3d_data_type } wined3d_data_type ;


 int FUNC_0 (char*,char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static enum wined3d_data_type FUNC_1(char VAR_7)
{
    switch (VAR_7)
    {
        case 'f':
            return VAR_0;
        case 'i':
            return VAR_1;
        case 'u':
            return VAR_6;
        case 'O':
            return VAR_2;
        case 'R':
            return VAR_3;
        case 'S':
            return VAR_4;
        case 'U':
            return VAR_5;
        default:
            FUNC_0("Invalid data type '%c'.\n", VAR_7);
            return VAR_0;
    }
}
