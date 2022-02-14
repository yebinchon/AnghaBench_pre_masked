
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VTEncodeInfoFlags ;
typedef int OSStatus ;
typedef void* CVPixelBufferRef ;
typedef void* CMSimpleQueueRef ;
typedef int * CMSampleBufferRef ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*,int *) ;
 int FUNC_3 (int ) ;

void FUNC_4(void *VAR_0, void *VAR_1, OSStatus VAR_2,
        VTEncodeInfoFlags VAR_3,
        CMSampleBufferRef VAR_4)
{
 FUNC_3(VAR_2);
 FUNC_3(VAR_3);

 CMSimpleQueueRef VAR_5 = VAR_0;
 CVPixelBufferRef VAR_6 = VAR_1;
 if (VAR_4 != ((void*)0)) {
  FUNC_1(VAR_4);
  FUNC_2(VAR_5, VAR_4);
 }
 FUNC_0(VAR_6);
}
