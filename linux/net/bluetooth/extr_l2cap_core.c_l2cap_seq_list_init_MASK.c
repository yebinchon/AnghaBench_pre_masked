
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct l2cap_seq_list {size_t mask; void** list; void* tail; void* head; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void** FUNC_0 (size_t,int,int ) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct l2cap_seq_list *VAR_3, u16 VAR_4)
{
 size_t VAR_5, VAR_6;





 VAR_5 = FUNC_1(VAR_4);

 VAR_3->list = FUNC_0(VAR_5, sizeof(u16), VAR_1);
 if (!VAR_3->list)
  return -VAR_0;

 VAR_3->mask = VAR_5 - 1;
 VAR_3->head = VAR_2;
 VAR_3->tail = VAR_2;
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  VAR_3->list[VAR_6] = VAR_2;

 return 0;
}
