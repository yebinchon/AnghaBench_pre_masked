
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLGETCOMPRESSEDTEXIMAGEARBPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXIMAGE3DARBPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXIMAGE2DARBPROC ;
typedef scalar_t__ PFNGLCOMPRESSEDTEXIMAGE1DARBPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_8) {
 if(!VAR_0) return;
 VAR_3 = (PFNGLCOMPRESSEDTEXIMAGE3DARBPROC)VAR_8("glCompressedTexImage3DARB");
 VAR_2 = (PFNGLCOMPRESSEDTEXIMAGE2DARBPROC)VAR_8("glCompressedTexImage2DARB");
 VAR_1 = (PFNGLCOMPRESSEDTEXIMAGE1DARBPROC)VAR_8("glCompressedTexImage1DARB");
 VAR_6 = (PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC)VAR_8("glCompressedTexSubImage3DARB");
 VAR_5 = (PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC)VAR_8("glCompressedTexSubImage2DARB");
 VAR_4 = (PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC)VAR_8("glCompressedTexSubImage1DARB");
 VAR_7 = (PFNGLGETCOMPRESSEDTEXIMAGEARBPROC)VAR_8("glGetCompressedTexImageARB");
}
