
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int compressed_base; int uncompressed_base; scalar_t__ right; scalar_t__ left; } ;
struct TYPE_6__ {TYPE_3__ node; int block_number_base; int number; } ;
typedef TYPE_1__ index_stream ;
struct TYPE_7__ {int streams; scalar_t__ block_number_add; scalar_t__ stream_number_add; scalar_t__ file_size; scalar_t__ uncompressed_size; } ;
typedef TYPE_2__ index_cat_info ;


 int FUNC_0 (int ,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_1(const index_cat_info *VAR_0, index_stream *VAR_1)
{
 index_stream *VAR_2 = (index_stream *)(VAR_1->node.left);
 index_stream *VAR_3 = (index_stream *)(VAR_1->node.right);

 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_0, VAR_2);

 VAR_1->node.uncompressed_base += VAR_0->uncompressed_size;
 VAR_1->node.compressed_base += VAR_0->file_size;
 VAR_1->number += VAR_0->stream_number_add;
 VAR_1->block_number_base += VAR_0->block_number_add;
 FUNC_0(VAR_0->streams, &VAR_1->node);

 if (VAR_3 != ((void*)0))
  FUNC_1(VAR_0, VAR_3);

 return;
}
