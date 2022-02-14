
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int line; } ;
typedef TYPE_1__* LinePtr ;
typedef int FileInfoListPtr ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

int
FUNC_2(LinePtr VAR_0, FileInfoListPtr VAR_1)
{
 FUNC_1(VAR_1);
 if (FUNC_0(VAR_1, VAR_0->line) < 0)
  return (-1);
 return (0);
}
