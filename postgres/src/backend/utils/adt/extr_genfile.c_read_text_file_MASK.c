
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int int64 ;
typedef int bytea ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int * FUNC_3 (char const*,int ,int ,int) ;

__attribute__((used)) static text *
FUNC_4(const char *VAR_1, int64 VAR_2, int64 VAR_3,
      bool VAR_4)
{
 bytea *VAR_5;

 VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);

 if (VAR_5 != ((void*)0))
 {

  FUNC_2(FUNC_0(VAR_5), FUNC_1(VAR_5) - VAR_0, 0);


  return (text *) VAR_5;
 }
 else
  return ((void*)0);
}
