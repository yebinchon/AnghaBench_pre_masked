
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *,long,int,int ,int,int ) ;
 long FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(int VAR_6)
{
 long VAR_7;

 VAR_7 = FUNC_1(VAR_4);
 if (VAR_7 == -1)
  return -1;
 VAR_5 = FUNC_0(((void*)0), VAR_7, VAR_3|VAR_2, VAR_1, VAR_6, 0);
 return (VAR_5 == VAR_0) ? -1 : 0;
}
