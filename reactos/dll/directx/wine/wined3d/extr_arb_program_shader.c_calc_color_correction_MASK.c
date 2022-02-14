
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct color_fixup_masks {int sign; int source; int member_1; int member_0; } ;
struct color_fixup_desc {scalar_t__ x_source; scalar_t__ y_source; scalar_t__ z_source; scalar_t__ w_source; scalar_t__ w_sign_fixup; scalar_t__ z_sign_fixup; scalar_t__ y_sign_fixup; scalar_t__ x_sign_fixup; } ;
typedef enum complex_fixup { ____Placeholder_complex_fixup } complex_fixup ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct color_fixup_desc) ;
 scalar_t__ FUNC_2 (struct color_fixup_desc) ;

__attribute__((used)) static struct color_fixup_masks FUNC_3(struct color_fixup_desc VAR_8, DWORD VAR_9)
{
    struct color_fixup_masks VAR_10 = {0, 0};

    if (FUNC_2(VAR_8))
    {
        enum complex_fixup VAR_11 = FUNC_1(VAR_8);
        FUNC_0("Complex fixup (%#x) not supported\n", VAR_11);
        return VAR_10;
    }

    if (VAR_8.x_source != VAR_1)
        VAR_10.source |= VAR_4;
    if (VAR_8.y_source != VAR_2)
        VAR_10.source |= VAR_5;
    if (VAR_8.z_source != VAR_3)
        VAR_10.source |= VAR_6;
    if (VAR_8.w_source != VAR_0)
        VAR_10.source |= VAR_7;
    VAR_10.source &= VAR_9;

    if (VAR_8.x_sign_fixup)
        VAR_10.sign |= VAR_4;
    if (VAR_8.y_sign_fixup)
        VAR_10.sign |= VAR_5;
    if (VAR_8.z_sign_fixup)
        VAR_10.sign |= VAR_6;
    if (VAR_8.w_sign_fixup)
        VAR_10.sign |= VAR_7;
    VAR_10.sign &= VAR_9;

    return VAR_10;
}
