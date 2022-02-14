
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int keysize; int (* hash ) (void const*,int ) ;} ;
typedef TYPE_1__ HTAB ;
typedef int HASHACTION ;


 void* FUNC_0 (TYPE_1__*,void const*,int ,int ,int*) ;
 int FUNC_1 (void const*,int ) ;

void *
FUNC_2(HTAB *VAR_0,
   const void *VAR_1,
   HASHACTION VAR_2,
   bool *VAR_3)
{
 return FUNC_0(VAR_0,
            VAR_1,
            VAR_0->hash(VAR_1, VAR_0->keysize),
            VAR_2,
            VAR_3);
}
