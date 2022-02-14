
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct integrity_iint_cache {int flags; int mutex; scalar_t__ measured_pcrs; int version; int atomic_flags; } ;
struct inode {int i_writecount; } ;
struct file {int f_mode; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct integrity_iint_cache*,struct file*) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct integrity_iint_cache *VAR_4,
      struct inode *VAR_5, struct file *VAR_6)
{
 fmode_t VAR_7 = VAR_6->f_mode;
 bool VAR_8;

 if (!(VAR_7 & VAR_0))
  return;

 FUNC_4(&VAR_4->mutex);
 if (FUNC_1(&VAR_5->i_writecount) == 1) {
  VAR_8 = FUNC_6(VAR_3,
         &VAR_4->atomic_flags);
  if (!FUNC_0(VAR_5) ||
      !FUNC_3(VAR_5, VAR_4->version) ||
      (VAR_4->flags & VAR_2)) {
   VAR_4->flags &= ~(VAR_1 | VAR_2);
   VAR_4->measured_pcrs = 0;
   if (VAR_8)
    FUNC_2(VAR_4, VAR_6);
  }
 }
 FUNC_5(&VAR_4->mutex);
}
