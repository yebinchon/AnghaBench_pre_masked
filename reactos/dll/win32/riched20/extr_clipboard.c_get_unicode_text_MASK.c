
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_11__ {TYPE_3__* pPara; } ;
struct TYPE_8__ {int nCharOfs; TYPE_3__* next_para; } ;
struct TYPE_9__ {TYPE_1__ para; } ;
struct TYPE_10__ {TYPE_2__ member; } ;
typedef int ME_TextEditor ;
typedef TYPE_3__ ME_DisplayItem ;
typedef TYPE_4__ ME_Cursor ;
typedef int HGLOBAL ;
typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__ const*) ;
 int FUNC_4 (int *,int *,int,TYPE_4__ const*,int,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static HGLOBAL FUNC_5(ME_TextEditor *VAR_3, const ME_Cursor *VAR_4, int VAR_5)
{
    int VAR_6 = 0;
    WCHAR *VAR_7;
    HANDLE VAR_8;
    ME_DisplayItem *VAR_9;
    int VAR_10 = FUNC_3(VAR_4) + VAR_5;


    VAR_9 = VAR_4->pPara;
    while((VAR_9 = VAR_9->member.para.next_para) &&
          VAR_9->member.para.nCharOfs <= VAR_10)
        VAR_6++;

    VAR_8 = FUNC_0(VAR_1, sizeof(WCHAR) * (VAR_5 + VAR_6 + 1));
    VAR_7 = FUNC_1(VAR_8);
    FUNC_4(VAR_3, VAR_7, VAR_5 + VAR_6, VAR_4, VAR_5, VAR_2, VAR_0);
    FUNC_2(VAR_8);
    return VAR_8;
}
