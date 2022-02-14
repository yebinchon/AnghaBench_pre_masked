
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu_chunk {scalar_t__ data; int base_addr; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (struct pcpu_chunk*) ;
 int* VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct pcpu_chunk *VAR_2)
{
 const int VAR_3 = VAR_1[0] >> VAR_0;

 if (!VAR_2)
  return;

 FUNC_3();
 FUNC_4(VAR_2->base_addr);

 if (VAR_2->data)
  FUNC_0(VAR_2->data, FUNC_1(VAR_3));
 FUNC_2(VAR_2);
}
