
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_3__ {int has_catalog_changes; } ;
typedef TYPE_1__ ReorderBufferTXN ;
typedef int ReorderBuffer ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int,int *,int ,int) ;

bool
FUNC_1(ReorderBuffer *VAR_1, TransactionId VAR_2)
{
 ReorderBufferTXN *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2, 0, ((void*)0), VAR_0,
        0);
 if (VAR_3 == ((void*)0))
  return 0;

 return VAR_3->has_catalog_changes;
}
