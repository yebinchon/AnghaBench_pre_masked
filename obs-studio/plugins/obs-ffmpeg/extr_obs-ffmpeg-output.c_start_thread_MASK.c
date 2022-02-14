
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_output {int connecting; int output; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ffmpeg_output*) ;

__attribute__((used)) static void *FUNC_2(void *VAR_1)
{
 struct ffmpeg_output *VAR_2 = VAR_1;

 if (!FUNC_1(VAR_2))
  FUNC_0(VAR_2->output,
           VAR_0);

 VAR_2->connecting = 0;
 return ((void*)0);
}
