
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_channel_type { ____Placeholder_wined3d_channel_type } wined3d_channel_type ;


 int FUNC_0 (char*,char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static enum wined3d_channel_type FUNC_1(char VAR_9)
{
    switch (VAR_9)
    {
        case 'u':
            return VAR_7;
        case 'i':
            return VAR_4;
        case 'U':
            return VAR_6;
        case 'I':
            return VAR_3;
        case 'F':
            return VAR_1;
        case 'D':
            return VAR_0;
        case 'S':
            return VAR_5;
        case 'X':
            return VAR_8;
        default:
            FUNC_0("Invalid channel type '%c'.\n", VAR_9);
            return VAR_2;
    }
}
