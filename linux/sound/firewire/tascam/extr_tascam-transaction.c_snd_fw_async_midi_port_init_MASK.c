
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_fw_async_midi_port {int idling; int error; int on_sysex; scalar_t__ running_status; } ;



void FUNC_0(struct snd_fw_async_midi_port *VAR_0)
{
 VAR_0->idling = 1;
 VAR_0->error = 0;
 VAR_0->running_status = 0;
 VAR_0->on_sysex = 0;
}
