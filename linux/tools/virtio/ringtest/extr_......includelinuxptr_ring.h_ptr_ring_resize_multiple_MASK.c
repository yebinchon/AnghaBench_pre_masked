
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_ring {int consumer_lock; int producer_lock; } ;
typedef int gfp_t ;


 int VAR_0 ;
 void** FUNC_0 (int,int ) ;
 void** FUNC_1 (struct ptr_ring*,void**,int,int ,void (*) (void*)) ;
 int FUNC_2 (void***) ;
 void*** FUNC_3 (unsigned int,int,int ) ;
 int FUNC_4 (void**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_9(struct ptr_ring **VAR_1,
        unsigned int VAR_2,
        int VAR_3,
        gfp_t VAR_4, void (*VAR_5)(void *))
{
 unsigned long VAR_6;
 void ***VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_2, sizeof(*VAR_7), VAR_4);
 if (!VAR_7)
  goto noqueues;

 for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
  VAR_7[VAR_8] = FUNC_0(VAR_3, VAR_4);
  if (!VAR_7[VAR_8])
   goto nomem;
 }

 for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
  FUNC_6(&(VAR_1[VAR_8])->consumer_lock, VAR_6);
  FUNC_5(&(VAR_1[VAR_8])->producer_lock);
  VAR_7[VAR_8] = FUNC_1(VAR_1[VAR_8], VAR_7[VAR_8],
        VAR_3, VAR_4, VAR_5);
  FUNC_7(&(VAR_1[VAR_8])->producer_lock);
  FUNC_8(&(VAR_1[VAR_8])->consumer_lock, VAR_6);
 }

 for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8)
  FUNC_4(VAR_7[VAR_8]);

 FUNC_2(VAR_7);

 return 0;

nomem:
 while (--VAR_8 >= 0)
  FUNC_4(VAR_7[VAR_8]);

 FUNC_2(VAR_7);

noqueues:
 return -VAR_0;
}
