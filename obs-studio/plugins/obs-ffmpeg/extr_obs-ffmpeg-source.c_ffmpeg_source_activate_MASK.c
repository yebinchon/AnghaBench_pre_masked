
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_source {scalar_t__ restart_on_activate; } ;


 int FUNC_0 (struct ffmpeg_source*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct ffmpeg_source *VAR_1 = VAR_0;

 if (VAR_1->restart_on_activate)
  FUNC_0(VAR_1);
}
