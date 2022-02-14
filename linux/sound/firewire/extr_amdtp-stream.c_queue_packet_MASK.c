
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fw_iso_packet {scalar_t__ sy; int tag; int interrupt; } ;
struct TYPE_5__ {TYPE_1__* packets; int iso_buffer; } ;
struct amdtp_stream {int packet_index; TYPE_3__* unit; TYPE_2__ buffer; int context; int tag; } ;
struct TYPE_6__ {int device; } ;
struct TYPE_4__ {int offset; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 size_t VAR_1 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,struct fw_iso_packet*,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct amdtp_stream *VAR_2, struct fw_iso_packet *VAR_3)
{
 int VAR_4;

 VAR_3->interrupt = FUNC_0(VAR_2->packet_index + 1, VAR_0);
 VAR_3->tag = VAR_2->tag;
 VAR_3->sy = 0;

 VAR_4 = FUNC_2(VAR_2->context, VAR_3, &VAR_2->buffer.iso_buffer,
       VAR_2->buffer.packets[VAR_2->packet_index].offset);
 if (VAR_4 < 0) {
  FUNC_1(&VAR_2->unit->device, "queueing error: %d\n", VAR_4);
  goto end;
 }

 if (++VAR_2->packet_index >= VAR_1)
  VAR_2->packet_index = 0;
end:
 return VAR_4;
}
