
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* cmdStatus; } ;
typedef TYPE_1__ PGresult ;
typedef int Oid ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 unsigned long FUNC_1 (char*,char**,int) ;

Oid
FUNC_2(const PGresult *VAR_1)
{
 char *VAR_2 = ((void*)0);
 unsigned long VAR_3;

 if (!VAR_1 ||
  FUNC_0(VAR_1->cmdStatus, "INSERT ", 7) != 0 ||
  VAR_1->cmdStatus[7] < '0' ||
  VAR_1->cmdStatus[7] > '9')
  return VAR_0;

 VAR_3 = FUNC_1(VAR_1->cmdStatus + 7, &VAR_2, 10);

 if (!VAR_2 || (*VAR_2 != ' ' && *VAR_2 != '\0'))
  return VAR_0;
 else
  return (Oid) VAR_3;
}
