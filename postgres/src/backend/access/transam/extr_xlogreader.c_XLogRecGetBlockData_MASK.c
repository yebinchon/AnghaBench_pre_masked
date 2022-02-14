
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8 ;
struct TYPE_4__ {TYPE_2__* blocks; } ;
typedef TYPE_1__ XLogReaderState ;
struct TYPE_5__ {char* data; int data_len; int has_data; int in_use; } ;
typedef int Size ;
typedef TYPE_2__ DecodedBkpBlock ;



char *
FUNC_0(XLogReaderState *VAR_0, uint8 VAR_1, Size *VAR_2)
{
 DecodedBkpBlock *VAR_3;

 if (!VAR_0->blocks[VAR_1].in_use)
  return ((void*)0);

 VAR_3 = &VAR_0->blocks[VAR_1];

 if (!VAR_3->has_data)
 {
  if (VAR_2)
   *VAR_2 = 0;
  return ((void*)0);
 }
 else
 {
  if (VAR_2)
   *VAR_2 = VAR_3->data_len;
  return VAR_3->data;
 }
}
