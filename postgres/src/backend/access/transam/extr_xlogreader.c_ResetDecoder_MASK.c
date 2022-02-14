
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int max_block_id; TYPE_1__* blocks; scalar_t__ main_data_len; int * decoded_record; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_4__ {int in_use; int has_image; int has_data; int apply_image; } ;



__attribute__((used)) static void
FUNC_0(XLogReaderState *VAR_0)
{
 int VAR_1;

 VAR_0->decoded_record = ((void*)0);

 VAR_0->main_data_len = 0;

 for (VAR_1 = 0; VAR_1 <= VAR_0->max_block_id; VAR_1++)
 {
  VAR_0->blocks[VAR_1].in_use = 0;
  VAR_0->blocks[VAR_1].has_image = 0;
  VAR_0->blocks[VAR_1].has_data = 0;
  VAR_0->blocks[VAR_1].apply_image = 0;
 }
 VAR_0->max_block_id = -1;
}
