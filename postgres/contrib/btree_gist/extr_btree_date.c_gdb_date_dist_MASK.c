
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float8 ;
typedef int FmgrInfo ;
typedef int Datum ;
typedef int DateADT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static float8
FUNC_4(const void *VAR_1, const void *VAR_2, FmgrInfo *VAR_3)
{

 Datum VAR_4 = FUNC_3(VAR_0,
             FUNC_1(*((const DateADT *) VAR_1)),
             FUNC_1(*((const DateADT *) VAR_2)));

 return (float8) FUNC_0(FUNC_2(VAR_4));
}
