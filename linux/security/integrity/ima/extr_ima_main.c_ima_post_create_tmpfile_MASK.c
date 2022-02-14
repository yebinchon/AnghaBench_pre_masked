
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct integrity_iint_cache {int ima_file_status; int atomic_flags; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*,int ,int ) ;
 struct integrity_iint_cache* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct inode *VAR_4)
{
 struct integrity_iint_cache *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_3, VAR_0);
 if (!VAR_6)
  return;


 VAR_5 = FUNC_1(VAR_4);
 if (!VAR_5)
  return;


 FUNC_2(VAR_1, &VAR_5->atomic_flags);
 VAR_5->ima_file_status = VAR_2;
}
