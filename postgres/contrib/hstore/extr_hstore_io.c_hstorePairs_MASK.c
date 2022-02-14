
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32 ;
typedef int Pairs ;
typedef int HStore ;
typedef int HEntry ;


 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,char*,char*,int ) ;
 int FUNC_3 (int *,scalar_t__,char*,char*) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__) ;
 char* FUNC_6 (int *) ;
 int * FUNC_7 (scalar_t__) ;

HStore *
FUNC_8(Pairs *VAR_0, int32 VAR_1, int32 VAR_2)
{
 HStore *VAR_3;
 HEntry *VAR_4;
 char *VAR_5;
 char *VAR_6;
 int32 VAR_7;
 int32 VAR_8;

 VAR_7 = FUNC_1(VAR_1, VAR_2);
 VAR_3 = FUNC_7(VAR_7);
 FUNC_5(VAR_3, VAR_7);
 FUNC_4(VAR_3, VAR_1);

 if (VAR_1 == 0)
  return VAR_3;

 VAR_4 = FUNC_0(VAR_3);
 VAR_6 = VAR_5 = FUNC_6(VAR_3);

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  FUNC_2(VAR_4, VAR_6, VAR_5, VAR_0[VAR_8]);

 FUNC_3(VAR_3, VAR_1, VAR_6, VAR_5);

 return VAR_3;
}
