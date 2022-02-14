
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uchar ;
struct TYPE_2__ {int b; int s; int c; } ;
typedef TYPE_1__ DwarfVal ;
typedef int DwarfBuf ;


 scalar_t__ FUNC_0 (int *,int,int *) ;
 scalar_t__ FUNC_1 (int *,int,int *) ;
 scalar_t__ FUNC_2 (int *,int,int *) ;
 scalar_t__ FUNC_3 (int *,int,int ,int *,int*) ;

__attribute__((used)) static int
FUNC_4(DwarfBuf *VAR_0, int VAR_1)
{
 int VAR_2;
 DwarfVal VAR_3;

 if(FUNC_3(VAR_0, VAR_1, 0, &VAR_3.c, &VAR_2) < 0
 && FUNC_2(VAR_0, VAR_1, (uchar*)&VAR_3) < 0
 && FUNC_1(VAR_0, VAR_1, &VAR_3.s) < 0
 && FUNC_0(VAR_0, VAR_1, &VAR_3.b) < 0)
  return -1;
 return 0;
}
