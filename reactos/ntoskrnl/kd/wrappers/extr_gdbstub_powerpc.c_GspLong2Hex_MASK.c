
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int PCHAR ;
typedef int LONG ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;

VOID
FUNC_1(PCHAR *VAR_1,
  LONG VAR_2)
{
  LONG VAR_3;

  VAR_3 = (((VAR_2 >> 0) & 0xff) << 24) |
         (((VAR_2 >> 8) & 0xff) << 16) |
         (((VAR_2 >> 16) & 0xff) << 8) |
         (((VAR_2 >> 24) & 0xff) << 0);
  *VAR_1 = FUNC_0((PCHAR) &VAR_3, *VAR_1, 4, VAR_0);
}
