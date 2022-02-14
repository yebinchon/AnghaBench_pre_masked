
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resv_map {int dummy; } ;
struct inode {long i_blocks; int i_lock; } ;
struct hugepage_subpool {int dummy; } ;
struct hstate {int dummy; } ;


 long FUNC_0 (struct hstate*) ;
 struct hstate* FUNC_1 (struct inode*) ;
 long FUNC_2 (struct hugepage_subpool*,long) ;
 int FUNC_3 (struct hstate*,long) ;
 struct resv_map* FUNC_4 (struct inode*) ;
 long FUNC_5 (struct resv_map*,long,long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct hugepage_subpool* FUNC_8 (struct inode*) ;

long FUNC_9(struct inode *VAR_0, long VAR_1, long VAR_2,
        long VAR_3)
{
 struct hstate *VAR_4 = FUNC_1(VAR_0);
 struct resv_map *VAR_5 = FUNC_4(VAR_0);
 long VAR_6 = 0;
 struct hugepage_subpool *VAR_7 = FUNC_8(VAR_0);
 long VAR_8;





 if (VAR_5) {
  VAR_6 = FUNC_5(VAR_5, VAR_1, VAR_2);





  if (VAR_6 < 0)
   return VAR_6;
 }

 FUNC_6(&VAR_0->i_lock);
 VAR_0->i_blocks -= (FUNC_0(VAR_4) * VAR_3);
 FUNC_7(&VAR_0->i_lock);





 VAR_8 = FUNC_2(VAR_7, (VAR_6 - VAR_3));
 FUNC_3(VAR_4, -VAR_8);

 return 0;
}
