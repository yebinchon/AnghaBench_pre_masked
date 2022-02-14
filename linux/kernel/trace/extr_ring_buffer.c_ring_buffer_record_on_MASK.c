
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {int record_disabled; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int *,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (int *) ;

void FUNC_2(struct ring_buffer *VAR_1)
{
 unsigned int VAR_2;
 unsigned int VAR_3;

 do {
  VAR_2 = FUNC_1(&VAR_1->record_disabled);
  VAR_3 = VAR_2 & ~VAR_0;
 } while (FUNC_0(&VAR_1->record_disabled, VAR_2, VAR_3) != VAR_2);
}
