
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct swap_info_struct {int * swap_map; } ;


 int VAR_0 ;
 struct swap_info_struct* FUNC_0 (TYPE_1__) ;
 int FUNC_1 (char*,int ,int ) ;
 size_t FUNC_2 (TYPE_1__) ;

__attribute__((used)) static struct swap_info_struct *FUNC_3(swp_entry_t VAR_1)
{
 struct swap_info_struct *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2)
  goto out;
 if (!VAR_2->swap_map[FUNC_2(VAR_1)])
  goto bad_free;
 return VAR_2;

bad_free:
 FUNC_1("swap_info_get: %s%08lx\n", VAR_0, VAR_1.val);
 goto out;
out:
 return ((void*)0);
}
