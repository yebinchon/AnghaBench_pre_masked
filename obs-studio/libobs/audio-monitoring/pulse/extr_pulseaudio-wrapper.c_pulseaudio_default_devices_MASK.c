
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pulseaudio_default_output {int default_sink_name; } ;
struct TYPE_3__ {int default_sink_name; } ;
typedef TYPE_1__ pa_server_info ;
typedef int pa_context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(pa_context *VAR_0, const pa_server_info *VAR_1,
           void *VAR_2)
{
 FUNC_0(VAR_0);
 struct pulseaudio_default_output *VAR_3 =
  (struct pulseaudio_default_output *)VAR_2;
 VAR_3->default_sink_name = FUNC_1(VAR_1->default_sink_name);
 FUNC_2(0);
}
