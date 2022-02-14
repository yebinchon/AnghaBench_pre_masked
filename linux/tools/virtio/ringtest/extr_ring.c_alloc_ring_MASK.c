
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct desc {int index; } ;
struct TYPE_4__ {int kicked_avail_idx; int num_free; scalar_t__ last_used_idx; scalar_t__ avail_idx; } ;
struct TYPE_3__ {int called_used_idx; scalar_t__ used_idx; } ;


 void* FUNC_0 (int,int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (void**,int,int) ;
 struct desc* VAR_4 ;
 int VAR_5 ;

void FUNC_4(void)
{
 int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3((void **)&VAR_4, 0x1000, VAR_5 * sizeof *VAR_4);
 if (VAR_6) {
  FUNC_2("Unable to allocate ring buffer.\n");
  FUNC_1(3);
 }
 VAR_1 = FUNC_0(1, sizeof(*VAR_1));
 if (!VAR_1) {
  FUNC_2("Unable to allocate event buffer.\n");
  FUNC_1(3);
 }
 VAR_2.avail_idx = 0;
 VAR_2.kicked_avail_idx = -1;
 VAR_2.last_used_idx = 0;
 VAR_3.used_idx = 0;
 VAR_3.called_used_idx = -1;
 for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7) {
  struct desc VAR_8 = {
   .index = VAR_7,
  };
  VAR_4[VAR_7] = VAR_8;
 }
 VAR_2.num_free = VAR_5;
 VAR_0 = FUNC_0(VAR_5, sizeof(*VAR_0));
 if (!VAR_0) {
  FUNC_2("Unable to allocate data buffer.\n");
  FUNC_1(3);
 }
}
