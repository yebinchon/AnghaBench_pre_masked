
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_format_id { ____Placeholder_wined3d_format_id } wined3d_format_id ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;




 int FUNC_1 (int) ;
 int FUNC_2 (int const*,int *,int ,int ,unsigned int,unsigned int,int ) ;
 int FUNC_3 (int const*,int *,int ,int ,unsigned int,unsigned int,int ) ;
 int VAR_2 ;

BOOL FUNC_4(const BYTE *VAR_3, BYTE *VAR_4, DWORD VAR_5, DWORD VAR_6,
        enum wined3d_format_id VAR_7, unsigned int VAR_8, unsigned int VAR_9)
{
    if (!VAR_2)
        return VAR_0;

    switch (VAR_7)
    {
        case 129:
            return FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8, VAR_9, VAR_1);
        case 128:
            return FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8, VAR_9, VAR_0);
        case 131:
            return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8, VAR_9, VAR_1);
        case 130:
            return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8, VAR_9, VAR_0);
        default:
            break;
    }

    FUNC_0("Cannot find a conversion function from format DXT3 to %s.\n", FUNC_1(VAR_7));
    return VAR_0;
}
