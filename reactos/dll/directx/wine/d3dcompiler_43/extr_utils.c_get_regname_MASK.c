
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_reg {int type; int regnum; } ;
 char const* FUNC_0 (char*,int) ;

__attribute__((used)) static const char *FUNC_1(const struct shader_reg *VAR_0)
{
    switch (VAR_0->type)
    {
        case 133:
            return FUNC_0("r%u", VAR_0->regnum);
        case 141:
            return FUNC_0("v%u", VAR_0->regnum);
        case 145:
            return FUNC_0("c%u", VAR_0->regnum);
        case 148:
            return FUNC_0("a%u", VAR_0->regnum);
        case 131:
            return FUNC_0("t%u", VAR_0->regnum);
        case 135:
            switch (VAR_0->regnum)
            {
                case 128: return "oPos";
                case 130: return "oFog";
                case 129: return "oPts";
                default: return "Unexpected RASTOUT";
            }
        case 147:
            return FUNC_0("oD%u", VAR_0->regnum);
        case 132:
            return FUNC_0("oT%u", VAR_0->regnum);
        case 137:
            return FUNC_0("o%u", VAR_0->regnum);
        case 143:
            return FUNC_0("i%u", VAR_0->regnum);
        case 146:
            return FUNC_0("oC%u", VAR_0->regnum);
        case 142:
            return "oDepth";
        case 134:
            return FUNC_0("s%u", VAR_0->regnum);
        case 144:
            return FUNC_0("b%u", VAR_0->regnum);
        case 139:
            return "aL";
        case 138:
            switch (VAR_0->regnum)
            {
                case 0: return "vPos";
                case 1: return "vFace";
                default: return "unexpected misctype";
            }
        case 140:
            return FUNC_0("l%u", VAR_0->regnum);
        case 136:
            return FUNC_0("p%u", VAR_0->regnum);
        default:
            return FUNC_0("unknown regname %#x", VAR_0->type);
    }
}
