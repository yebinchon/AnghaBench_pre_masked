
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;

int64_t FUNC_3(FILE *VAR_3)
{
 int64_t VAR_4 = FUNC_2(VAR_3);
 int64_t VAR_5;
 int VAR_6 = 0;

 if (FUNC_0(VAR_3, 0, VAR_0) == -1)
  return -1;

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 == -1)
  VAR_6 = VAR_2;

 if (FUNC_1(VAR_3, VAR_4, VAR_1) != 0 && VAR_6 != 0)
  VAR_2 = VAR_6;

 return VAR_5;
}
