
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int written; } ;
typedef TYPE_1__ ME_OutStream ;
typedef int LONG ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static LONG
FUNC_2(ME_OutStream *VAR_0)
{
  LONG VAR_1 = VAR_0->written;
  FUNC_0("total length = %u\n", VAR_1);

  FUNC_1(VAR_0);
  return VAR_1;
}
