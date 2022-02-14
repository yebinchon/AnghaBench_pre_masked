
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,int,int*) ;
 int * FUNC_5 (int *,int *) ;
 int * FUNC_6 (int ,int,int,int) ;

__attribute__((used)) static text *
FUNC_7(text *VAR_3, text *VAR_4, int VAR_5, int VAR_6)
{
 text *VAR_7;
 text *VAR_8;
 text *VAR_9;
 int VAR_10;






 if (VAR_5 <= 0)
  FUNC_1(VAR_2,
    (FUNC_2(VAR_1),
     FUNC_3("negative substring length not allowed")));
 if (FUNC_4(VAR_5, VAR_6, &VAR_10))
  FUNC_1(VAR_2,
    (FUNC_2(VAR_0),
     FUNC_3("integer out of range")));

 VAR_8 = FUNC_6(FUNC_0(VAR_3), 1, VAR_5 - 1, 0);
 VAR_9 = FUNC_6(FUNC_0(VAR_3), VAR_10, -1, 1);
 VAR_7 = FUNC_5(VAR_8, VAR_4);
 VAR_7 = FUNC_5(VAR_7, VAR_9);

 return VAR_7;
}
