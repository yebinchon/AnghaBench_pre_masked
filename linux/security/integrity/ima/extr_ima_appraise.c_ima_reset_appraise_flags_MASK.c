
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct integrity_iint_cache {int atomic_flags; scalar_t__ measured_pcrs; } ;
struct inode {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_3 ;
 struct integrity_iint_cache* FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_4, int VAR_5)
{
 struct integrity_iint_cache *VAR_6;

 if (!(VAR_3 & VAR_0) || !FUNC_0(VAR_4->i_mode))
  return;

 VAR_6 = FUNC_2(VAR_4);
 if (!VAR_6)
  return;
 VAR_6->measured_pcrs = 0;
 FUNC_3(VAR_1, &VAR_6->atomic_flags);
 if (VAR_5)
  FUNC_3(VAR_2, &VAR_6->atomic_flags);
 else
  FUNC_1(VAR_2, &VAR_6->atomic_flags);
}
