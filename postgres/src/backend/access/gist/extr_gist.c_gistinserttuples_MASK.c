
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int buffer; } ;
struct TYPE_7__ {int is_build; int heapRel; int freespace; int r; } ;
typedef int OffsetNumber ;
typedef int List ;
typedef int IndexTuple ;
typedef int GISTSTATE ;
typedef TYPE_1__ GISTInsertState ;
typedef TYPE_2__ GISTInsertStack ;
typedef int Buffer ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int *,int *,int) ;
 int FUNC_5 (int ,int ,int *,int ,int *,int,int ,int *,int ,int **,int,int ,int ) ;

__attribute__((used)) static bool
FUNC_6(GISTInsertState *VAR_1, GISTInsertStack *VAR_2,
     GISTSTATE *VAR_3,
     IndexTuple *VAR_4, int VAR_5, OffsetNumber VAR_6,
     Buffer VAR_7, Buffer VAR_8,
     bool VAR_9, bool VAR_10)
{
 List *VAR_11;
 bool VAR_12;





 FUNC_1(VAR_1->r, ((void*)0), VAR_2->buffer);


 VAR_12 = FUNC_5(VAR_1->r, VAR_1->freespace, VAR_3,
          VAR_2->buffer,
          VAR_4, VAR_5,
          VAR_6, ((void*)0),
          VAR_7,
          &VAR_11,
          1,
          VAR_1->heapRel,
          VAR_1->is_build);






 if (FUNC_0(VAR_8))
  FUNC_3(VAR_8);
 if (FUNC_0(VAR_7) && VAR_10)
  FUNC_2(VAR_7, VAR_0);







 if (VAR_11)
  FUNC_4(VAR_1, VAR_2, VAR_3, VAR_11, VAR_9);
 else if (VAR_9)
  FUNC_2(VAR_2->buffer, VAR_0);

 return VAR_12;
}
