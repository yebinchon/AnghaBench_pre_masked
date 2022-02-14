
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int size; int * state; } ;
struct TYPE_9__ {TYPE_2__ sha256; } ;
struct TYPE_7__ {int* u8; int * u32; int * u64; } ;
struct TYPE_10__ {TYPE_3__ state; TYPE_1__ buffer; } ;
typedef TYPE_4__ lzma_check_state ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*) ;

extern void
FUNC_3(lzma_check_state *VAR_0)
{


 size_t VAR_1 = VAR_0->state.sha256.size & 0x3F;
 VAR_0->buffer.u8[VAR_1++] = 0x80;

 while (VAR_1 != 64 - 8) {
  if (VAR_1 == 64) {
   FUNC_2(VAR_0);
   VAR_1 = 0;
  }

  VAR_0->buffer.u8[VAR_1++] = 0x00;
 }


 VAR_0->state.sha256.size *= 8;

 VAR_0->buffer.u64[(64 - 8) / 8] = FUNC_1(VAR_0->state.sha256.size);

 FUNC_2(VAR_0);

 for (size_t VAR_2 = 0; VAR_2 < 8; ++VAR_2)
  VAR_0->buffer.u32[VAR_2] = FUNC_0(VAR_0->state.sha256.state[VAR_2]);

 return;
}
