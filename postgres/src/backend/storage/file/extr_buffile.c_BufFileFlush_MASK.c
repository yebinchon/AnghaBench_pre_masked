
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dirty; } ;
typedef TYPE_1__ BufFile ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(BufFile *VAR_1)
{
 if (VAR_1->dirty)
 {
  FUNC_0(VAR_1);
  if (VAR_1->dirty)
   return VAR_0;
 }

 return 0;
}
