
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* chksum; unsigned char* buf; } ;
typedef TYPE_1__ md2_state ;


 int* VAR_0 ;

__attribute__((used)) static void FUNC_0(md2_state *VAR_1)
{
   int VAR_2;
   unsigned char VAR_3;
   VAR_3 = VAR_1->chksum[15];
   for (VAR_2 = 0; VAR_2 < 16; VAR_2++) {




       VAR_3 = (VAR_1->chksum[VAR_2] ^= VAR_0[(int)(VAR_1->buf[VAR_2] ^ VAR_3)] & 255);
   }
}
