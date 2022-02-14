
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IndexTupleData ;
typedef int IndexTuple ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 char* FUNC_2 (int) ;

IndexTupleData *
FUNC_3(IndexTuple *VAR_0, int VAR_1, int *VAR_2)
{
 char *VAR_3,
      *VAR_4;
 int VAR_5;

 *VAR_2 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  *VAR_2 += FUNC_0(VAR_0[VAR_5]);

 VAR_3 = VAR_4 = FUNC_2(*VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
 {
  FUNC_1(VAR_3, VAR_0[VAR_5], FUNC_0(VAR_0[VAR_5]));
  VAR_3 += FUNC_0(VAR_0[VAR_5]);
 }

 return (IndexTupleData *) VAR_4;
}
