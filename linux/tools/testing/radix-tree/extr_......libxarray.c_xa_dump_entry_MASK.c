
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xa_node {void** slots; unsigned long shift; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (char*,void const*,...) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (struct xa_node*) ;
 int FUNC_3 (void const*) ;
 scalar_t__ FUNC_4 (void const*) ;
 scalar_t__ FUNC_5 (void const*) ;
 scalar_t__ FUNC_6 (void const*) ;
 scalar_t__ FUNC_7 (void const*) ;
 scalar_t__ FUNC_8 (void const*) ;
 void const* FUNC_9 (void const*) ;
 struct xa_node* FUNC_10 (void const*) ;
 void const* FUNC_11 (void const*) ;
 int FUNC_12 (void const*) ;

void FUNC_13(const void *VAR_1, unsigned long VAR_2, unsigned long VAR_3)
{
 if (!VAR_1)
  return;

 FUNC_1(VAR_2, VAR_3);

 if (FUNC_4(VAR_1)) {
  if (VAR_3 == 0) {
   FUNC_0("%px\n", VAR_1);
  } else {
   unsigned long VAR_4;
   struct xa_node *VAR_5 = FUNC_10(VAR_1);
   FUNC_2(VAR_5);
   for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    FUNC_13(VAR_5->slots[VAR_4],
          VAR_2 + (VAR_4 << VAR_5->shift), VAR_5->shift);
  }
 } else if (FUNC_7(VAR_1))
  FUNC_0("value %ld (0x%lx) [%px]\n", FUNC_12(VAR_1),
      FUNC_12(VAR_1), VAR_1);
 else if (!FUNC_3(VAR_1))
  FUNC_0("%px\n", VAR_1);
 else if (FUNC_5(VAR_1))
  FUNC_0("retry (%ld)\n", FUNC_9(VAR_1));
 else if (FUNC_6(VAR_1))
  FUNC_0("sibling (slot %ld)\n", FUNC_11(VAR_1));
 else if (FUNC_8(VAR_1))
  FUNC_0("zero (%ld)\n", FUNC_9(VAR_1));
 else
  FUNC_0("UNKNOWN ENTRY (%px)\n", VAR_1);
}
