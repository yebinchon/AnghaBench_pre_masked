
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *) ;
 long FUNC_2 (char*,char**,int) ;

__attribute__((used)) static int FUNC_3(substring_t *VAR_5, int *VAR_6, int VAR_7)
{
 char *VAR_8;
 char *VAR_9;
 int VAR_10;
 long VAR_11;

 VAR_9 = FUNC_1(VAR_5);
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = 0;
 VAR_11 = FUNC_2(VAR_9, &VAR_8, VAR_7);
 if (VAR_8 == VAR_9)
  VAR_10 = -VAR_0;
 else if (VAR_11 < (long)VAR_4 || VAR_11 > (long)VAR_3)
  VAR_10 = -VAR_2;
 else
  *VAR_6 = (int) VAR_11;
 FUNC_0(VAR_9);
 return VAR_10;
}
