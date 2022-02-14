
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu_chunk {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct pcpu_chunk*,struct page**,int,int) ;
 struct page** FUNC_2 () ;
 int FUNC_3 (struct pcpu_chunk*,int,int) ;
 int FUNC_4 (struct pcpu_chunk*,struct page**,int,int) ;

__attribute__((used)) static void FUNC_5(struct pcpu_chunk *VAR_0,
      int VAR_1, int VAR_2)
{
 struct page **VAR_3;






 VAR_3 = FUNC_2();
 FUNC_0(!VAR_3);


 FUNC_3(VAR_0, VAR_1, VAR_2);

 FUNC_4(VAR_0, VAR_3, VAR_1, VAR_2);



 FUNC_1(VAR_0, VAR_3, VAR_1, VAR_2);
}
