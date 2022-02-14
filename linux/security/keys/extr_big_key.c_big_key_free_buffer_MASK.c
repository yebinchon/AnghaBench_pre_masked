
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct big_key_buf {int nr_pages; scalar_t__* pages; scalar_t__ virt; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct big_key_buf*) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct big_key_buf *VAR_1)
{
 unsigned int VAR_2;

 if (VAR_1->virt) {
  FUNC_2(VAR_1->virt, 0, VAR_1->nr_pages * VAR_0);
  FUNC_3(VAR_1->virt);
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_pages; VAR_2++)
  if (VAR_1->pages[VAR_2])
   FUNC_0(VAR_1->pages[VAR_2]);

 FUNC_1(VAR_1);
}
