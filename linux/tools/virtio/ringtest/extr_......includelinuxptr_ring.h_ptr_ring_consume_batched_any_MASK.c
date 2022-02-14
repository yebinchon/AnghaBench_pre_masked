
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_ring {int consumer_lock; } ;


 int FUNC_0 (struct ptr_ring*,void**,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_3(struct ptr_ring *VAR_0,
            void **VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_1(&VAR_0->consumer_lock, VAR_3);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->consumer_lock, VAR_3);

 return VAR_4;
}
