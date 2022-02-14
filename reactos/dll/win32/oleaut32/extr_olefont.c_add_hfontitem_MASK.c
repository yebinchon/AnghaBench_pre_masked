
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int int_refs; int total_refs; int entry; int gdiFont; } ;
typedef int HRESULT ;
typedef TYPE_1__ HFONTItem ;
typedef int HFONT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static HRESULT FUNC_5(HFONT VAR_4)
{
    HFONTItem *VAR_5 = FUNC_2(FUNC_1(), 0, sizeof(*VAR_5));

    if(!VAR_5) return VAR_0;

    VAR_5->int_refs = 1;
    VAR_5->total_refs = 1;
    VAR_5->gdiFont = VAR_4;
    FUNC_0(&VAR_1);
    FUNC_4(&VAR_2,&VAR_5->entry);
    FUNC_3(&VAR_1);
    return VAR_3;
}
