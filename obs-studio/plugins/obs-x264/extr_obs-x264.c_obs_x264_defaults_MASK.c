
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_data_t ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,char*) ;

__attribute__((used)) static void FUNC_3(obs_data_t *VAR_0)
{
 FUNC_1(VAR_0, "bitrate", 2500);
 FUNC_0(VAR_0, "use_bufsize", 0);
 FUNC_1(VAR_0, "buffer_size", 2500);
 FUNC_1(VAR_0, "keyint_sec", 0);
 FUNC_1(VAR_0, "crf", 23);



 FUNC_2(VAR_0, "rate_control", "CBR");

 FUNC_2(VAR_0, "preset", "veryfast");
 FUNC_2(VAR_0, "profile", "");
 FUNC_2(VAR_0, "tune", "");
 FUNC_2(VAR_0, "x264opts", "");
}
