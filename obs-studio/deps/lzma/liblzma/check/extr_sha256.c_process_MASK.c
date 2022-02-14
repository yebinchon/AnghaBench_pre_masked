
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int state; } ;
struct TYPE_7__ {TYPE_3__ sha256; } ;
struct TYPE_6__ {int * u32; } ;
struct TYPE_9__ {TYPE_2__ state; TYPE_1__ buffer; } ;
typedef TYPE_4__ lzma_check_state ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(lzma_check_state *VAR_0)
{




 uint32_t VAR_1[16];

 for (size_t VAR_2 = 0; VAR_2 < 16; ++VAR_2)
  VAR_1[VAR_2] = FUNC_0(VAR_0->buffer.u32[VAR_2]);

 FUNC_1(VAR_0->state.sha256.state, VAR_1);


 return;
}
