
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
 int VAR_2 ;


 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int const*,int *,int ,int ,unsigned int,unsigned int,int ,int ) ;

BOOL FUNC_3(const BYTE *VAR_4, BYTE *VAR_5, DWORD VAR_6, DWORD VAR_7,
        enum wined3d_format_id VAR_8, unsigned int VAR_9, unsigned int VAR_10)
{
    if (!VAR_3)
        return VAR_0;

    switch (VAR_8)
    {
        case 129:
            return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_9, VAR_10,
                                    VAR_1, VAR_2);
        case 128:
            return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_9, VAR_10,
                                    VAR_1, VAR_0);
        default:
            break;
    }

    FUNC_0("Cannot find a conversion function from format %s to DXT3.\n", FUNC_1(VAR_8));
    return VAR_0;
}
