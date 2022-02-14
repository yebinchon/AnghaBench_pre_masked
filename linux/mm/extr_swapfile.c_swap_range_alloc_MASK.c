
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {unsigned long lowest_bit; unsigned int highest_bit; scalar_t__ inuse_pages; scalar_t__ pages; unsigned int max; } ;


 int FUNC_0 (struct swap_info_struct*) ;

__attribute__((used)) static void FUNC_1(struct swap_info_struct *VAR_0, unsigned long VAR_1,
        unsigned int VAR_2)
{
 unsigned int VAR_3 = VAR_1 + VAR_2 - 1;

 if (VAR_1 == VAR_0->lowest_bit)
  VAR_0->lowest_bit += VAR_2;
 if (VAR_3 == VAR_0->highest_bit)
  VAR_0->highest_bit -= VAR_2;
 VAR_0->inuse_pages += VAR_2;
 if (VAR_0->inuse_pages == VAR_0->pages) {
  VAR_0->lowest_bit = VAR_0->max;
  VAR_0->highest_bit = 0;
  FUNC_0(VAR_0);
 }
}
