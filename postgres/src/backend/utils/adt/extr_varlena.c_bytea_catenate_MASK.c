
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bytea ;


 int FUNC_0 (int *,int) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static bytea *
FUNC_6(bytea *VAR_1, bytea *VAR_2)
{
 bytea *VAR_3;
 int VAR_4,
    VAR_5,
    VAR_6;
 char *VAR_7;

 VAR_4 = FUNC_3(VAR_1);
 VAR_5 = FUNC_3(VAR_2);


 if (VAR_4 < 0)
  VAR_4 = 0;
 if (VAR_5 < 0)
  VAR_5 = 0;

 VAR_6 = VAR_4 + VAR_5 + VAR_0;
 VAR_3 = (bytea *) FUNC_5(VAR_6);


 FUNC_0(VAR_3, VAR_6);


 VAR_7 = FUNC_1(VAR_3);
 if (VAR_4 > 0)
  FUNC_4(VAR_7, FUNC_2(VAR_1), VAR_4);
 if (VAR_5 > 0)
  FUNC_4(VAR_7 + VAR_4, FUNC_2(VAR_2), VAR_5);

 return VAR_3;
}
