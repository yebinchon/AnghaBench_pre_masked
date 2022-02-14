
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct hugepage_subpool {int dummy; } ;
struct hstate {int dummy; } ;


 struct hstate* FUNC_0 (struct inode*) ;
 long FUNC_1 (struct hugepage_subpool*,int) ;
 int FUNC_2 (struct hstate*,int) ;
 struct hugepage_subpool* FUNC_3 (struct inode*) ;

void FUNC_4(struct inode *VAR_0)
{
 struct hugepage_subpool *VAR_1 = FUNC_3(VAR_0);
 long VAR_2;

 VAR_2 = FUNC_1(VAR_1, 1);
 if (VAR_2) {
  struct hstate *VAR_3 = FUNC_0(VAR_0);

  FUNC_2(VAR_3, 1);
 }
}
