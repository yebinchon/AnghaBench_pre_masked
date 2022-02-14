
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1(FILE *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 if (VAR_3 == VAR_0)
  FUNC_0(VAR_2, "*:");
 else
  FUNC_0(VAR_2, "%u:", VAR_3);

 if (VAR_4 == VAR_1)
  FUNC_0(VAR_2, "*");
 else
  FUNC_0(VAR_2, "%u", VAR_4);
}
