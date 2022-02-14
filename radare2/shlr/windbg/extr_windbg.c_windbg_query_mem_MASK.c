
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut64 ;
typedef int uint8_t ;
struct TYPE_8__ {int address_space; int flags; int addr; } ;
struct TYPE_9__ {TYPE_1__ r_query_mem; scalar_t__ ret; int cpu; int req; } ;
typedef TYPE_2__ kd_req_t ;
typedef int kd_packet_t ;
struct TYPE_10__ {int seq_id; int io_ptr; int cpu; int syncd; } ;
typedef TYPE_3__ WindCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int,int *,int,int *,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (TYPE_3__*,int ,int **) ;

int FUNC_5(WindCtx *VAR_4, const ut64 VAR_5, int *VAR_6, int *VAR_7) {
 kd_req_t VAR_8;
 kd_packet_t *VAR_9;
 int VAR_10;

 if (!VAR_4 || !VAR_4->io_ptr || !VAR_4->syncd) {
  return 0;
 }

 FUNC_3 (&VAR_8, 0, sizeof(kd_req_t));

 VAR_8.req = VAR_0;
 VAR_8.cpu = VAR_4->cpu;

 VAR_8.r_query_mem.addr = VAR_5;
 VAR_8.r_query_mem.address_space = 0;

 VAR_10 = FUNC_2 (VAR_4->io_ptr, VAR_3, (VAR_4->seq_id ^= 1), (uint8_t *) &VAR_8,
  sizeof(kd_req_t), ((void*)0), 0);
 if (VAR_10 != VAR_1) {
  return 0;
 }

 VAR_10 = FUNC_4 (VAR_4, VAR_2, ((void*)0));
 if (VAR_10 != VAR_1) {
  return 0;
 }

 VAR_10 = FUNC_4 (VAR_4, VAR_3, &VAR_9);
 if (VAR_10 != VAR_1) {
  return 0;
 }

 kd_req_t *VAR_11 = FUNC_0 (VAR_9);

 if (VAR_11->ret) {
  FUNC_1 (VAR_9);
  return 0;
 }

 if (VAR_6) {
  *VAR_6 = VAR_11->r_query_mem.address_space;
 }
 if (VAR_7) {
  *VAR_7 = VAR_11->r_query_mem.flags;
 }

 FUNC_1 (VAR_9);

 return VAR_10;

}
