
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ avail_in; scalar_t__ avail_out; int * next_out; int * next_in; } ;
struct TYPE_12__ {scalar_t__ used; scalar_t__ free; scalar_t__ aptr; scalar_t__ data; } ;
struct TYPE_14__ {TYPE_8__ Z; TYPE_2__ buffer; } ;
typedef TYPE_4__ php_zlib_context ;
struct TYPE_13__ {int free; scalar_t__ size; scalar_t__ used; scalar_t__ data; } ;
struct TYPE_11__ {scalar_t__ used; int data; } ;
struct TYPE_15__ {int op; TYPE_3__ out; TYPE_1__ in; } ;
typedef TYPE_5__ php_output_context ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;


 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (TYPE_8__*,int) ;
 int FUNC_3 (TYPE_8__*) ;
 scalar_t__ FUNC_4 (TYPE_8__*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,int ,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_9(php_zlib_context *VAR_14, php_output_context *VAR_15)
{
 int VAR_16 = VAR_11;

 if (VAR_15->op & VAR_5) {

  if (129 != FUNC_4(&VAR_14->Z, FUNC_1(VAR_13), VAR_8, FUNC_1(VAR_12), VAR_1, VAR_7)) {
   return VAR_0;
  }
 }

 if (VAR_15->op & VAR_2) {

  FUNC_3(&VAR_14->Z);

  if (VAR_15->op & VAR_3) {

   return VAR_6;
  } else {

   if (129 != FUNC_4(&VAR_14->Z, FUNC_1(VAR_13), VAR_8, FUNC_1(VAR_12), VAR_1, VAR_7)) {
    return VAR_0;
   }
   VAR_14->buffer.used = 0;
  }
 } else {
  if (VAR_15->in.used) {

   if (VAR_14->buffer.free < VAR_15->in.used) {
    if (!(VAR_14->buffer.aptr = FUNC_6(VAR_14->buffer.data, VAR_14->buffer.used + VAR_14->buffer.free + VAR_15->in.used))) {
     FUNC_3(&VAR_14->Z);
     return VAR_0;
    }
    VAR_14->buffer.data = VAR_14->buffer.aptr;
    VAR_14->buffer.free += VAR_15->in.used;
   }
   FUNC_7(VAR_14->buffer.data + VAR_14->buffer.used, VAR_15->in.data, VAR_15->in.used);
   VAR_14->buffer.free -= VAR_15->in.used;
   VAR_14->buffer.used += VAR_15->in.used;
  }
  VAR_15->out.size = FUNC_0(VAR_15->in.used);
  VAR_15->out.data = FUNC_5(VAR_15->out.size);
  VAR_15->out.free = 1;
  VAR_15->out.used = 0;

  VAR_14->Z.avail_in = VAR_14->buffer.used;
  VAR_14->Z.next_in = (Bytef *) VAR_14->buffer.data;
  VAR_14->Z.avail_out = VAR_15->out.size;
  VAR_14->Z.next_out = (Bytef *) VAR_15->out.data;

  if (VAR_15->op & VAR_3) {
   VAR_16 = VAR_9;
  } else if (VAR_15->op & VAR_4) {
   VAR_16 = VAR_10;
  }

  switch (FUNC_2(&VAR_14->Z, VAR_16)) {
   case 129:
    if (VAR_16 == VAR_9) {
     FUNC_3(&VAR_14->Z);
     return VAR_0;
    }
   case 128:
    if (VAR_14->Z.avail_in) {
     FUNC_8(VAR_14->buffer.data, VAR_14->buffer.data + VAR_14->buffer.used - VAR_14->Z.avail_in, VAR_14->Z.avail_in);
    }
    VAR_14->buffer.free += VAR_14->buffer.used - VAR_14->Z.avail_in;
    VAR_14->buffer.used = VAR_14->Z.avail_in;
    VAR_15->out.used = VAR_15->out.size - VAR_14->Z.avail_out;
    break;
   default:
    FUNC_3(&VAR_14->Z);
    return VAR_0;
  }

  if (VAR_15->op & VAR_3) {
   FUNC_3(&VAR_14->Z);
  }
 }

 return VAR_6;
}
