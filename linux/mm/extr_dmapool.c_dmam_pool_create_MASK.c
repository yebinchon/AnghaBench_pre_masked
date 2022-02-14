
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_pool {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct dma_pool**) ;
 struct dma_pool** FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct dma_pool**) ;
 struct dma_pool* FUNC_3 (char const*,struct device*,size_t,size_t,size_t) ;
 int VAR_1 ;

struct dma_pool *FUNC_4(const char *VAR_2, struct device *VAR_3,
      size_t VAR_4, size_t VAR_5, size_t VAR_6)
{
 struct dma_pool **VAR_7, *VAR_8;

 VAR_7 = FUNC_1(VAR_1, sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_8 = *VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8)
  FUNC_0(VAR_3, VAR_7);
 else
  FUNC_2(VAR_7);

 return VAR_8;
}
