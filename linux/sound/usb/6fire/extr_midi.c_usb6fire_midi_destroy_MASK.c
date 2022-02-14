
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfire_chip {struct midi_runtime* midi; } ;
struct midi_runtime {struct midi_runtime* out_buffer; } ;


 int FUNC_0 (struct midi_runtime*) ;

void FUNC_1(struct sfire_chip *VAR_0)
{
 struct midi_runtime *VAR_1 = VAR_0->midi;

 FUNC_0(VAR_1->out_buffer);
 FUNC_0(VAR_1);
 VAR_0->midi = ((void*)0);
}
