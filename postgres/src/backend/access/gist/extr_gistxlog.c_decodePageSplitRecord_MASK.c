
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ IndexTuple ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int*,char*,int) ;
 scalar_t__* FUNC_3 (int) ;

__attribute__((used)) static IndexTuple *
FUNC_4(char *VAR_0, int VAR_1, int *VAR_2)
{
 char *VAR_3;
 int VAR_4 = 0;
 IndexTuple *VAR_5;


 FUNC_2(VAR_2, VAR_0, sizeof(int));
 VAR_3 = VAR_0 + sizeof(int);

 VAR_5 = FUNC_3(*VAR_2 * sizeof(IndexTuple));

 for (VAR_4 = 0; VAR_4 < *VAR_2; VAR_4++)
 {
  FUNC_0(VAR_3 - VAR_0 < VAR_1);
  VAR_5[VAR_4] = (IndexTuple) VAR_3;
  VAR_3 += FUNC_1((IndexTuple) VAR_3);
 }
 FUNC_0(VAR_3 - VAR_0 == VAR_1);

 return VAR_5;
}
