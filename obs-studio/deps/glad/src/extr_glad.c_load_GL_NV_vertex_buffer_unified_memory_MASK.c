
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVERTEXFORMATNVPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBIFORMATNVPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBFORMATNVPROC ;
typedef scalar_t__ PFNGLTEXCOORDFORMATNVPROC ;
typedef scalar_t__ PFNGLSECONDARYCOLORFORMATNVPROC ;
typedef scalar_t__ PFNGLNORMALFORMATNVPROC ;
typedef scalar_t__ PFNGLINDEXFORMATNVPROC ;
typedef scalar_t__ PFNGLGETINTEGERUI64I_VNVPROC ;
typedef scalar_t__ PFNGLFOGCOORDFORMATNVPROC ;
typedef scalar_t__ PFNGLEDGEFLAGFORMATNVPROC ;
typedef scalar_t__ PFNGLCOLORFORMATNVPROC ;
typedef scalar_t__ PFNGLBUFFERADDRESSRANGENVPROC ;
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

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_13) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLBUFFERADDRESSRANGENVPROC)VAR_13("glBufferAddressRangeNV");
 VAR_12 = (PFNGLVERTEXFORMATNVPROC)VAR_13("glVertexFormatNV");
 VAR_7 = (PFNGLNORMALFORMATNVPROC)VAR_13("glNormalFormatNV");
 VAR_2 = (PFNGLCOLORFORMATNVPROC)VAR_13("glColorFormatNV");
 VAR_6 = (PFNGLINDEXFORMATNVPROC)VAR_13("glIndexFormatNV");
 VAR_9 = (PFNGLTEXCOORDFORMATNVPROC)VAR_13("glTexCoordFormatNV");
 VAR_3 = (PFNGLEDGEFLAGFORMATNVPROC)VAR_13("glEdgeFlagFormatNV");
 VAR_8 = (PFNGLSECONDARYCOLORFORMATNVPROC)VAR_13("glSecondaryColorFormatNV");
 VAR_4 = (PFNGLFOGCOORDFORMATNVPROC)VAR_13("glFogCoordFormatNV");
 VAR_10 = (PFNGLVERTEXATTRIBFORMATNVPROC)VAR_13("glVertexAttribFormatNV");
 VAR_11 = (PFNGLVERTEXATTRIBIFORMATNVPROC)VAR_13("glVertexAttribIFormatNV");
 VAR_5 = (PFNGLGETINTEGERUI64I_VNVPROC)VAR_13("glGetIntegerui64i_vNV");
}
