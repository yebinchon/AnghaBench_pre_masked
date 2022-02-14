
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int kicked_avail_idx; int num_free; scalar_t__ free_head; scalar_t__ last_used_idx; scalar_t__ avail_idx; } ;
struct TYPE_8__ {int called_used_idx; scalar_t__ used_idx; } ;
struct TYPE_7__ {TYPE_1__* desc; } ;
struct TYPE_6__ {int next; } ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (void**,int,int) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_2__*,int,void*,int) ;
 int FUNC_6 (int,int) ;

void FUNC_7(void)
{
 int VAR_5;
 int VAR_6;
 void *VAR_7;

 VAR_5 = FUNC_4(&VAR_7, 0x1000, FUNC_6(VAR_4, 0x1000));
 if (VAR_5) {
  FUNC_3("Unable to allocate ring buffer.\n");
  FUNC_0(3);
 }
 FUNC_2(VAR_7, 0, FUNC_6(VAR_4, 0x1000));
 FUNC_5(&VAR_3, VAR_4, VAR_7, 0x1000);

 VAR_1.avail_idx = 0;
 VAR_1.kicked_avail_idx = -1;
 VAR_1.last_used_idx = 0;


 VAR_1.free_head = 0;

 for (VAR_6 = 0; VAR_6 < VAR_4 - 1; VAR_6++)
  VAR_3.desc[VAR_6].next = VAR_6 + 1;
 VAR_2.used_idx = 0;
 VAR_2.called_used_idx = -1;
 VAR_1.num_free = VAR_4;
 VAR_0 = FUNC_1(VAR_4 * sizeof *VAR_0);
 if (!VAR_0) {
  FUNC_3("Unable to allocate data buffer.\n");
  FUNC_0(3);
 }
 FUNC_2(VAR_0, 0, VAR_4 * sizeof *VAR_0);
}
