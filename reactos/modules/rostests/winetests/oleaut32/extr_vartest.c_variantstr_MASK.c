
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VARIANT ;
typedef int UINT ;
struct TYPE_2__ {int Hi; int Lo; } ;


 size_t FUNC_0 (char const**) ;
 TYPE_1__ FUNC_1 (int ) ;
 int FUNC_2 (int const*) ;
 double FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int const*) ;
 double FUNC_9 (int const*) ;
 double FUNC_10 (int const*) ;
 int FUNC_11 (int const*) ;
 int FUNC_12 (int const*) ;
 int FUNC_13 (int const*) ;
 int FUNC_14 (int const*) ;
 int FUNC_15 (int const*) ;
 int FUNC_16 (int const*) ;
 int FUNC_17 (char const*,char*,double,...) ;
 char const* FUNC_18 (int) ;
 char const** VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static const char *FUNC_19( const VARIANT *VAR_2 )
{
    VAR_1 %= FUNC_0(VAR_0);
    switch(FUNC_16(VAR_2))
    {
    case 139:
        FUNC_17( VAR_0[VAR_1], "VT_I1(%d)", FUNC_4(VAR_2) ); break;
    case 138:
        FUNC_17( VAR_0[VAR_1], "VT_I2(%d)", FUNC_5(VAR_2) ); break;
    case 137:
        FUNC_17( VAR_0[VAR_1], "VT_I4(%d)", FUNC_6(VAR_2) ); break;
    case 135:
        FUNC_17( VAR_0[VAR_1], "VT_INT(%d)", FUNC_8(VAR_2) ); break;
    case 136:
        FUNC_17( VAR_0[VAR_1], "VT_I8(%x%08x)", (UINT)(FUNC_7(VAR_2) >> 32), (UINT)FUNC_7(VAR_2) ); break;
    case 129:
        FUNC_17( VAR_0[VAR_1], "VT_UI8(%x%08x)", (UINT)(FUNC_14(VAR_2) >> 32), (UINT)FUNC_14(VAR_2) ); break;
    case 134:
        FUNC_17( VAR_0[VAR_1], "VT_R4(%g)", FUNC_9(VAR_2) ); break;
    case 133:
        FUNC_17( VAR_0[VAR_1], "VT_R8(%g)", FUNC_10(VAR_2) ); break;
    case 132:
        FUNC_17( VAR_0[VAR_1], "VT_UI1(%u)", FUNC_11(VAR_2) ); break;
    case 131:
        FUNC_17( VAR_0[VAR_1], "VT_UI2(%u)", FUNC_12(VAR_2) ); break;
    case 130:
        FUNC_17( VAR_0[VAR_1], "VT_UI4(%u)", FUNC_13(VAR_2) ); break;
    case 128:
        FUNC_17( VAR_0[VAR_1], "VT_UINT(%d)", FUNC_15(VAR_2) ); break;
    case 141:
        FUNC_17( VAR_0[VAR_1], "VT_CY(%x%08x)", FUNC_1(FUNC_2(VAR_2)).Hi, FUNC_1(FUNC_2(VAR_2)).Lo ); break;
    case 140:
        FUNC_17( VAR_0[VAR_1], "VT_DATE(%g)", FUNC_3(VAR_2) ); break;
    default:
        return FUNC_18(FUNC_16(VAR_2));
    }
    return VAR_0[VAR_1++];
}
