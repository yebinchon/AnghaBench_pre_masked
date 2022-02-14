
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WordEntryPos ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (void*,int,int,int ) ;

__attribute__((used)) static int
FUNC_4(WordEntryPos *VAR_3, int VAR_4)
{
 WordEntryPos *VAR_5,
      *VAR_6;

 if (VAR_4 <= 1)
  return VAR_4;

 FUNC_3((void *) VAR_3, VAR_4, sizeof(WordEntryPos), VAR_2);

 VAR_6 = VAR_3;
 VAR_5 = VAR_3 + 1;
 while (VAR_5 - VAR_3 < VAR_4)
 {
  if (FUNC_0(*VAR_5) != FUNC_0(*VAR_6))
  {
   VAR_6++;
   *VAR_6 = *VAR_5;
   if (VAR_6 - VAR_3 >= VAR_1 - 1 ||
    FUNC_0(*VAR_6) == VAR_0 - 1)
    break;
  }
  else if (FUNC_1(*VAR_5) > FUNC_1(*VAR_6))
   FUNC_2(*VAR_6, FUNC_1(*VAR_5));
  VAR_5++;
 }

 return VAR_6 + 1 - VAR_3;
}
