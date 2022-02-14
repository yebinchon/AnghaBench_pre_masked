
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int lzma_allocator ;
struct TYPE_17__ {int * leftmost; } ;
struct TYPE_13__ {int uncompressed_base; int compressed_base; } ;
struct TYPE_14__ {int record_count; TYPE_7__ groups; int stream_padding; int stream_flags; int index_list_size; int block_number_base; int number; TYPE_1__ node; } ;
typedef TYPE_2__ index_stream ;
typedef int index_record ;
struct TYPE_16__ {scalar_t__ compressed_base; scalar_t__ uncompressed_base; } ;
struct TYPE_15__ {int number_base; int allocated; int last; TYPE_6__ node; scalar_t__ records; } ;
typedef TYPE_3__ index_group ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 TYPE_2__* FUNC_2 (int ,int ,int ,int ,int *) ;
 int FUNC_3 (TYPE_7__*,TYPE_6__*) ;
 TYPE_3__* FUNC_4 (TYPE_6__*) ;
 TYPE_3__* FUNC_5 (int,int *) ;
 int FUNC_6 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static index_stream *
FUNC_7(const index_stream *VAR_1, lzma_allocator *VAR_2)
{

 if (VAR_1->record_count > VAR_0)
  return ((void*)0);


 index_stream *VAR_3 = FUNC_2(VAR_1->node.compressed_base,
   VAR_1->node.uncompressed_base, VAR_1->number,
   VAR_1->block_number_base, VAR_2);



 if (VAR_3 == ((void*)0) || VAR_1->groups.leftmost == ((void*)0))
  return VAR_3;


 VAR_3->record_count = VAR_1->record_count;
 VAR_3->index_list_size = VAR_1->index_list_size;
 VAR_3->stream_flags = VAR_1->stream_flags;
 VAR_3->stream_padding = VAR_1->stream_padding;




 index_group *VAR_4 = FUNC_5(sizeof(index_group)
   + VAR_1->record_count * sizeof(index_record),
   VAR_2);
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_3, VAR_2);
  return ((void*)0);
 }


 VAR_4->node.uncompressed_base = 0;
 VAR_4->node.compressed_base = 0;
 VAR_4->number_base = 1;
 VAR_4->allocated = VAR_1->record_count;
 VAR_4->last = VAR_1->record_count - 1;


 const index_group *VAR_5 = (const index_group *)(VAR_1->groups.leftmost);
 size_t VAR_6 = 0;
 do {
  FUNC_6(VAR_4->records + VAR_6, VAR_5->records,
    (VAR_5->last + 1) * sizeof(index_record));
  VAR_6 += VAR_5->last + 1;
  VAR_5 = FUNC_4(&VAR_5->node);
 } while (VAR_5 != ((void*)0));

 FUNC_0(VAR_6 == VAR_4->allocated);


 FUNC_3(&VAR_3->groups, &VAR_4->node);

 return VAR_3;
}
