
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {int record_disabled; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

bool FUNC_1(struct ring_buffer *VAR_1)
{
 return !(FUNC_0(&VAR_1->record_disabled) & VAR_0);
}
