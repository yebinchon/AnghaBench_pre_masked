
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32 ;
typedef int gbtree_vinfo ;
typedef int bytea ;


 char* FUNC_0 (int const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (char*,char*,scalar_t__) ;

__attribute__((used)) static bool
FUNC_3(const bytea *VAR_1, const bytea *VAR_2, const gbtree_vinfo *VAR_3)
{
 bool VAR_4 = 0;
 int32 VAR_5 = FUNC_1(VAR_2) - VAR_0;
 int32 VAR_6 = FUNC_1(VAR_1) - VAR_0;

 if (VAR_6 <= VAR_5)
 {
  char *VAR_7 = FUNC_0(VAR_2);
  char *VAR_8 = FUNC_0(VAR_1);

  VAR_4 = (FUNC_2(VAR_7, VAR_8, VAR_6) == 0);
 }

 return VAR_4;
}
