
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; size_t* entries; int isnull; int attr; scalar_t__* dontcare; } ;
typedef int IndexTuple ;
typedef TYPE_1__ GistSplitUnion ;
typedef int GISTSTATE ;


 int FUNC_0 (int *,int *,int,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(GISTSTATE *VAR_0, IndexTuple *VAR_1,
       GistSplitUnion *VAR_2)
{
 IndexTuple *VAR_3;
 int VAR_4,
    VAR_5 = 0;

 VAR_3 = (IndexTuple *) FUNC_1(sizeof(IndexTuple) * VAR_2->len);

 for (VAR_4 = 0; VAR_4 < VAR_2->len; VAR_4++)
 {
  if (VAR_2->dontcare && VAR_2->dontcare[VAR_2->entries[VAR_4]])
   continue;

  VAR_3[VAR_5++] = VAR_1[VAR_2->entries[VAR_4] - 1];
 }

 FUNC_0(VAR_0, VAR_3, VAR_5,
        VAR_2->attr, VAR_2->isnull);

 FUNC_2(VAR_3);
}
