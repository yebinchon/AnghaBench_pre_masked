
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int errcode_t ;


 int FUNC_0 (int ,int ,char*,unsigned long,...) ;

void FUNC_1(errcode_t VAR_0, unsigned long VAR_1,
   const char *VAR_2)
{

 if (VAR_2)
  FUNC_0(0, VAR_0, "#%lu for %s", VAR_1, VAR_2);
 else
  FUNC_0(0, VAR_0, "#%lu", VAR_1);

}
