
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct xsk_queue {scalar_t__ size; int invalid_descs; } ;
struct xdp_umem {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct xdp_umem*,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline bool FUNC_3(struct xsk_queue *VAR_0, u64 VAR_1,
      u64 VAR_2,
      struct xdp_umem *VAR_3)
{
 u64 VAR_4 = FUNC_1(VAR_1);

 VAR_1 = FUNC_0(VAR_1);
 if (VAR_4 >= VAR_0->size || VAR_1 >= VAR_0->size ||
     FUNC_2(VAR_3, VAR_1, VAR_2)) {
  VAR_0->invalid_descs++;
  return 0;
 }

 return 1;
}
