
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* default_source_name; char* default_sink_name; int server_version; int server_name; } ;
typedef TYPE_1__ pa_server_info ;
typedef int pa_context ;
struct TYPE_5__ {char* device; scalar_t__ input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,char*,...) ;
 void* FUNC_4 (char*) ;
 char* FUNC_5 (scalar_t__) ;
 TYPE_3__* VAR_2 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(pa_context *VAR_3, const pa_server_info *VAR_4,
         void *VAR_5)
{
 FUNC_1(VAR_3);
 FUNC_0(VAR_5);

 FUNC_3(VAR_1, "Server name: '%s %s'", VAR_4->server_name,
      VAR_4->server_version);

 if (VAR_2->device && FUNC_8("default", VAR_2->device) == 0) {
  if (VAR_2->input) {
   FUNC_2(VAR_2->device);
   VAR_2->device = FUNC_4(VAR_4->default_source_name);

   FUNC_3(VAR_0, "Default input device: '%s'",
        VAR_2->device);
  } else {
   char *VAR_6 =
    FUNC_5(FUNC_9(VAR_4->default_sink_name) + 9);
   FUNC_7(VAR_6, VAR_4->default_sink_name);
   FUNC_7(VAR_6, ".monitor");

   FUNC_2(VAR_2->device);
   VAR_2->device = FUNC_4(VAR_6);

   FUNC_3(VAR_0, "Default output device: '%s'",
        VAR_2->device);
   FUNC_2(VAR_6);
  }
 }

 FUNC_6(0);
}
