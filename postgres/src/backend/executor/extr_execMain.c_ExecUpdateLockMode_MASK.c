
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ri_RelationDesc; } ;
typedef TYPE_1__ ResultRelInfo ;
typedef int LockTupleMode ;
typedef int EState ;
typedef int Bitmapset ;


 int * FUNC_0 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;

LockTupleMode
FUNC_3(EState *VAR_3, ResultRelInfo *VAR_4)
{
 Bitmapset *VAR_5;
 Bitmapset *VAR_6;






 VAR_6 = FUNC_0(VAR_4, VAR_3);
 VAR_5 = FUNC_1(VAR_4->ri_RelationDesc,
           VAR_0);

 if (FUNC_2(VAR_5, VAR_6))
  return VAR_1;

 return VAR_2;
}
