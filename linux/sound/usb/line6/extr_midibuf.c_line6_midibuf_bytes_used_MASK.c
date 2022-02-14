
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct midi_buffer {int pos_write; int pos_read; int size; } ;


 scalar_t__ FUNC_0 (struct midi_buffer*) ;

int FUNC_1(struct midi_buffer *VAR_0)
{
 return
     FUNC_0(VAR_0) ?
     0 :
     (VAR_0->pos_write - VAR_0->pos_read + VAR_0->size - 1) % VAR_0->size +
     1;
}
