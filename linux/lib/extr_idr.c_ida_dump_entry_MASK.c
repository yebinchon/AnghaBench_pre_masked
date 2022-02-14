
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xa_node {unsigned int shift; void** slots; } ;
struct ida_bitmap {int * bitmap; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (unsigned long,unsigned int) ;
 int FUNC_3 (struct xa_node*) ;
 scalar_t__ FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*) ;
 struct xa_node* FUNC_6 (void*) ;
 int FUNC_7 (void*) ;

__attribute__((used)) static void FUNC_8(void *VAR_6, unsigned long VAR_7)
{
 unsigned long VAR_8;

 if (!VAR_6)
  return;

 if (FUNC_4(VAR_6)) {
  struct xa_node *VAR_9 = FUNC_6(VAR_6);
  unsigned int VAR_10 = VAR_9->shift + VAR_3 +
   VAR_4;

  FUNC_2(VAR_7 * VAR_1, VAR_10);
  FUNC_3(VAR_9);
  for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
   FUNC_8(VAR_9->slots[VAR_8],
     VAR_7 | (VAR_8 << VAR_9->shift));
 } else if (FUNC_5(VAR_6)) {
  FUNC_2(VAR_7 * VAR_1, FUNC_0(VAR_0));
  FUNC_1("value: data %lx [%px]\n", FUNC_7(VAR_6), VAR_6);
 } else {
  struct ida_bitmap *VAR_11 = VAR_6;

  FUNC_2(VAR_7 * VAR_1, VAR_3);
  FUNC_1("bitmap: %p data", VAR_11);
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
   FUNC_1(" %lx", VAR_11->bitmap[VAR_8]);
  FUNC_1("\n");
 }
}
