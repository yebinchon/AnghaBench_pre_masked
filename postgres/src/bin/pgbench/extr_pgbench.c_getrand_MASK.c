
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_3__ {int xseed; } ;
typedef TYPE_1__ RandomState ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int64
FUNC_1(RandomState *VAR_0, int64 VAR_1, int64 VAR_2)
{
 return VAR_1 + (int64) ((VAR_2 - VAR_1 + 1) * FUNC_0(VAR_0->xseed));
}
