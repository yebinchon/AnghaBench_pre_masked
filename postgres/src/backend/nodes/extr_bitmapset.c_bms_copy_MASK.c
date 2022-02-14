
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nwords; } ;
typedef TYPE_1__ Bitmapset ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__ const*,size_t) ;
 scalar_t__ FUNC_2 (size_t) ;

Bitmapset *
FUNC_3(const Bitmapset *VAR_0)
{
 Bitmapset *VAR_1;
 size_t VAR_2;

 if (VAR_0 == ((void*)0))
  return ((void*)0);
 VAR_2 = FUNC_0(VAR_0->nwords);
 VAR_1 = (Bitmapset *) FUNC_2(VAR_2);
 FUNC_1(VAR_1, VAR_0, VAR_2);
 return VAR_1;
}
