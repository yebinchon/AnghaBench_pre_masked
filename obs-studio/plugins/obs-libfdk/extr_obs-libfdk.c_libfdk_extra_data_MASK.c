
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t confSize; int * confBuf; } ;
struct TYPE_4__ {TYPE_1__ info; } ;
typedef TYPE_2__ libfdk_encoder_t ;



__attribute__((used)) static bool FUNC_0(void *VAR_0, uint8_t **VAR_1, size_t *VAR_2)
{
 libfdk_encoder_t *VAR_3 = VAR_0;

 *VAR_2 = VAR_3->info.confSize;
 *VAR_1 = VAR_3->info.confBuf;

 return 1;
}
