
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int xseed; } ;
struct TYPE_4__ {unsigned short* xseed; } ;
typedef TYPE_1__ RandomState ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(RandomState *VAR_1)
{
 VAR_1->xseed[0] = (unsigned short)
  (FUNC_0(VAR_0.xseed) & 0xFFFF);
 VAR_1->xseed[1] = (unsigned short)
  (FUNC_0(VAR_0.xseed) & 0xFFFF);
 VAR_1->xseed[2] = (unsigned short)
  (FUNC_0(VAR_0.xseed) & 0xFFFF);
}
