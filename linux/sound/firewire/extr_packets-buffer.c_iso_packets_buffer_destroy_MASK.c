
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iso_packets_buffer {int packets; int iso_buffer; } ;
struct fw_unit {int dummy; } ;
struct TYPE_2__ {int card; } ;


 int FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (struct fw_unit*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct iso_packets_buffer *VAR_0,
    struct fw_unit *VAR_1)
{
 FUNC_0(&VAR_0->iso_buffer, FUNC_1(VAR_1)->card);
 FUNC_2(VAR_0->packets);
}
