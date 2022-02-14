
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int) ;
 scalar_t__ FUNC_18 (int) ;
 scalar_t__ FUNC_19 (int) ;
 scalar_t__ FUNC_20 (int) ;
 scalar_t__ FUNC_21 (int) ;
 scalar_t__ FUNC_22 (int) ;
 scalar_t__ FUNC_23 (int) ;
 scalar_t__ FUNC_24 (int) ;
 scalar_t__ FUNC_25 (int) ;
 scalar_t__ FUNC_26 (int) ;
 scalar_t__ FUNC_27 (int) ;
 scalar_t__ FUNC_28 (int) ;
 scalar_t__ FUNC_29 (int) ;
 scalar_t__ FUNC_30 (int) ;
 scalar_t__ FUNC_31 (int) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (int ) ;
 int FUNC_35 (int,int ) ;
 int FUNC_36 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_37 (int) ;
 int FUNC_38 (int) ;
 int FUNC_39 (int) ;
 int FUNC_40 (int) ;
 char const* FUNC_41 (char*,int,...) ;

const char *FUNC_42(DWORD VAR_2)
{
    if (FUNC_23(VAR_2))
        return FUNC_41("STATE_RENDER(%s)", FUNC_37(VAR_2 - FUNC_32(0)));
    if (FUNC_28(VAR_2))
    {
        DWORD VAR_3 = (VAR_2 - FUNC_35(0, 0)) / (VAR_0 + 1);
        DWORD VAR_4 = VAR_2 - FUNC_35(VAR_3, 0);
        return FUNC_41("STATE_TEXTURESTAGE(%#x, %s)",
                VAR_3, FUNC_38(VAR_4));
    }
    if (FUNC_24(VAR_2))
        return FUNC_41("STATE_SAMPLER(%#x)", VAR_2 - FUNC_33(0));
    if (FUNC_9(VAR_2))
        return FUNC_41("STATE_SHADER(%s)", FUNC_40(VAR_1));
    if (FUNC_15(VAR_2))
        return FUNC_41("STATE_SHADER(%s)", FUNC_40(VAR_2 - FUNC_34(0)));
    if (FUNC_8(VAR_2))
        return FUNC_41("STATE_CONSTANT_BUFFER(%s)", FUNC_40(VAR_1));
    if (FUNC_14(VAR_2))
        return FUNC_41("STATE_CONSTANT_BUFFER(%s)", FUNC_40(VAR_2 - FUNC_2(0)));
    if (FUNC_10(VAR_2))
        return "STATE_COMPUTE_SHADER_RESOURCE_BINDING";
    if (FUNC_16(VAR_2))
        return "STATE_GRAPHICS_SHADER_RESOURCE_BINDING";
    if (FUNC_11(VAR_2))
        return "STATE_COMPUTE_UNORDERED_ACCESS_VIEW_BINDING";
    if (FUNC_17(VAR_2))
        return "STATE_GRAPHICS_UNORDERED_ACCESS_VIEW_BINDING";
    if (FUNC_29(VAR_2))
        return FUNC_41("STATE_TRANSFORM(%s)", FUNC_39(VAR_2 - FUNC_36(0)));
    if (FUNC_26(VAR_2))
        return "STATE_STREAMSRC";
    if (FUNC_18(VAR_2))
        return "STATE_INDEXBUFFER";
    if (FUNC_30(VAR_2))
        return "STATE_VDECL";
    if (FUNC_31(VAR_2))
        return "STATE_VIEWPORT";
    if (FUNC_19(VAR_2))
        return "STATE_LIGHT_TYPE";
    if (FUNC_3(VAR_2))
        return FUNC_41("STATE_ACTIVELIGHT(%#x)", VAR_2 - FUNC_0(0));
    if (FUNC_25(VAR_2))
        return "STATE_SCISSORRECT";
    if (FUNC_6(VAR_2))
        return FUNC_41("STATE_CLIPPLANE(%#x)", VAR_2 - FUNC_1(0));
    if (FUNC_20(VAR_2))
        return "STATE_MATERIAL";
    if (FUNC_13(VAR_2))
        return "STATE_FRONTFACE";
    if (FUNC_21(VAR_2))
        return "STATE_POINTSPRITECOORDORIGIN";
    if (FUNC_4(VAR_2))
        return "STATE_BASEVERTEXINDEX";
    if (FUNC_12(VAR_2))
        return "STATE_FRAMEBUFFER";
    if (FUNC_22(VAR_2))
        return "STATE_POINT_ENABLE";
    if (FUNC_7(VAR_2))
        return "STATE_COLOR_KEY";
    if (FUNC_27(VAR_2))
        return "STATE_STREAM_OUTPUT";
    if (FUNC_5(VAR_2))
        return "STATE_BLEND";

    return FUNC_41("UNKNOWN_STATE(%#x)", VAR_2);
}
