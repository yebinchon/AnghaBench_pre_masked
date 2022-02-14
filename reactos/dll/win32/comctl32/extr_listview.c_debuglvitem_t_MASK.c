
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iItem; int iSubItem; int mask; int state; int stateMask; int cchTextMax; int iImage; int lParam; int iIndent; int pszText; } ;
typedef TYPE_1__ LVITEMW ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 () ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,int,char*,...) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static const char* FUNC_4(const LVITEMW *VAR_6, BOOL VAR_7)
{
    char* VAR_8 = FUNC_0(), *VAR_9 = VAR_8;
    int VAR_10, VAR_11 = VAR_0;

    if (VAR_6 == ((void*)0)) return "(null)";
    VAR_10 = FUNC_2(VAR_8, VAR_11, "{iItem=%d, iSubItem=%d, ", VAR_6->iItem, VAR_6->iSubItem);
    if (VAR_10 == -1) goto end;
    VAR_8 += VAR_10; VAR_11 -= VAR_10;
    if (VAR_6->mask & VAR_4)
 VAR_10 = FUNC_2(VAR_8, VAR_11, "state=%x, stateMask=%x, ", VAR_6->state, VAR_6->stateMask);
    else VAR_10 = 0;
    if (VAR_10 == -1) goto end;
    VAR_8 += VAR_10; VAR_11 -= VAR_10;
    if (VAR_6->mask & VAR_5)
 VAR_10 = FUNC_2(VAR_8, VAR_11, "pszText=%s, cchTextMax=%d, ", FUNC_1(VAR_6->pszText, VAR_7, 80), VAR_6->cchTextMax);
    else VAR_10 = 0;
    if (VAR_10 == -1) goto end;
    VAR_8 += VAR_10; VAR_11 -= VAR_10;
    if (VAR_6->mask & VAR_1)
 VAR_10 = FUNC_2(VAR_8, VAR_11, "iImage=%d, ", VAR_6->iImage);
    else VAR_10 = 0;
    if (VAR_10 == -1) goto end;
    VAR_8 += VAR_10; VAR_11 -= VAR_10;
    if (VAR_6->mask & VAR_3)
 VAR_10 = FUNC_2(VAR_8, VAR_11, "lParam=%lx, ", VAR_6->lParam);
    else VAR_10 = 0;
    if (VAR_10 == -1) goto end;
    VAR_8 += VAR_10; VAR_11 -= VAR_10;
    if (VAR_6->mask & VAR_2)
 VAR_10 = FUNC_2(VAR_8, VAR_11, "iIndent=%d, ", VAR_6->iIndent);
    else VAR_10 = 0;
    if (VAR_10 == -1) goto end;
    VAR_8 += VAR_10;
    goto undo;
end:
    VAR_8 = VAR_9 + FUNC_3(VAR_9);
undo:
    if (VAR_8 - VAR_9 > 2) { VAR_8[-2] = '}'; VAR_8[-1] = 0; }
    return VAR_9;
}
