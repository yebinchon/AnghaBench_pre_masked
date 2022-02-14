
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int check; scalar_t__ version; } ;
typedef TYPE_1__ lzma_stream_flags ;



__attribute__((used)) static bool
FUNC_0(lzma_stream_flags *VAR_0, const uint8_t *VAR_1)
{

 if (VAR_1[0] != 0x00 || (VAR_1[1] & 0xF0))
  return 1;

 VAR_0->version = 0;
 VAR_0->check = VAR_1[1] & 0x0F;

 return 0;
}
