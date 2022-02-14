
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AttrNumber ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int) ;
 char* FUNC_2 (int*) ;

AttrNumber *
FUNC_3(int VAR_0)
{
 int VAR_1,
    VAR_2;
 const char *VAR_3;
 AttrNumber *VAR_4;

 if (VAR_0 <= 0)
  return ((void*)0);

 VAR_4 = (AttrNumber *) FUNC_1(VAR_0 * sizeof(AttrNumber));
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
 {
  VAR_3 = FUNC_2(&VAR_1);
  VAR_4[VAR_2] = FUNC_0(VAR_3);
 }

 return VAR_4;
}
