
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct skl_module_cfg {scalar_t__ m_type; } ;
struct skl_mod_inst_map {int inst_id; int mod_id; } ;
struct TYPE_2__ {struct skl_mod_inst_map* map; } ;
struct skl_kpb_params {int num_modules; TYPE_1__ u; } ;
struct skl_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct skl_dev*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct skl_dev *VAR_2, u32 *VAR_3,
    int VAR_4, struct skl_module_cfg *VAR_5)
{
 int VAR_6, VAR_7;

 if (VAR_5->m_type == VAR_1) {
  struct skl_kpb_params *VAR_8 =
    (struct skl_kpb_params *)VAR_3;
  struct skl_mod_inst_map *VAR_9 = VAR_8->u.map;

  for (VAR_6 = 0; VAR_6 < VAR_8->num_modules; VAR_6++) {
   VAR_7 = FUNC_0(VAR_2, VAR_9->mod_id,
        VAR_9->inst_id);
   if (VAR_7 < 0)
    return -VAR_0;

   VAR_9->inst_id = VAR_7;
   VAR_9++;
  }
 }

 return 0;
}
