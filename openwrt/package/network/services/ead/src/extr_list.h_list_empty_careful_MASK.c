
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct list_head {struct list_head const* prev; struct list_head const* next; } const list_head ;



__attribute__((used)) static inline int FUNC_0(const struct list_head *VAR_0)
{
 struct list_head *VAR_1 = VAR_0->next;
 return (VAR_1 == VAR_0) && (VAR_1 == VAR_0->prev);
}
