
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfit_test {int dummy; } ;
struct genpool_data_align {int align; } ;
typedef unsigned long dma_addr_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct nfit_test*,size_t,unsigned long*,void*) ;
 unsigned long FUNC_1 (int ,size_t,int ,struct genpool_data_align*) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (size_t) ;

__attribute__((used)) static void *FUNC_3(struct nfit_test *VAR_4, size_t VAR_5, dma_addr_t *VAR_6)
{
 struct genpool_data_align VAR_7 = {
  .align = VAR_1,
 };
 void *VAR_8 = FUNC_2(VAR_5);

 if (VAR_5 >= VAR_0)
  *VAR_6 = FUNC_1(VAR_3, VAR_5,
    VAR_2, &VAR_7);
 else
  *VAR_6 = (unsigned long) VAR_8;
 return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_8);
}
