
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ca_midi {int * rmidi; int * get_dev_id_port; int * get_dev_id_card; int * write; int * read; int * interrupt_disable; int * interrupt_enable; int * interrupt; } ;



__attribute__((used)) static void FUNC_0(struct snd_ca_midi *VAR_0)
{
 VAR_0->interrupt = ((void*)0);
 VAR_0->interrupt_enable = ((void*)0);
 VAR_0->interrupt_disable = ((void*)0);
 VAR_0->read = ((void*)0);
 VAR_0->write = ((void*)0);
 VAR_0->get_dev_id_card = ((void*)0);
 VAR_0->get_dev_id_port = ((void*)0);
 VAR_0->rmidi = ((void*)0);
}
