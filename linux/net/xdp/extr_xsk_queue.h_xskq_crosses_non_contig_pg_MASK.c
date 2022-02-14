
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct xdp_umem {TYPE_1__* pages; } ;
struct TYPE_2__ {scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(struct xdp_umem *VAR_3, u64 VAR_4,
           u64 VAR_5)
{
 bool VAR_6 = (VAR_4 & (VAR_1 - 1)) + VAR_5 > VAR_1;
 bool VAR_7 =
  (unsigned long)VAR_3->pages[(VAR_4 >> VAR_0)].addr &
   VAR_2;

 return VAR_6 && !VAR_7;
}
