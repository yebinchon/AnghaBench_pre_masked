
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* io_channel ;
typedef int errcode_t ;
struct TYPE_5__ {int block_size; int buffer_block_number; int buffer_size; int * buffer; scalar_t__ private_data; } ;
typedef TYPE_1__* PNT_PRIVATE_DATA ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;

__attribute__((used)) static errcode_t FUNC_4(io_channel VAR_3, int VAR_4)
{
 PNT_PRIVATE_DATA VAR_5 = ((void*)0);

 FUNC_0(VAR_3, VAR_1);
 VAR_5 = (PNT_PRIVATE_DATA) VAR_3->private_data;
 FUNC_0(VAR_5, VAR_2);

 if (VAR_3->block_size != VAR_4) {
  VAR_3->block_size = VAR_4;

  FUNC_2(VAR_5->buffer);
  VAR_5->buffer_block_number = 0xffffffff;
  VAR_5->buffer_size = VAR_3->block_size;
  FUNC_1((VAR_5->buffer_size % 512) == 0);

  VAR_5->buffer = FUNC_3(VAR_5->buffer_size);
  if (VAR_5->buffer == ((void*)0))
   return VAR_0;
 }

 return 0;
}
