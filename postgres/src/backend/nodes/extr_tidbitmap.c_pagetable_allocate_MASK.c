
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ctx; scalar_t__ private_data; } ;
typedef TYPE_1__ pagetable_hash ;
struct TYPE_8__ {void* ptentry; } ;
struct TYPE_7__ {int dsapagetable; int * dsa; int dsapagetableold; } ;
typedef TYPE_2__ TIDBitmap ;
typedef scalar_t__ Size ;
typedef TYPE_3__ PTEntryArray ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (int *,scalar_t__,int) ;
 TYPE_3__* FUNC_2 (int *,int ) ;

__attribute__((used)) static inline void *
FUNC_3(pagetable_hash *VAR_4, Size VAR_5)
{
 TIDBitmap *VAR_6 = (TIDBitmap *) VAR_4->private_data;
 PTEntryArray *VAR_7;

 if (VAR_6->dsa == ((void*)0))
  return FUNC_0(VAR_4->ctx, VAR_5,
            VAR_2 | VAR_3);





 VAR_6->dsapagetableold = VAR_6->dsapagetable;
 VAR_6->dsapagetable = FUNC_1(VAR_6->dsa,
             sizeof(PTEntryArray) + VAR_5,
             VAR_0 | VAR_1);
 VAR_7 = FUNC_2(VAR_6->dsa, VAR_6->dsapagetable);

 return VAR_7->ptentry;
}
