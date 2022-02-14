
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_ring_cons {size_t cached_cons; } ;
typedef size_t __u32 ;


 int FUNC_0 () ;
 size_t FUNC_1 (struct xsk_ring_cons*,size_t) ;

__attribute__((used)) static inline size_t FUNC_2(struct xsk_ring_cons *VAR_0,
      size_t VAR_1, __u32 *VAR_2)
{
 size_t VAR_3 = FUNC_1(VAR_0, VAR_1);

 if (VAR_3 > 0) {



  FUNC_0();

  *VAR_2 = VAR_0->cached_cons;
  VAR_0->cached_cons += VAR_3;
 }

 return VAR_3;
}
