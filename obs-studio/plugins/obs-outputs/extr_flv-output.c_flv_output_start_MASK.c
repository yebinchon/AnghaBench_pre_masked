
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int array; } ;
struct flv_output {int got_first_video; int sent_headers; TYPE_1__ path; int output; int active; int file; int stopping; } ;
typedef int obs_data_t ;


 int FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (char*,int ) ;
 char* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*,int ) ;

__attribute__((used)) static bool FUNC_11(void *VAR_0)
{
 struct flv_output *VAR_1 = VAR_0;
 obs_data_t *VAR_2;
 const char *VAR_3;

 if (!FUNC_5(VAR_1->output, 0))
  return 0;
 if (!FUNC_7(VAR_1->output, 0))
  return 0;

 VAR_1->got_first_video = 0;
 VAR_1->sent_headers = 0;
 FUNC_8(&VAR_1->stopping, 0);


 VAR_2 = FUNC_6(VAR_1->output);
 VAR_3 = FUNC_2(VAR_2, "path");
 FUNC_0(&VAR_1->path, VAR_3);
 FUNC_3(VAR_2);

 VAR_1->file = FUNC_9(VAR_1->path.array, "wb");
 if (!VAR_1->file) {
  FUNC_10("Unable to open FLV file '%s'", VAR_1->path.array);
  return 0;
 }


 FUNC_8(&VAR_1->active, 1);
 FUNC_4(VAR_1->output, 0);

 FUNC_1("Writing FLV file '%s'...", VAR_1->path.array);
 return 1;
}
