
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTEXTUREIMAGE3DMULTISAMPLENVPROC ;
typedef scalar_t__ PFNGLTEXTUREIMAGE3DMULTISAMPLECOVERAGENVPROC ;
typedef scalar_t__ PFNGLTEXTUREIMAGE2DMULTISAMPLENVPROC ;
typedef scalar_t__ PFNGLTEXTUREIMAGE2DMULTISAMPLECOVERAGENVPROC ;
typedef scalar_t__ PFNGLTEXIMAGE3DMULTISAMPLECOVERAGENVPROC ;
typedef scalar_t__ PFNGLTEXIMAGE2DMULTISAMPLECOVERAGENVPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_7) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLTEXIMAGE2DMULTISAMPLECOVERAGENVPROC)VAR_7("glTexImage2DMultisampleCoverageNV");
 VAR_2 = (PFNGLTEXIMAGE3DMULTISAMPLECOVERAGENVPROC)VAR_7("glTexImage3DMultisampleCoverageNV");
 VAR_4 = (PFNGLTEXTUREIMAGE2DMULTISAMPLENVPROC)VAR_7("glTextureImage2DMultisampleNV");
 VAR_6 = (PFNGLTEXTUREIMAGE3DMULTISAMPLENVPROC)VAR_7("glTextureImage3DMultisampleNV");
 VAR_3 = (PFNGLTEXTUREIMAGE2DMULTISAMPLECOVERAGENVPROC)VAR_7("glTextureImage2DMultisampleCoverageNV");
 VAR_5 = (PFNGLTEXTUREIMAGE3DMULTISAMPLECOVERAGENVPROC)VAR_7("glTextureImage3DMultisampleCoverageNV");
}
