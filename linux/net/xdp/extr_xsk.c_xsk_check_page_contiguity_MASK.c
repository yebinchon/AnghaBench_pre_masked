
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdp_umem_page {scalar_t__ dma; scalar_t__ addr; } ;
struct xdp_umem {int npgs; struct xdp_umem_page* pages; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct xdp_umem *VAR_3, u32 VAR_4)
{
 struct xdp_umem_page *VAR_5 = VAR_3->pages;
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3->npgs - 1; VAR_6++) {
  VAR_7 = (VAR_4 & VAR_1) ?
   (VAR_5[VAR_6].dma + VAR_0 == VAR_5[VAR_6 + 1].dma) :
   (VAR_5[VAR_6].addr + VAR_0 == VAR_5[VAR_6 + 1].addr);
  VAR_5[VAR_6].addr += VAR_7 << VAR_2;
 }
}
