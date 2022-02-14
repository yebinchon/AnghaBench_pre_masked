
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct super_block {TYPE_1__* s_type; int s_id; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int ,int ,int) ;
 int FUNC_1 (int *,char const*,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_2, const char *VAR_3, u32 *VAR_4)
{
 int VAR_5 = FUNC_1(&VAR_1, VAR_3,
          VAR_4, VAR_0);
 if (VAR_5)
  FUNC_0("SELinux: security_context_str_to_sid"
         "(%s) failed for (dev %s, type %s) errno=%d\n",
         VAR_3, VAR_2->s_id, VAR_2->s_type->name, VAR_5);
 return VAR_5;
}
