
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;
typedef int ComboCidKeyData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_2 ;

void
FUNC_2(Size VAR_3, char *VAR_4)
{
 char *VAR_5;


 *(int *) VAR_4 = VAR_2;


 VAR_5 = VAR_4 + sizeof(int) +
  (sizeof(ComboCidKeyData) * VAR_2);
 if (VAR_5 < VAR_4 || VAR_5 > VAR_4 + VAR_3)
  FUNC_0(VAR_0, "not enough space to serialize ComboCID state");


 if (VAR_2 > 0)
  FUNC_1(VAR_4 + sizeof(int), VAR_1,
      (sizeof(ComboCidKeyData) * VAR_2));
}
