
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int dsm_segment ;
struct TYPE_11__ {TYPE_3__* header; int * fpm; scalar_t__ mapped_address; int * pagemap; int * segment; } ;
typedef TYPE_2__ dsa_segment_map ;
typedef size_t dsa_segment_index ;
struct TYPE_12__ {size_t magic; size_t usable_pages; size_t size; size_t bin; size_t prev; size_t next; int freed; } ;
typedef TYPE_3__ dsa_segment_header ;
typedef int dsa_pointer ;
struct TYPE_13__ {size_t high_segment_index; TYPE_1__* control; TYPE_2__* segment_maps; scalar_t__ mapping_pinned; } ;
typedef TYPE_4__ dsa_area ;
struct TYPE_10__ {scalar_t__* segment_handles; scalar_t__ total_segment_size; scalar_t__ max_total_segment_size; size_t high_segment_index; size_t handle; size_t* segment_bins; } ;
typedef int FreePageManager ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,size_t,size_t) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (int) ;
 size_t FUNC_6 (size_t,size_t) ;
 size_t FUNC_7 (size_t) ;
 int * FUNC_8 (size_t,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 TYPE_2__* FUNC_13 (TYPE_4__*,size_t) ;

__attribute__((used)) static dsa_segment_map *
FUNC_14(dsa_area *VAR_8, size_t VAR_9)
{
 dsa_segment_index VAR_10;
 size_t VAR_11;
 size_t VAR_12;
 size_t VAR_13;
 size_t VAR_14;
 dsa_segment_map *VAR_15;
 dsm_segment *VAR_16;

 FUNC_0(FUNC_4(FUNC_1(VAR_8)));


 for (VAR_10 = 1; VAR_10 < VAR_1; ++VAR_10)
 {
  if (VAR_8->control->segment_handles[VAR_10] == VAR_6)
   break;
 }
 if (VAR_10 == VAR_1)
  return ((void*)0);





 if (VAR_8->control->total_segment_size >=
  VAR_8->control->max_total_segment_size)
  return ((void*)0);
 VAR_12 = VAR_0 *
  ((size_t) 1 << (VAR_10 / VAR_3));
 VAR_12 = FUNC_6(VAR_12, VAR_2);
 VAR_12 = FUNC_6(VAR_12,
      VAR_8->control->max_total_segment_size -
      VAR_8->control->total_segment_size);

 VAR_13 = VAR_12 / VAR_7;
 VAR_11 =
  FUNC_5(sizeof(dsa_segment_header)) +
  FUNC_5(sizeof(FreePageManager)) +
  sizeof(dsa_pointer) * VAR_13;


 if (VAR_11 % VAR_7 != 0)
  VAR_11 += VAR_7 - (VAR_11 % VAR_7);
 if (VAR_12 <= VAR_11)
  return ((void*)0);
 VAR_14 = (VAR_12 - VAR_11) / VAR_7;
 FUNC_0(VAR_11 + VAR_14 * VAR_7 <= VAR_12);


 if (VAR_9 > VAR_14)
 {




  VAR_14 = VAR_9;
  VAR_11 =
   FUNC_5(sizeof(dsa_segment_header)) +
   FUNC_5(sizeof(FreePageManager)) +
   VAR_14 * sizeof(dsa_pointer);


  if (VAR_11 % VAR_7 != 0)
   VAR_11 += VAR_7 - (VAR_11 % VAR_7);
  VAR_12 = VAR_11 + VAR_14 * VAR_7;


  if (VAR_12 > VAR_2)
   return ((void*)0);


  if (VAR_12 > VAR_8->control->max_total_segment_size -
   VAR_8->control->total_segment_size)
   return ((void*)0);
 }


 VAR_16 = FUNC_8(VAR_12, 0);
 if (VAR_16 == ((void*)0))
  return ((void*)0);
 FUNC_10(VAR_16);
 if (VAR_8->mapping_pinned)
  FUNC_9(VAR_16);


 VAR_8->control->segment_handles[VAR_10] =
  FUNC_12(VAR_16);

 if (VAR_8->control->high_segment_index < VAR_10)
  VAR_8->control->high_segment_index = VAR_10;

 if (VAR_8->high_segment_index < VAR_10)
  VAR_8->high_segment_index = VAR_10;

 VAR_8->control->total_segment_size += VAR_12;
 FUNC_0(VAR_8->control->total_segment_size <=
     VAR_8->control->max_total_segment_size);


 VAR_15 = &VAR_8->segment_maps[VAR_10];
 VAR_15->segment = VAR_16;
 VAR_15->mapped_address = FUNC_11(VAR_16);
 VAR_15->header = (dsa_segment_header *) VAR_15->mapped_address;
 VAR_15->fpm = (FreePageManager *)
  (VAR_15->mapped_address +
   FUNC_5(sizeof(dsa_segment_header)));
 VAR_15->pagemap = (dsa_pointer *)
  (VAR_15->mapped_address +
   FUNC_5(sizeof(dsa_segment_header)) +
   FUNC_5(sizeof(FreePageManager)));


 FUNC_2(VAR_15->fpm, VAR_15->mapped_address);
 FUNC_3(VAR_15->fpm, VAR_11 / VAR_7,
        VAR_14);


 VAR_15->header->magic =
  VAR_4 ^ VAR_8->control->handle ^ VAR_10;
 VAR_15->header->usable_pages = VAR_14;
 VAR_15->header->size = VAR_12;
 VAR_15->header->bin = FUNC_7(VAR_14);
 VAR_15->header->prev = VAR_5;
 VAR_15->header->next =
  VAR_8->control->segment_bins[VAR_15->header->bin];
 VAR_15->header->freed = 0;
 VAR_8->control->segment_bins[VAR_15->header->bin] = VAR_10;
 if (VAR_15->header->next != VAR_5)
 {
  dsa_segment_map *VAR_17 =
  FUNC_13(VAR_8, VAR_15->header->next);

  FUNC_0(VAR_17->header->bin == VAR_15->header->bin);
  VAR_17->header->prev = VAR_10;
 }

 return VAR_15;
}
