
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bytea ;
typedef int Datum ;
typedef int Const ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int * FUNC_3 (int ,int,int ,int,int ,int,int) ;
 int FUNC_4 (int ,char const*,size_t) ;
 int * FUNC_5 (scalar_t__) ;

__attribute__((used)) static Const *
FUNC_6(const char *VAR_3, size_t VAR_4)
{
 bytea *VAR_5 = FUNC_5(VAR_2 + VAR_4);
 Datum VAR_6;

 FUNC_4(FUNC_2(VAR_5), VAR_3, VAR_4);
 FUNC_1(VAR_5, VAR_2 + VAR_4);
 VAR_6 = FUNC_0(VAR_5);

 return FUNC_3(VAR_0, -1, VAR_1, -1, VAR_6, 0, 0);
}
