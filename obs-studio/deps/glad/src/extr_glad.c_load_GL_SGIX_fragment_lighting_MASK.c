
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLLIGHTENVISGIXPROC ;
typedef scalar_t__ PFNGLGETFRAGMENTMATERIALIVSGIXPROC ;
typedef scalar_t__ PFNGLGETFRAGMENTMATERIALFVSGIXPROC ;
typedef scalar_t__ PFNGLGETFRAGMENTLIGHTIVSGIXPROC ;
typedef scalar_t__ PFNGLGETFRAGMENTLIGHTFVSGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTMATERIALIVSGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTMATERIALISGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTMATERIALFVSGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTMATERIALFSGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTLIGHTMODELIVSGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTLIGHTMODELISGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTLIGHTMODELFVSGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTLIGHTMODELFSGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTLIGHTIVSGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTLIGHTISGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTLIGHTFVSGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTLIGHTFSGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTCOLORMATERIALSGIXPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_19) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLFRAGMENTCOLORMATERIALSGIXPROC)VAR_19("glFragmentColorMaterialSGIX");
 VAR_6 = (PFNGLFRAGMENTLIGHTFSGIXPROC)VAR_19("glFragmentLightfSGIX");
 VAR_7 = (PFNGLFRAGMENTLIGHTFVSGIXPROC)VAR_19("glFragmentLightfvSGIX");
 VAR_8 = (PFNGLFRAGMENTLIGHTISGIXPROC)VAR_19("glFragmentLightiSGIX");
 VAR_9 = (PFNGLFRAGMENTLIGHTIVSGIXPROC)VAR_19("glFragmentLightivSGIX");
 VAR_2 = (PFNGLFRAGMENTLIGHTMODELFSGIXPROC)VAR_19("glFragmentLightModelfSGIX");
 VAR_3 = (PFNGLFRAGMENTLIGHTMODELFVSGIXPROC)VAR_19("glFragmentLightModelfvSGIX");
 VAR_4 = (PFNGLFRAGMENTLIGHTMODELISGIXPROC)VAR_19("glFragmentLightModeliSGIX");
 VAR_5 = (PFNGLFRAGMENTLIGHTMODELIVSGIXPROC)VAR_19("glFragmentLightModelivSGIX");
 VAR_10 = (PFNGLFRAGMENTMATERIALFSGIXPROC)VAR_19("glFragmentMaterialfSGIX");
 VAR_11 = (PFNGLFRAGMENTMATERIALFVSGIXPROC)VAR_19("glFragmentMaterialfvSGIX");
 VAR_12 = (PFNGLFRAGMENTMATERIALISGIXPROC)VAR_19("glFragmentMaterialiSGIX");
 VAR_13 = (PFNGLFRAGMENTMATERIALIVSGIXPROC)VAR_19("glFragmentMaterialivSGIX");
 VAR_14 = (PFNGLGETFRAGMENTLIGHTFVSGIXPROC)VAR_19("glGetFragmentLightfvSGIX");
 VAR_15 = (PFNGLGETFRAGMENTLIGHTIVSGIXPROC)VAR_19("glGetFragmentLightivSGIX");
 VAR_16 = (PFNGLGETFRAGMENTMATERIALFVSGIXPROC)VAR_19("glGetFragmentMaterialfvSGIX");
 VAR_17 = (PFNGLGETFRAGMENTMATERIALIVSGIXPROC)VAR_19("glGetFragmentMaterialivSGIX");
 VAR_18 = (PFNGLLIGHTENVISGIXPROC)VAR_19("glLightEnviSGIX");
}
