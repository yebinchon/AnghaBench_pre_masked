
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
typedef enum wined3d_data_type { ____Placeholder_wined3d_data_type } wined3d_data_type ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;




 int FUNC_1 (struct wined3d_string_buffer*,char*,char const*) ;

__attribute__((used)) static void FUNC_2(struct wined3d_string_buffer *VAR_1, const char *VAR_2,
        enum wined3d_data_type VAR_3, enum wined3d_data_type VAR_4)
{
    if (VAR_3 == VAR_4)
    {
        FUNC_1(VAR_1, "%s", VAR_2);
        return;
    }

    if (VAR_4 == VAR_0)
    {
        switch (VAR_3)
        {
            case 131:
                FUNC_1(VAR_1, "floatBitsToInt(%s)", VAR_2);
                return;
            case 130:
            case 129:
            case 128:
                FUNC_1(VAR_1, "floatBitsToUint(%s)", VAR_2);
                return;
            default:
                break;
        }
    }

    if (VAR_4 == 128 && VAR_3 == VAR_0)
    {
        FUNC_1(VAR_1, "uintBitsToFloat(%s)", VAR_2);
        return;
    }

    if (VAR_4 == 131 && VAR_3 == VAR_0)
    {
        FUNC_1(VAR_1, "intBitsToFloat(%s)", VAR_2);
        return;
    }

    FUNC_0("Unhandled cast from %#x to %#x.\n", VAR_4, VAR_3);
    FUNC_1(VAR_1, "%s", VAR_2);
}
