
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct gcov_fn_info {int head; int function_name; void* cfg_checksum; int use_extra_checksum; void* checksum; void* ident; } ;
struct TYPE_2__ {int functions; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char const*,int ) ;
 struct gcov_fn_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(u32 VAR_2, const char *VAR_3,
  u32 VAR_4, u8 VAR_5, u32 VAR_6)
{
 struct gcov_fn_info *VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_0);

 if (!VAR_7)
  return;

 FUNC_0(&VAR_7->head);
 VAR_7->ident = VAR_2;
 VAR_7->checksum = VAR_4;
 VAR_7->use_extra_checksum = VAR_5;
 VAR_7->cfg_checksum = VAR_6;
 if (VAR_3)
  VAR_7->function_name = FUNC_1(VAR_3, VAR_0);

 FUNC_3(&VAR_7->head, &VAR_1->functions);
}
