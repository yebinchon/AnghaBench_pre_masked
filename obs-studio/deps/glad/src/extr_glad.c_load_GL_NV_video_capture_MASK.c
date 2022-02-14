
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC ;
typedef scalar_t__ PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC ;
typedef scalar_t__ PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC ;
typedef scalar_t__ PFNGLVIDEOCAPTURENVPROC ;
typedef scalar_t__ PFNGLGETVIDEOCAPTURESTREAMIVNVPROC ;
typedef scalar_t__ PFNGLGETVIDEOCAPTURESTREAMFVNVPROC ;
typedef scalar_t__ PFNGLGETVIDEOCAPTURESTREAMDVNVPROC ;
typedef scalar_t__ PFNGLGETVIDEOCAPTUREIVNVPROC ;
typedef scalar_t__ PFNGLENDVIDEOCAPTURENVPROC ;
typedef scalar_t__ PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC ;
typedef scalar_t__ PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC ;
typedef scalar_t__ PFNGLBEGINVIDEOCAPTURENVPROC ;
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
 VAR_1 = (PFNGLBEGINVIDEOCAPTURENVPROC)VAR_13("glBeginVideoCaptureNV");
 VAR_2 = (PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC)VAR_13("glBindVideoCaptureStreamBufferNV");
 VAR_3 = (PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC)VAR_13("glBindVideoCaptureStreamTextureNV");
 VAR_4 = (PFNGLENDVIDEOCAPTURENVPROC)VAR_13("glEndVideoCaptureNV");
 VAR_8 = (PFNGLGETVIDEOCAPTUREIVNVPROC)VAR_13("glGetVideoCaptureivNV");
 VAR_7 = (PFNGLGETVIDEOCAPTURESTREAMIVNVPROC)VAR_13("glGetVideoCaptureStreamivNV");
 VAR_6 = (PFNGLGETVIDEOCAPTURESTREAMFVNVPROC)VAR_13("glGetVideoCaptureStreamfvNV");
 VAR_5 = (PFNGLGETVIDEOCAPTURESTREAMDVNVPROC)VAR_13("glGetVideoCaptureStreamdvNV");
 VAR_9 = (PFNGLVIDEOCAPTURENVPROC)VAR_13("glVideoCaptureNV");
 VAR_12 = (PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC)VAR_13("glVideoCaptureStreamParameterivNV");
 VAR_11 = (PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC)VAR_13("glVideoCaptureStreamParameterfvNV");
 VAR_10 = (PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC)VAR_13("glVideoCaptureStreamParameterdvNV");
}
