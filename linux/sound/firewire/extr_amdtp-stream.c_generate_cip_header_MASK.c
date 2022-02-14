
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int fdf; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;
struct amdtp_stream {unsigned int data_block_quadlets; unsigned int sph; unsigned int fmt; TYPE_2__ ctx_data; int source_node_id_field; } ;
typedef int __be32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(struct amdtp_stream *VAR_9, __be32 VAR_10[2],
   unsigned int VAR_11, unsigned int VAR_12)
{
 VAR_10[0] = FUNC_1(FUNC_0(VAR_9->source_node_id_field) |
    (VAR_9->data_block_quadlets << VAR_0) |
    ((VAR_9->sph << VAR_7) & VAR_6) |
    VAR_11);
 VAR_10[1] = FUNC_1(VAR_1 |
   ((VAR_9->fmt << VAR_5) & VAR_4) |
   ((VAR_9->ctx_data.rx.fdf << VAR_3) & VAR_2) |
   (VAR_12 & VAR_8));
}
