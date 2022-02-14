
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int reason; int tf; } ;
struct TYPE_7__ {TYPE_1__ r_cont; int cpu; int req; int member_0; } ;
typedef TYPE_2__ kd_req_t ;
struct TYPE_8__ {int seq_id; int * plist_cache; int io_ptr; int cpu; int syncd; } ;
typedef TYPE_3__ WindCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int *,int,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int ,int *) ;

int FUNC_3(WindCtx *VAR_4) {
 kd_req_t VAR_5 = {
  0
 };
 int VAR_6;

 if (!VAR_4 || !VAR_4->io_ptr || !VAR_4->syncd) {
  return 0;
 }
 VAR_5.req = VAR_0;
 VAR_5.cpu = VAR_4->cpu;
 VAR_5.r_cont.reason = 0x10001;


 VAR_5.r_cont.tf = 0x400;

 VAR_6 = FUNC_0 (VAR_4->io_ptr, VAR_3,
  (VAR_4->seq_id ^= 1), (uint8_t *) &VAR_5, sizeof (kd_req_t), ((void*)0), 0);
 if (VAR_6 == VAR_1) {
  VAR_6 = FUNC_2 (VAR_4, VAR_2, ((void*)0));
  if (VAR_6 == VAR_1) {

   FUNC_1 (VAR_4->plist_cache);
   VAR_4->plist_cache = ((void*)0);
   return 1;
  }
 }
 return 0;
}
