
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static char *
FUNC_2(int32 VAR_1)
{
 char *VAR_2 = (char *) FUNC_0(64);

 if (VAR_1 > VAR_0)
  FUNC_1(VAR_2, 64, "(%d)", (int) (VAR_1 - VAR_0));
 else
  *VAR_2 = '\0';

 return VAR_2;
}
