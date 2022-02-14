
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_id_persist {int fd; scalar_t__ id_last_written; scalar_t__ id; scalar_t__ time_last_written; scalar_t__ time; int * filename; } ;



void
FUNC_0(struct packet_id_persist *VAR_0)
{
    VAR_0->filename = ((void*)0);
    VAR_0->fd = -1;
    VAR_0->time = VAR_0->time_last_written = 0;
    VAR_0->id = VAR_0->id_last_written = 0;
}
