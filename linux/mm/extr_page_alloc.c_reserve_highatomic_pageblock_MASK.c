
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {unsigned long nr_reserved_highatomic; int lock; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct zone*,struct page*,int ,int *) ;
 int VAR_1 ;
 int FUNC_5 (struct page*,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct zone*) ;

__attribute__((used)) static void FUNC_9(struct page *VAR_2, struct zone *VAR_3,
    unsigned int VAR_4)
{
 int VAR_5;
 unsigned long VAR_6, VAR_7;





 VAR_6 = (FUNC_8(VAR_3) / 100) + VAR_1;
 if (VAR_3->nr_reserved_highatomic >= VAR_6)
  return;

 FUNC_6(&VAR_3->lock, VAR_7);


 if (VAR_3->nr_reserved_highatomic >= VAR_6)
  goto out_unlock;


 VAR_5 = FUNC_0(VAR_2);
 if (!FUNC_2(VAR_5) && !FUNC_3(VAR_5)
     && !FUNC_1(VAR_5)) {
  VAR_3->nr_reserved_highatomic += VAR_1;
  FUNC_5(VAR_2, VAR_0);
  FUNC_4(VAR_3, VAR_2, VAR_0, ((void*)0));
 }

out_unlock:
 FUNC_7(&VAR_3->lock, VAR_7);
}
