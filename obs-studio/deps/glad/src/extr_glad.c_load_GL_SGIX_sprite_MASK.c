
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLSPRITEPARAMETERIVSGIXPROC ;
typedef scalar_t__ PFNGLSPRITEPARAMETERISGIXPROC ;
typedef scalar_t__ PFNGLSPRITEPARAMETERFVSGIXPROC ;
typedef scalar_t__ PFNGLSPRITEPARAMETERFSGIXPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLSPRITEPARAMETERFSGIXPROC)VAR_5("glSpriteParameterfSGIX");
 VAR_2 = (PFNGLSPRITEPARAMETERFVSGIXPROC)VAR_5("glSpriteParameterfvSGIX");
 VAR_3 = (PFNGLSPRITEPARAMETERISGIXPROC)VAR_5("glSpriteParameteriSGIX");
 VAR_4 = (PFNGLSPRITEPARAMETERIVSGIXPROC)VAR_5("glSpriteParameterivSGIX");
}
