
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* io_channel ;
typedef int errcode_t ;
typedef int ULONG ;
struct TYPE_9__ {scalar_t__ QuadPart; } ;
struct TYPE_8__ {int block_size; int buffer_block_number; int buffer_size; int written; int buffer; int (* write_error ) (TYPE_1__*,unsigned long,int,void const*,int,int ,int ) ;int handle; scalar_t__ offset; scalar_t__ read_only; scalar_t__ private_data; } ;
typedef TYPE_1__* PNT_PRIVATE_DATA ;
typedef TYPE_3__ LARGE_INTEGER ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,TYPE_3__,int,void const*,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,void const*,int) ;
 int FUNC_4 (TYPE_1__*,unsigned long,int,void const*,int,int ,int ) ;

__attribute__((used)) static errcode_t FUNC_5(io_channel VAR_4, unsigned long VAR_5, int VAR_6, const void *VAR_7)
{
 ULONG VAR_8;
 LARGE_INTEGER VAR_9;
 PNT_PRIVATE_DATA VAR_10 = ((void*)0);
 errcode_t VAR_11 = 0;

 FUNC_0(VAR_4, VAR_1);
 VAR_10 = (PNT_PRIVATE_DATA) VAR_4->private_data;
 FUNC_0(VAR_10, VAR_2);

 if (VAR_10->read_only)
  return VAR_0;

 if (VAR_6 == 1) {
  VAR_8 = VAR_4->block_size;
 } else {
  VAR_10->buffer_block_number = 0xffffffff;
  if (VAR_6 < 0)
   VAR_8 = (ULONG)(-VAR_6);
  else
   VAR_8 = (ULONG)(VAR_6 * VAR_4->block_size);
 }


 FUNC_2((VAR_8 % 512) == 0);
 VAR_9.QuadPart = VAR_5 * VAR_4->block_size + VAR_10->offset;

 if (!FUNC_1(VAR_10->handle, VAR_9, VAR_8, VAR_7, &VAR_11)) {
  if (VAR_4->write_error)
   return (VAR_4->write_error)(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, 0, VAR_11);
  else
   return VAR_11;
 }



 if(VAR_8 >= VAR_10->buffer_size) {
  VAR_10->buffer_block_number = VAR_5;
  FUNC_3(VAR_10->buffer, VAR_7, VAR_10->buffer_size);
 }

 VAR_10->written = VAR_3;

 return 0;
}
