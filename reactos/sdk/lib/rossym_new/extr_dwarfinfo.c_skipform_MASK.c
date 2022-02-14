
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uchar ;
struct TYPE_2__ {int b; int s; int c; } ;
typedef TYPE_1__ DwarfVal ;
typedef int DwarfBuf ;
typedef int Dwarf ;


 scalar_t__ FUNC_0 (int *,int,int *) ;
 scalar_t__ FUNC_1 (int *,int *,int,int *) ;
 scalar_t__ FUNC_2 (int *,int,int *) ;
 scalar_t__ FUNC_3 (int *,int,int ,int *,int*) ;

__attribute__((used)) static int
FUNC_4(Dwarf *VAR_0, DwarfBuf *VAR_1, int VAR_2)
{
    int VAR_3;
    DwarfVal VAR_4;

    if(FUNC_3(VAR_1, VAR_2, 0, &VAR_4.c, &VAR_3) < 0
       && FUNC_2(VAR_1, VAR_2, (uchar*)&VAR_4) < 0
       && FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_4.s) < 0
       && FUNC_0(VAR_1, VAR_2, &VAR_4.b) < 0)
        return -1;
    return 0;
}
