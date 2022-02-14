
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_ring {int consumer_lock; int producer_lock; } ;
typedef int gfp_t ;


 int VAR_0 ;
 void** FUNC_0 (int,int ) ;
 void** FUNC_1 (struct ptr_ring*,void**,int,int ,void (*) (void*)) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_7(struct ptr_ring *VAR_1, int VAR_2, gfp_t VAR_3,
      void (*VAR_4)(void *))
{
 unsigned long VAR_5;
 void **VAR_6 = FUNC_0(VAR_2, VAR_3);
 void **VAR_7;

 if (!VAR_6)
  return -VAR_0;

 FUNC_4(&(VAR_1)->consumer_lock, VAR_5);
 FUNC_3(&(VAR_1)->producer_lock);

 VAR_7 = FUNC_1(VAR_1, VAR_6, VAR_2, VAR_3, VAR_4);

 FUNC_5(&(VAR_1)->producer_lock);
 FUNC_6(&(VAR_1)->consumer_lock, VAR_5);

 FUNC_2(VAR_7);

 return 0;
}
