
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sh_dac {int empty; scalar_t__ processed; int data_buffer; int buffer_end; int buffer_begin; } ;


 int FUNC_0 (struct snd_sh_dac*) ;

__attribute__((used)) static void FUNC_1(struct snd_sh_dac *VAR_0)
{
 FUNC_0(VAR_0);
 VAR_0->buffer_begin = VAR_0->buffer_end = VAR_0->data_buffer;
 VAR_0->processed = 0;
 VAR_0->empty = 1;
}
