
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int int32 ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ,char*,int ,int ) ;

__attribute__((used)) static int32
FUNC_6(text *VAR_1, text *VAR_2, Oid VAR_3)
{
 char *VAR_4,
      *VAR_5;
 int32 VAR_6;
 VAR_4 = FUNC_3(FUNC_0(VAR_1), FUNC_1(VAR_1), VAR_0);
 VAR_5 = FUNC_3(FUNC_0(VAR_2), FUNC_1(VAR_2), VAR_0);

 VAR_6 = FUNC_5(VAR_4, FUNC_4(VAR_4),
      VAR_5, FUNC_4(VAR_5),
      VAR_3);

 FUNC_2(VAR_4);
 FUNC_2(VAR_5);

 return VAR_6;
}
