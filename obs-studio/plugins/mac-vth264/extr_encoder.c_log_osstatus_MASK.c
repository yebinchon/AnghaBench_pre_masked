
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_h264_encoder {int dummy; } ;
typedef int OSStatus ;
typedef int CFStringRef ;
typedef int CFErrorRef ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*,char const*,char*) ;
 int FUNC_4 (int,char*,char const*,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(int VAR_3, struct vt_h264_encoder *VAR_4,
    const char *VAR_5, OSStatus VAR_6)
{
 char *VAR_7 = ((void*)0);
 CFErrorRef VAR_8 = FUNC_1(VAR_0,
           VAR_1, VAR_6, ((void*)0));
 CFStringRef VAR_9 = FUNC_0(VAR_8);

 VAR_7 = FUNC_6(VAR_9, VAR_2);
 if (VAR_7) {
  if (VAR_4)
   FUNC_3(VAR_3, "Error in %s: %s", VAR_5, VAR_7);
  else
   FUNC_4(VAR_3, "Error in %s: %s", VAR_5, VAR_7);
 }

 FUNC_5(VAR_7);
 FUNC_2(VAR_9);
 FUNC_2(VAR_8);
}
