
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ indata; scalar_t__ inend; } ;
typedef TYPE_1__ stbfile ;


 int FUNC_0 (void*,scalar_t__,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(stbfile *VAR_0, void *VAR_1, unsigned int VAR_2)
{
   if (VAR_0->indata + VAR_2 > VAR_0->inend)
      VAR_2 = (unsigned int) (VAR_0->inend - VAR_0->indata);
   FUNC_0(VAR_1, VAR_0->indata, VAR_2);
   VAR_0->indata += VAR_2;
   return VAR_2;
}
