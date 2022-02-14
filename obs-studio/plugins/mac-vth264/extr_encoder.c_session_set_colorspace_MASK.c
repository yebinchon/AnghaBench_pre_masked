
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum video_colorspace { ____Placeholder_video_colorspace } video_colorspace ;
typedef int VTCompressionSessionRef ;
typedef int OSStatus ;
typedef int * CFStringRef ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static OSStatus FUNC_3(VTCompressionSessionRef VAR_6,
           enum video_colorspace VAR_7)
{
 CFStringRef VAR_8 = FUNC_1(VAR_7);
 OSStatus VAR_9;

 if (VAR_8 != ((void*)0)) {
  FUNC_0(FUNC_2(
   VAR_6, VAR_2,
   VAR_0));
  FUNC_0(FUNC_2(
   VAR_6, VAR_3,
   VAR_1));
  FUNC_0(FUNC_2(
   VAR_6, VAR_4,
   VAR_8));
 }

 return VAR_5;
}
