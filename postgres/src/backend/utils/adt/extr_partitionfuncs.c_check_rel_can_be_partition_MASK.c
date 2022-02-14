
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int FUNC_0 (int ) ;
 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 char FUNC_3 (int ) ;

__attribute__((used)) static bool
FUNC_4(Oid VAR_3)
{
 char VAR_4;
 bool VAR_5;


 if (!FUNC_1(VAR_2, FUNC_0(VAR_3)))
  return 0;

 VAR_4 = FUNC_3(VAR_3);
 VAR_5 = FUNC_2(VAR_3);


 if (!VAR_5 &&
  VAR_4 != VAR_1 &&
  VAR_4 != VAR_0)
  return 0;

 return 1;
}
