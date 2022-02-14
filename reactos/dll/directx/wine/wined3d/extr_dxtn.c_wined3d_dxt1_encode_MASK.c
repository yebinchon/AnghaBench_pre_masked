
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
 int VAR_3 ;




 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int const*,int *,int ,int ,unsigned int,unsigned int,int ,int ) ;
 int FUNC_3 (int const*,int *,int ,int ,unsigned int,unsigned int,int ,int ) ;

BOOL FUNC_4(const BYTE *VAR_5, BYTE *VAR_6, DWORD VAR_7, DWORD VAR_8,
        enum wined3d_format_id VAR_9, unsigned int VAR_10, unsigned int VAR_11)
{
    if (!VAR_4)
        return VAR_0;

    switch (VAR_9)
    {
        case 129:
            return FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, VAR_10, VAR_11,
                                    VAR_1, VAR_3);
        case 128:
            return FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, VAR_10, VAR_11,
                                    VAR_2, VAR_0);
        case 131:
            return FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8, VAR_10, VAR_11,
                                    VAR_1, VAR_3);
        case 130:
            return FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8, VAR_10, VAR_11,
                                    VAR_2, VAR_0);
        default:
            break;
    }

    FUNC_0("Cannot find a conversion function from format %s to DXT1.\n", FUNC_1(VAR_9));
    return VAR_0;
}
