
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SortSupport ;
typedef scalar_t__ Pointer ;
typedef scalar_t__ Numeric ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int
FUNC_4(Datum VAR_0, Datum VAR_1, SortSupport VAR_2)
{
 Numeric VAR_3 = FUNC_0(VAR_0);
 Numeric VAR_4 = FUNC_0(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_4);

 if ((Pointer) VAR_3 != FUNC_1(VAR_0))
  FUNC_3(VAR_3);
 if ((Pointer) VAR_4 != FUNC_1(VAR_1))
  FUNC_3(VAR_4);

 return VAR_5;
}
