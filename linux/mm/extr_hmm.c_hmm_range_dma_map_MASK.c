
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hmm_range {unsigned long end; unsigned long start; int* pfns; int* flags; int valid; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 size_t VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,struct page*,int ,int ,int) ;
 scalar_t__ FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct device*,int ,int ,int) ;
 struct page* FUNC_3 (struct hmm_range*,int) ;
 long FUNC_4 (struct hmm_range*,unsigned int) ;

long FUNC_5(struct hmm_range *VAR_7, struct device *VAR_8,
  dma_addr_t *VAR_9, unsigned int VAR_10)
{
 unsigned long VAR_11, VAR_12, VAR_13;
 long VAR_14;

 VAR_14 = FUNC_4(VAR_7, VAR_10);
 if (VAR_14 <= 0)
  return VAR_14 ? VAR_14 : -VAR_2;

 VAR_12 = (VAR_7->end - VAR_7->start) >> VAR_5;
 for (VAR_11 = 0, VAR_13 = 0; VAR_11 < VAR_12; ++VAR_11) {
  enum dma_data_direction VAR_15 = VAR_1;
  struct page *VAR_16;
  VAR_9[VAR_11] = 0;

  VAR_16 = FUNC_3(VAR_7, VAR_7->pfns[VAR_11]);
  if (VAR_16 == ((void*)0))
   continue;


  if (!VAR_7->valid) {
   VAR_14 = -VAR_2;
   goto unmap;
  }


  if (VAR_7->pfns[VAR_11] & VAR_7->flags[VAR_4])
   VAR_15 = VAR_0;

  VAR_9[VAR_11] = FUNC_0(VAR_8, VAR_16, 0, VAR_6, VAR_15);
  if (FUNC_1(VAR_8, VAR_9[VAR_11])) {
   VAR_14 = -VAR_3;
   goto unmap;
  }

  VAR_13++;
 }

 return VAR_13;

unmap:
 for (VAR_12 = VAR_11, VAR_11 = 0; (VAR_11 < VAR_12) && VAR_13; ++VAR_11) {
  enum dma_data_direction VAR_17 = VAR_1;
  struct page *VAR_18;

  VAR_18 = FUNC_3(VAR_7, VAR_7->pfns[VAR_11]);
  if (VAR_18 == ((void*)0))
   continue;

  if (FUNC_1(VAR_8, VAR_9[VAR_11]))
   continue;


  if (VAR_7->pfns[VAR_11] & VAR_7->flags[VAR_4])
   VAR_17 = VAR_0;

  FUNC_2(VAR_8, VAR_9[VAR_11], VAR_6, VAR_17);
  VAR_13--;
 }

 return VAR_14;
}
