
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut64 ;
typedef int uint8_t ;
struct TYPE_9__ {int handle; int addr; } ;
struct TYPE_8__ {int handle; } ;
struct TYPE_10__ {int ret; TYPE_2__ r_set_bp; TYPE_1__ r_del_bp; int cpu; int req; int member_0; } ;
typedef TYPE_3__ kd_req_t ;
typedef int kd_packet_t ;
struct TYPE_11__ {int seq_id; int io_ptr; int cpu; int syncd; } ;
typedef TYPE_4__ WindCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int,int *,int,int *,int ) ;
 int FUNC_3 (TYPE_4__*,int ,int **) ;

int FUNC_4(WindCtx *VAR_5, const ut64 VAR_6, const int VAR_7, const int VAR_8, int *VAR_9) {
 kd_req_t VAR_10 = {
  0
 };
 kd_packet_t *VAR_11;
 int VAR_12;

 if (!VAR_5 || !VAR_5->io_ptr || !VAR_5->syncd) {
  return 0;
 }

 VAR_10.req = VAR_7? VAR_1: VAR_0;
 VAR_10.cpu = VAR_5->cpu;

 if (VAR_7) {
  VAR_10.r_set_bp.addr = VAR_6;
 } else {
  VAR_10.r_del_bp.handle = *VAR_9;
 }

 VAR_12 = FUNC_2 (VAR_5->io_ptr, VAR_4, (VAR_5->seq_id ^= 1), (uint8_t *) &VAR_10,
  sizeof(kd_req_t), ((void*)0), 0);
 if (VAR_12 != VAR_2) {
  return 0;
 }

 VAR_12 = FUNC_3 (VAR_5, VAR_3, ((void*)0));
 if (VAR_12 != VAR_2) {
  return 0;
 }

 VAR_12 = FUNC_3 (VAR_5, VAR_4, &VAR_11);
 if (VAR_12 != VAR_2) {
  return 0;
 }

 kd_req_t *VAR_13 = FUNC_0 (VAR_11);

 if (VAR_13->ret) {
  FUNC_1 (VAR_11);
  return 0;
 }
 *VAR_9 = VAR_13->r_set_bp.handle;
 VAR_12 = !!VAR_13->ret;
 FUNC_1 (VAR_11);
 return VAR_12;
}
