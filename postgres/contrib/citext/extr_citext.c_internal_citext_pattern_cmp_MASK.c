
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int int32 ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*,void*,int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int32
FUNC_7(text *VAR_1, text *VAR_2, Oid VAR_3)
{
 char *VAR_4,
      *VAR_5;
 int VAR_6,
    VAR_7;
 int32 VAR_8;

 VAR_4 = FUNC_5(FUNC_1(VAR_1), FUNC_2(VAR_1), VAR_0);
 VAR_5 = FUNC_5(FUNC_1(VAR_2), FUNC_2(VAR_2), VAR_0);

 VAR_6 = FUNC_6(VAR_4);
 VAR_7 = FUNC_6(VAR_5);

 VAR_8 = FUNC_3((void *) VAR_4, (void *) VAR_5, FUNC_0(VAR_6, VAR_7));
 if (VAR_8 == 0)
 {
  if (VAR_6 < VAR_7)
   VAR_8 = -1;
  else if (VAR_6 > VAR_7)
   VAR_8 = 1;
 }

 FUNC_4(VAR_4);
 FUNC_4(VAR_5);

 return VAR_8;
}
