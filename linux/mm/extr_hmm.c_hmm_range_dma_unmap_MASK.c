
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hmm_range {scalar_t__ end; scalar_t__ start; int* pfns; int* flags; int* values; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,scalar_t__,int ,int) ;
 struct page* FUNC_1 (struct hmm_range*,int) ;
 int FUNC_2 (struct page*) ;

long FUNC_3(struct hmm_range *VAR_7,
    struct device *VAR_8,
    dma_addr_t *VAR_9,
    bool VAR_10)
{
 unsigned long VAR_11, VAR_12;
 long VAR_13 = 0;


 if (VAR_7->end <= VAR_7->start)
  return -VAR_2;
 if (!VAR_9)
  return -VAR_2;
 if (!VAR_7->pfns)
  return -VAR_2;

 VAR_12 = (VAR_7->end - VAR_7->start) >> VAR_5;
 for (VAR_11 = 0; VAR_11 < VAR_12; ++VAR_11) {
  enum dma_data_direction VAR_14 = VAR_1;
  struct page *VAR_15;

  VAR_15 = FUNC_1(VAR_7, VAR_7->pfns[VAR_11]);
  if (VAR_15 == ((void*)0))
   continue;


  if (VAR_7->pfns[VAR_11] & VAR_7->flags[VAR_4]) {
   VAR_14 = VAR_0;





   if (VAR_10)
    FUNC_2(VAR_15);
  }


  FUNC_0(VAR_8, VAR_9[VAR_11], VAR_6, VAR_14);
  VAR_7->pfns[VAR_11] = VAR_7->values[VAR_3];

  VAR_9[VAR_11] = 0;
  VAR_13++;
 }

 return VAR_13;
}
