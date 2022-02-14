
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum sof_ipc_process_type { ____Placeholder_sof_ipc_process_type } sof_ipc_process_type ;
typedef enum sof_comp_type { ____Placeholder_sof_comp_type } sof_comp_type ;
struct TYPE_3__ {int type; int comp_type; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static enum sof_comp_type FUNC_1(enum sof_ipc_process_type VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  if (VAR_1[VAR_3].type == VAR_2)
   return VAR_1[VAR_3].comp_type;
 }

 return VAR_0;
}
