
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu_chunk {int dummy; } ;
struct page {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pcpu_chunk*,struct page**,int,int,int ) ;
 int FUNC_1 (struct pcpu_chunk*,struct page**,int,int) ;
 struct page** FUNC_2 () ;
 scalar_t__ FUNC_3 (struct pcpu_chunk*,struct page**,int,int) ;
 int FUNC_4 (struct pcpu_chunk*,int,int) ;

__attribute__((used)) static int FUNC_5(struct pcpu_chunk *VAR_1,
          int VAR_2, int VAR_3, gfp_t VAR_4)
{
 struct page **VAR_5;

 VAR_5 = FUNC_2();
 if (!VAR_5)
  return -VAR_0;

 if (FUNC_0(VAR_1, VAR_5, VAR_2, VAR_3, VAR_4))
  return -VAR_0;

 if (FUNC_3(VAR_1, VAR_5, VAR_2, VAR_3)) {
  FUNC_1(VAR_1, VAR_5, VAR_2, VAR_3);
  return -VAR_0;
 }
 FUNC_4(VAR_1, VAR_2, VAR_3);

 return 0;
}
