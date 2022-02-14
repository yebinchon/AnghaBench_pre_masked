
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VarString ;
typedef int SortSupport ;
typedef scalar_t__ Datum ;


 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(Datum VAR_0, Datum VAR_1, SortSupport VAR_2)
{
 VarString *VAR_3 = FUNC_0(VAR_0);
 VarString *VAR_4 = FUNC_0(VAR_1);
 char *VAR_5,
      *VAR_6;
 int VAR_7,
    VAR_8,
    VAR_9;

 VAR_5 = FUNC_3(VAR_3);
 VAR_6 = FUNC_3(VAR_4);

 VAR_7 = FUNC_4(VAR_3);
 VAR_8 = FUNC_4(VAR_4);

 VAR_9 = FUNC_5(VAR_5, VAR_6, FUNC_1(VAR_7, VAR_8));
 if ((VAR_9 == 0) && (VAR_7 != VAR_8))
  VAR_9 = (VAR_7 < VAR_8) ? -1 : 1;


 if (FUNC_2(VAR_3) != VAR_0)
  FUNC_6(VAR_3);
 if (FUNC_2(VAR_4) != VAR_1)
  FUNC_6(VAR_4);

 return VAR_9;
}
