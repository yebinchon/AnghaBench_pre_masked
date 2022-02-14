
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_stream {int sd_int_sta_mask; int index; int direction; int stream_tag; int list; scalar_t__ sd_addr; struct hdac_bus* bus; } ;
struct hdac_bus {int stream_list; scalar_t__ remap_addr; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct hdac_stream*) ;

void FUNC_2(struct hdac_bus *VAR_0, struct hdac_stream *VAR_1,
     int VAR_2, int VAR_3, int VAR_4)
{
 VAR_1->bus = VAR_0;

 VAR_1->sd_addr = VAR_0->remap_addr + (0x20 * VAR_2 + 0x80);

 VAR_1->sd_int_sta_mask = 1 << VAR_2;
 VAR_1->index = VAR_2;
 VAR_1->direction = VAR_3;
 VAR_1->stream_tag = VAR_4;
 FUNC_1(VAR_1);
 FUNC_0(&VAR_1->list, &VAR_0->stream_list);
}
