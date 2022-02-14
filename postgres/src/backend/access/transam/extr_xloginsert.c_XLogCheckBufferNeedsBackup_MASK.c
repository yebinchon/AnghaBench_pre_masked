
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ XLogRecPtr ;
typedef int Page ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*,int*) ;
 scalar_t__ FUNC_2 (int ) ;

bool
FUNC_3(Buffer VAR_0)
{
 XLogRecPtr VAR_1;
 bool VAR_2;
 Page VAR_3;

 FUNC_1(&VAR_1, &VAR_2);

 VAR_3 = FUNC_0(VAR_0);

 if (VAR_2 && FUNC_2(VAR_3) <= VAR_1)
  return 1;

 return 0;
}
