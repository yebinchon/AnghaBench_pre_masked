
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timelib_tzinfo ;
typedef int timelib_tzdb ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char*,int const*,int*) ;
 int VAR_1 ;
 int FUNC_4 (int ,int,int *,int ,int ) ;
 int FUNC_5 (int ,char*,int ,int *) ;
 int * FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static timelib_tzinfo *FUNC_7(char *VAR_2, const timelib_tzdb *VAR_3)
{
 timelib_tzinfo *VAR_4;
 int VAR_5;

 if(!FUNC_1(VAR_1)) {
  FUNC_0(FUNC_1(VAR_1));
  FUNC_4(FUNC_1(VAR_1), 4, ((void*)0), VAR_0, 0);
 }

 if ((VAR_4 = FUNC_6(FUNC_1(VAR_1), VAR_2, FUNC_2(VAR_2))) != ((void*)0)) {
  return VAR_4;
 }

 VAR_4 = FUNC_3(VAR_2, VAR_3, &VAR_5);
 if (VAR_4) {
  FUNC_5(FUNC_1(VAR_1), VAR_2, FUNC_2(VAR_2), VAR_4);
 }
 return VAR_4;
}
