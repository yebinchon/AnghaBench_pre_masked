
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float8 ;
typedef int Timestamp ;
typedef int Interval ;
typedef int FmgrInfo ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int const) ;
 int FUNC_5 (int const) ;
 int FUNC_6 () ;
 int VAR_0 ;

__attribute__((used)) static float8
FUNC_7(const void *VAR_1, const void *VAR_2, FmgrInfo *VAR_3)
{
 const Timestamp *VAR_4 = (const Timestamp *) VAR_1;
 const Timestamp *VAR_5 = (const Timestamp *) VAR_2;
 Interval *VAR_6;

 if (FUNC_4(*VAR_4) || FUNC_4(*VAR_5))
  return FUNC_6();

 VAR_6 = FUNC_1(FUNC_2(VAR_0,
             FUNC_5(*VAR_4),
             FUNC_5(*VAR_5)));
 return (float8) FUNC_0(FUNC_3(VAR_6));
}
