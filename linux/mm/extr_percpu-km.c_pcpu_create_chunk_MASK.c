
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu_chunk {int base_addr; struct page* data; } ;
struct page {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct page* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct page*,int) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (struct page*) ;
 struct pcpu_chunk* FUNC_4 (int ) ;
 int FUNC_5 (struct pcpu_chunk*,int ,int const) ;
 int FUNC_6 (struct pcpu_chunk*) ;
 int* VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int ,struct pcpu_chunk*) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static struct pcpu_chunk *FUNC_12(gfp_t VAR_3)
{
 const int VAR_4 = VAR_1[0] >> VAR_0;
 struct pcpu_chunk *VAR_5;
 struct page *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 VAR_5 = FUNC_4(VAR_3);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_0(VAR_3, FUNC_2(VAR_4));
 if (!VAR_6) {
  FUNC_6(VAR_5);
  return ((void*)0);
 }

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  FUNC_7(FUNC_1(VAR_6, VAR_8), VAR_5);

 VAR_5->data = VAR_6;
 VAR_5->base_addr = FUNC_3(VAR_6);

 FUNC_9(&VAR_2, VAR_7);
 FUNC_5(VAR_5, 0, VAR_4);
 FUNC_10(&VAR_2, VAR_7);

 FUNC_8();
 FUNC_11(VAR_5->base_addr);

 return VAR_5;
}
