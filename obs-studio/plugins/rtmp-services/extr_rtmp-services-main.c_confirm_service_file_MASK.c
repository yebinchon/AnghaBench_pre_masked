
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ array; } ;
struct file_download_data {TYPE_1__ buffer; int name; } ;
typedef int obs_data_t ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int * FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5(void *VAR_1, struct file_download_data *VAR_2)
{
 if (FUNC_1(VAR_2->name, "services.json") == 0) {
  obs_data_t *VAR_3;
  int VAR_4;

  VAR_3 = FUNC_2((char *)VAR_2->buffer.array);
  if (!VAR_3)
   return 0;

  VAR_4 = (int)FUNC_3(VAR_3, "format_version");
  FUNC_4(VAR_3);

  if (VAR_4 != VAR_0)
   return 0;
 }

 FUNC_0(VAR_1);
 return 1;
}
