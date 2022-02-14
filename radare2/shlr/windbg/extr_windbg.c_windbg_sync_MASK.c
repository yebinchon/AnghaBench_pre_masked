
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int cpu_count; int cpu; } ;
typedef TYPE_1__ kd_stc_64 ;
struct TYPE_9__ {scalar_t__ data; } ;
typedef TYPE_2__ kd_packet_t ;
struct TYPE_10__ {int syncd; int seq_id; int cpu_count; scalar_t__ pae; int * tlist_cache; int * plist_cache; int * target; int cpu; int io_ptr; } ;
typedef TYPE_3__ WindCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int const*,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int ,TYPE_2__**) ;

int FUNC_6(WindCtx *VAR_3) {
 int VAR_4;
 kd_packet_t *VAR_5;

 if (!VAR_3 || !VAR_3->io_ptr) {
  return 0;
 }

 if (VAR_3->syncd) {
  return 1;
 }


 if (FUNC_2 (VAR_3->io_ptr, (const uint8_t *) "b", 1) != 1) {
  return 0;
 }


 VAR_4 = FUNC_3 (VAR_3->io_ptr, VAR_1, 0);
 if (VAR_4 != VAR_0) {
  return 0;
 }


 VAR_4 = FUNC_5 (VAR_3, VAR_1, ((void*)0));
 if (VAR_4 != VAR_0) {
  return 0;
 }


 FUNC_5 (VAR_3, VAR_2, &VAR_5);


 VAR_3->seq_id = 0x80800001;

 kd_stc_64 *VAR_6 = (kd_stc_64*)VAR_5->data;
 VAR_3->cpu = VAR_6->cpu;
 VAR_3->cpu_count = VAR_6->cpu_count;
 VAR_3->target = ((void*)0);
 FUNC_4 (VAR_3->plist_cache);
 VAR_3->plist_cache = ((void*)0);
 FUNC_4 (VAR_3->tlist_cache);
 VAR_3->tlist_cache = ((void*)0);
 VAR_3->pae = 0;

 VAR_3->syncd = 1;

 FUNC_1 (VAR_5);
 FUNC_0 ("Sync done! (%i cpus found)\n", VAR_3->cpu_count);
 return 1;
}
