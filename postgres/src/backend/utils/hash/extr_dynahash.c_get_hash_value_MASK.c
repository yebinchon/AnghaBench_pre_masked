
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int keysize; int (* hash ) (void const*,int ) ;} ;
typedef TYPE_1__ HTAB ;


 int FUNC_0 (void const*,int ) ;

uint32
FUNC_1(HTAB *VAR_0, const void *VAR_1)
{
 return VAR_0->hash(VAR_1, VAR_0->keysize);
}
