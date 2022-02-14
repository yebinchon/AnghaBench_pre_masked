
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct swap_info_struct {int flags; unsigned long max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ) ;
 unsigned long FUNC_1 (TYPE_1__) ;
 struct swap_info_struct* FUNC_2 (TYPE_1__) ;

__attribute__((used)) static struct swap_info_struct *FUNC_3(swp_entry_t VAR_4)
{
 struct swap_info_struct *VAR_5;
 unsigned long VAR_6;

 if (!VAR_4.val)
  goto out;
 VAR_5 = FUNC_2(VAR_4);
 if (!VAR_5)
  goto bad_nofile;
 if (!(VAR_5->flags & VAR_2))
  goto bad_device;
 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6 >= VAR_5->max)
  goto bad_offset;
 return VAR_5;

bad_offset:
 FUNC_0("swap_info_get: %s%08lx\n", VAR_1, VAR_4.val);
 goto out;
bad_device:
 FUNC_0("swap_info_get: %s%08lx\n", VAR_3, VAR_4.val);
 goto out;
bad_nofile:
 FUNC_0("swap_info_get: %s%08lx\n", VAR_0, VAR_4.val);
out:
 return ((void*)0);
}
