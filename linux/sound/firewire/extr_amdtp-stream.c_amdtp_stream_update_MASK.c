
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdtp_stream {int unit; int source_node_id_field; } ;
struct TYPE_4__ {TYPE_1__* card; } ;
struct TYPE_3__ {int node_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 TYPE_2__* FUNC_1 (int ) ;

void FUNC_2(struct amdtp_stream *VAR_2)
{

 FUNC_0(VAR_2->source_node_id_field,
                   (FUNC_1(VAR_2->unit)->card->node_id << VAR_1) & VAR_0);
}
