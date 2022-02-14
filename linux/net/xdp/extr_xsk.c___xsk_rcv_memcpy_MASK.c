
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct xdp_umem {TYPE_1__* pages; } ;
struct TYPE_2__ {void* addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,void*,int) ;
 void* FUNC_1 (struct xdp_umem*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct xdp_umem*,int,int) ;

__attribute__((used)) static void FUNC_4(struct xdp_umem *VAR_2, u64 VAR_3, void *VAR_4,
        u32 VAR_5, u32 VAR_6)
{
 void *VAR_7 = FUNC_1(VAR_2, VAR_3);

 VAR_3 = FUNC_2(VAR_3);
 if (FUNC_3(VAR_2, VAR_3, VAR_5 + VAR_6)) {
  void *VAR_8 = VAR_2->pages[(VAR_3 >> VAR_0) + 1].addr;
  u64 VAR_9 = VAR_3 & ~(VAR_1 - 1);
  u64 VAR_10 = VAR_1 - (VAR_3 - VAR_9);

  FUNC_0(VAR_7, VAR_4, VAR_10 + VAR_6);
  FUNC_0(VAR_8, VAR_4 + VAR_10, VAR_5 - VAR_10);

  return;
 }

 FUNC_0(VAR_7, VAR_4, VAR_5 + VAR_6);
}
