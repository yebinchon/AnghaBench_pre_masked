
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int dsm_segment ;
struct TYPE_10__ {void* mapped_address; int * pagemap; int * fpm; int * header; int * segment; } ;
typedef TYPE_2__ dsa_segment_map ;
typedef int dsa_segment_header ;
typedef int dsa_pointer ;
typedef int dsa_handle ;
struct TYPE_9__ {int magic; } ;
struct TYPE_11__ {int handle; int* segment_handles; scalar_t__ refcnt; int freed_segment_counter; TYPE_1__ segment_header; } ;
typedef TYPE_3__ dsa_area_control ;
struct TYPE_12__ {int mapping_pinned; TYPE_3__* control; int freed_segment_counter; TYPE_2__* segment_maps; scalar_t__ high_segment_index; } ;
typedef TYPE_4__ dsa_area ;
typedef int FreePageManager ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 TYPE_4__* FUNC_9 (int) ;

__attribute__((used)) static dsa_area *
FUNC_10(void *VAR_5, dsm_segment *VAR_6, dsa_handle VAR_7)
{
 dsa_area_control *VAR_8;
 dsa_area *VAR_9;
 dsa_segment_map *VAR_10;

 VAR_8 = (dsa_area_control *) VAR_5;
 FUNC_0(VAR_8->handle == VAR_7);
 FUNC_0(VAR_8->segment_handles[0] == VAR_7);
 FUNC_0(VAR_8->segment_header.magic ==
     (VAR_1 ^ VAR_7 ^ 0));


 VAR_9 = FUNC_9(sizeof(dsa_area));
 VAR_9->control = VAR_8;
 VAR_9->mapping_pinned = 0;
 FUNC_8(&VAR_9->segment_maps[0], 0,
     sizeof(dsa_segment_map) * VAR_0);
 VAR_9->high_segment_index = 0;


 VAR_10 = &VAR_9->segment_maps[0];
 VAR_10->segment = VAR_6;
 VAR_10->mapped_address = VAR_5;
 VAR_10->header = (dsa_segment_header *) VAR_10->mapped_address;
 VAR_10->fpm = (FreePageManager *)
  (VAR_10->mapped_address + FUNC_4(sizeof(dsa_area_control)));
 VAR_10->pagemap = (dsa_pointer *)
  (VAR_10->mapped_address + FUNC_4(sizeof(dsa_area_control)) +
   FUNC_4(sizeof(FreePageManager)));


 FUNC_2(FUNC_1(VAR_9), VAR_4);
 if (VAR_8->refcnt == 0)
 {

  FUNC_5(VAR_3,
    (FUNC_6(VAR_2),
     FUNC_7("could not attach to dynamic shared area")));
 }
 ++VAR_8->refcnt;
 VAR_9->freed_segment_counter = VAR_9->control->freed_segment_counter;
 FUNC_3(FUNC_1(VAR_9));

 return VAR_9;
}
