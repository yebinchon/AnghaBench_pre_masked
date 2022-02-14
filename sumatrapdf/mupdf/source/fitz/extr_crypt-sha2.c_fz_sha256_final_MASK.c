
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* u8; int* u32; } ;
struct TYPE_6__ {int* count; int* state; TYPE_1__ buffer; } ;
typedef TYPE_2__ fz_sha256 ;


 void* FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned char*,int*,int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (int*,int*) ;

void FUNC_5(fz_sha256 *VAR_0, unsigned char VAR_1[32])
{


 unsigned int VAR_2 = VAR_0->count[0] & 0x3F;
 VAR_0->buffer.u8[VAR_2++] = 0x80;

 while (VAR_2 != 56)
 {
  if (VAR_2 == 64)
  {
   FUNC_4(VAR_0->state, VAR_0->buffer.u32);
   VAR_2 = 0;
  }
  VAR_0->buffer.u8[VAR_2++] = 0x00;
 }


 VAR_0->count[1] = (VAR_0->count[1] << 3) + (VAR_0->count[0] >> 29);
 VAR_0->count[0] = VAR_0->count[0] << 3;

 if (!FUNC_1())
 {
  VAR_0->buffer.u32[14] = FUNC_0(VAR_0->count[1]);
  VAR_0->buffer.u32[15] = FUNC_0(VAR_0->count[0]);
 }
 else
 {
  VAR_0->buffer.u32[14] = VAR_0->count[1];
  VAR_0->buffer.u32[15] = VAR_0->count[0];
 }
 FUNC_4(VAR_0->state, VAR_0->buffer.u32);

 if (!FUNC_1())
  for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
   VAR_0->state[VAR_2] = FUNC_0(VAR_0->state[VAR_2]);

 FUNC_2(VAR_1, &VAR_0->state[0], 32);
 FUNC_3(VAR_0, 0, sizeof(fz_sha256));
}
