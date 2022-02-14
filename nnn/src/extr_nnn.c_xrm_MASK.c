
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ trash; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 char FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,char*,int *,int ) ;

__attribute__((used)) static void FUNC_2(char *VAR_3)
{
 if (VAR_2.trash)
  FUNC_1("trash-put", VAR_3, ((void*)0), ((void*)0), VAR_1);
 else {
  char VAR_4[] = "-ir";

  VAR_4[1] = FUNC_0(VAR_0);
  FUNC_1("rm", VAR_4, VAR_3, ((void*)0), VAR_1);
 }
}
