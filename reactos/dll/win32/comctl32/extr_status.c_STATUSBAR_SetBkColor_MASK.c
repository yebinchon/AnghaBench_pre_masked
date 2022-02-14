
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int clrBk; int Self; } ;
typedef TYPE_1__ STATUS_INFO ;
typedef int COLORREF ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static COLORREF
FUNC_2 (STATUS_INFO *VAR_1, COLORREF VAR_2)
{
    COLORREF VAR_3;

    VAR_3 = VAR_1->clrBk;
    VAR_1->clrBk = VAR_2;
    FUNC_0(VAR_1->Self, ((void*)0), VAR_0);

    FUNC_1("CREF: %08x -> %08x\n", VAR_3, VAR_1->clrBk);
    return VAR_3;
}
