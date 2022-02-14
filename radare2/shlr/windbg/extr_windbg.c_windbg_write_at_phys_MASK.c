
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut64 ;
typedef int uint8_t ;
struct TYPE_8__ {int length; int read; int addr; } ;
struct TYPE_9__ {TYPE_1__ r_mem; scalar_t__ ret; int cpu; int req; } ;
typedef TYPE_2__ kd_req_t ;
typedef int kd_packet_t ;
struct TYPE_10__ {int seq_id; int io_ptr; int cpu; int syncd; } ;
typedef TYPE_3__ WindCtx ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int const,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int,int *,int,int const*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_3__*,int ,int **) ;

int FUNC_6(WindCtx *VAR_5, const uint8_t *VAR_6, const ut64 VAR_7, const int VAR_8) {
 kd_packet_t *VAR_9;
 kd_req_t VAR_10;
 int VAR_11;
 int VAR_12;

 if (!VAR_5 || !VAR_5->io_ptr || !VAR_5->syncd) {
  return 0;
 }

 VAR_12 = FUNC_1 (VAR_8, VAR_2 - sizeof(kd_req_t));

 FUNC_4 (&VAR_10, 0, sizeof(kd_req_t));

 VAR_10.req = VAR_0;
 VAR_10.cpu = VAR_5->cpu;

 VAR_10.r_mem.addr = VAR_7;
 VAR_10.r_mem.length = VAR_12;
 VAR_10.r_mem.read = 0;

 VAR_11 = FUNC_3 (VAR_5->io_ptr, VAR_4,
  (VAR_5->seq_id ^= 1), (uint8_t *) &VAR_10, sizeof(kd_req_t), VAR_6, VAR_12);
 if (VAR_11 != VAR_1) {
  return 0;
 }

 VAR_11 = FUNC_5 (VAR_5, VAR_3, ((void*)0));
 if (VAR_11 != VAR_1) {
  return 0;
 }

 VAR_11 = FUNC_5 (VAR_5, VAR_4, &VAR_9);
 if (VAR_11 != VAR_1) {
  return 0;
 }

 kd_req_t *VAR_13 = FUNC_0 (VAR_9);

 if (VAR_13->ret) {
  FUNC_2 (VAR_9);
  return 0;
 }
 VAR_11 = VAR_13->r_mem.read;
 FUNC_2 (VAR_9);
 return VAR_11;
}
