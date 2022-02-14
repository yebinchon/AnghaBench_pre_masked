
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cfFormat; int dwAspect; int lindex; int tymed; int ptd; } ;
typedef TYPE_1__ FORMATETC ;


 int FUNC_0 (char*,char*,int,int ,int,int,int) ;

__attribute__((used)) static inline char *FUNC_1(FORMATETC *VAR_0)
{
    static char VAR_1[100];

    FUNC_0(VAR_1, "cf %04x ptd %p aspect %x lindex %d tymed %x",
             VAR_0->cfFormat, VAR_0->ptd, VAR_0->dwAspect, VAR_0->lindex, VAR_0->tymed);
    return VAR_1;
}
