
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t i; size_t mx; unsigned char* z; } ;
struct TYPE_5__ {TYPE_1__ sIn; } ;
typedef TYPE_2__ ReCompiled ;



__attribute__((used)) static unsigned char FUNC_0(ReCompiled *VAR_0){
  return VAR_0->sIn.i<VAR_0->sIn.mx ? VAR_0->sIn.z[VAR_0->sIn.i] : 0;
}
