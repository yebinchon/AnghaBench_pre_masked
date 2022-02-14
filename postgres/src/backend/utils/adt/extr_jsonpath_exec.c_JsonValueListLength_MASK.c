
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int list; scalar_t__ singleton; } ;
typedef TYPE_1__ JsonValueList ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(const JsonValueList *VAR_0)
{
 return VAR_0->singleton ? 1 : FUNC_0(VAR_0->list);
}
