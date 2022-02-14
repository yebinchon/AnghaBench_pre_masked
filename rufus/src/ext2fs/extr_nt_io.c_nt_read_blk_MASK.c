
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
struct TYPE_8__ {unsigned long buffer_block_number; void* buffer; int block_size; int buffer_size; int (* read_error ) (TYPE_1__*,unsigned long,int,void*,int,int ,int ) ;int handle; scalar_t__ offset; scalar_t__ private_data; } ;
typedef void* PVOID ;
typedef TYPE_1__* PNT_PRIVATE_DATA ;
typedef TYPE_3__ LARGE_INTEGER ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_3__,int,void*,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*,void*,int) ;
 int FUNC_4 (TYPE_1__*,unsigned long,int,void*,int,int ,int ) ;

__attribute__((used)) static errcode_t FUNC_5(io_channel VAR_2, unsigned long VAR_3, int VAR_4, void *VAR_5)
{
 PVOID VAR_6;
 ULONG VAR_7;
 ULONG VAR_8;
 LARGE_INTEGER VAR_9;
 PNT_PRIVATE_DATA VAR_10 = ((void*)0);
 errcode_t VAR_11 = 0;

 FUNC_0(VAR_2, VAR_0);
 VAR_10 = (PNT_PRIVATE_DATA) VAR_2->private_data;
 FUNC_0(VAR_10, VAR_1);


 if ((VAR_4 == 1) && (VAR_3 == VAR_10->buffer_block_number) &&
     (VAR_10->buffer_block_number != 0xffffffff)) {
  FUNC_3(VAR_5, VAR_10->buffer, VAR_2->block_size);
  return 0;
 }

 VAR_8 = (VAR_4 < 0) ? (ULONG)(-VAR_4) : (ULONG)(VAR_4 * VAR_2->block_size);

 VAR_9.QuadPart = VAR_3 * VAR_2->block_size + VAR_10->offset;


 if (VAR_8 <= VAR_10->buffer_size) {

  VAR_10->buffer_block_number = VAR_3;
  VAR_6 = VAR_10->buffer;
  VAR_7 = VAR_10->buffer_size;
 } else {
  VAR_7 = VAR_8;
  VAR_6 = VAR_5;
  FUNC_2((VAR_7 % VAR_2->block_size) == 0);
 }

 if (!FUNC_1(VAR_10->handle, VAR_9, VAR_7, VAR_6, &VAR_11)) {
  if (VAR_2->read_error)
   return (VAR_2->read_error)(VAR_2, VAR_3, VAR_4, VAR_5, VAR_8, 0, VAR_11);
  else
   return VAR_11;
 }

 if (VAR_6 != VAR_5) {
  FUNC_2(VAR_8 <= VAR_7);
  FUNC_3(VAR_5, VAR_6, VAR_8);
 }

 return 0;
}
