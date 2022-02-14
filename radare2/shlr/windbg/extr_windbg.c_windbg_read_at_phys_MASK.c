
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut64 ;
typedef int uint8_t ;
struct TYPE_7__ {int read; int length; int addr; } ;
struct TYPE_8__ {TYPE_1__ r_mem; int data; scalar_t__ ret; int cpu; int req; int member_0; } ;
typedef TYPE_2__ kd_req_t ;
typedef int kd_packet_t ;
struct TYPE_9__ {int seq_id; int io_ptr; int cpu; int syncd; } ;
typedef TYPE_3__ WindCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int const,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int,int *,int,int *,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (TYPE_3__*,int ,int **) ;

int FUNC_6(WindCtx *VAR_5, uint8_t *VAR_6, const ut64 VAR_7, const int VAR_8) {
 kd_req_t VAR_9 = {
  0
 }, *VAR_10;
 kd_packet_t *VAR_11;
 int VAR_12;

 if (!VAR_5 || !VAR_5->io_ptr || !VAR_5->syncd) {
  return 0;
 }
 VAR_9.req = VAR_0;
 VAR_9.cpu = VAR_5->cpu;
 VAR_9.r_mem.addr = VAR_7;
 VAR_9.r_mem.length = FUNC_1 (VAR_8, VAR_2);
 VAR_9.r_mem.read = 0;

 VAR_12 = FUNC_3 (VAR_5->io_ptr, VAR_4, (VAR_5->seq_id ^= 1),
  (uint8_t *) &VAR_9, sizeof(kd_req_t), ((void*)0), 0);
 if (VAR_12 != VAR_1) {
  return 0;
 }

 VAR_12 = FUNC_5 (VAR_5, VAR_3, ((void*)0));
 if (VAR_12 != VAR_1) {
  return 0;
 }

 VAR_12 = FUNC_5 (VAR_5, VAR_4, &VAR_11);
 if (VAR_12 != VAR_1) {
  return 0;
 }

 VAR_10 = FUNC_0 (VAR_11);

 if (VAR_10->ret) {
  FUNC_2 (VAR_11);
  return 0;
 }

 FUNC_4 (VAR_6, VAR_10->data, VAR_10->r_mem.read);
 VAR_12 = VAR_10->r_mem.read;
 FUNC_2 (VAR_11);
 return VAR_12;
}
