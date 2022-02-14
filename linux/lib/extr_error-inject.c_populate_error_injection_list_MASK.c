
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct error_injection_entry {int etype; scalar_t__ addr; } ;
struct ei_entry {unsigned long start_addr; unsigned long end_addr; int list; void* priv; int etype; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 unsigned long FUNC_1 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (unsigned long,unsigned long*,unsigned long*) ;
 int FUNC_3 (unsigned long) ;
 struct ei_entry* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,void*) ;

__attribute__((used)) static void FUNC_9(struct error_injection_entry *VAR_3,
       struct error_injection_entry *VAR_4,
       void *VAR_5)
{
 struct error_injection_entry *VAR_6;
 struct ei_entry *VAR_7;
 unsigned long VAR_8, VAR_9 = 0, VAR_10 = 0;

 FUNC_6(&VAR_1);
 for (VAR_6 = VAR_3; VAR_6 < VAR_4; VAR_6++) {
  VAR_8 = FUNC_1((void *)VAR_6->addr);

  if (!FUNC_3(VAR_8) ||
      !FUNC_2(VAR_8, &VAR_10, &VAR_9)) {
   FUNC_8("Failed to find error inject entry at %p\n",
    (void *)VAR_8);
   continue;
  }

  VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_0);
  if (!VAR_7)
   break;
  VAR_7->start_addr = VAR_8;
  VAR_7->end_addr = VAR_8 + VAR_10;
  VAR_7->etype = VAR_6->etype;
  VAR_7->priv = VAR_5;
  FUNC_0(&VAR_7->list);
  FUNC_5(&VAR_7->list, &VAR_2);
 }
 FUNC_7(&VAR_1);
}
