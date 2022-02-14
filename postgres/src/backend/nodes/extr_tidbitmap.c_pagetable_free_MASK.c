
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ private_data; } ;
typedef TYPE_1__ pagetable_hash ;
struct TYPE_5__ {int dsapagetableold; int * dsa; } ;
typedef TYPE_2__ TIDBitmap ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static inline void
FUNC_3(pagetable_hash *VAR_1, void *VAR_2)
{
 TIDBitmap *VAR_3 = (TIDBitmap *) VAR_1->private_data;


 if (VAR_3->dsa == ((void*)0))
  FUNC_2(VAR_2);
 else if (FUNC_0(VAR_3->dsapagetableold))
 {
  FUNC_1(VAR_3->dsa, VAR_3->dsapagetableold);
  VAR_3->dsapagetableold = VAR_0;
 }
}
