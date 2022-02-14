
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mask; int iSubItem; int fmt; int cx; int cchTextMax; int iImage; int iOrder; int pszText; } ;
typedef TYPE_1__ LVCOLUMNW ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 () ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,int,char*,...) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static const char* FUNC_4(const LVCOLUMNW *VAR_7, BOOL VAR_8)
{
    char* VAR_9 = FUNC_0(), *VAR_10 = VAR_9;
    int VAR_11, VAR_12 = VAR_0;

    if (VAR_7 == ((void*)0)) return "(null)";
    VAR_11 = FUNC_2(VAR_9, VAR_12, "{");
    if (VAR_11 == -1) goto end;
    VAR_9 += VAR_11; VAR_12 -= VAR_11;
    if (VAR_7->mask & VAR_4)
 VAR_11 = FUNC_2(VAR_9, VAR_12, "iSubItem=%d, ", VAR_7->iSubItem);
    else VAR_11 = 0;
    if (VAR_11 == -1) goto end;
    VAR_9 += VAR_11; VAR_12 -= VAR_11;
    if (VAR_7->mask & VAR_1)
 VAR_11 = FUNC_2(VAR_9, VAR_12, "fmt=%x, ", VAR_7->fmt);
    else VAR_11 = 0;
    if (VAR_11 == -1) goto end;
    VAR_9 += VAR_11; VAR_12 -= VAR_11;
    if (VAR_7->mask & VAR_6)
 VAR_11 = FUNC_2(VAR_9, VAR_12, "cx=%d, ", VAR_7->cx);
    else VAR_11 = 0;
    if (VAR_11 == -1) goto end;
    VAR_9 += VAR_11; VAR_12 -= VAR_11;
    if (VAR_7->mask & VAR_5)
 VAR_11 = FUNC_2(VAR_9, VAR_12, "pszText=%s, cchTextMax=%d, ", FUNC_1(VAR_7->pszText, VAR_8, 80), VAR_7->cchTextMax);
    else VAR_11 = 0;
    if (VAR_11 == -1) goto end;
    VAR_9 += VAR_11; VAR_12 -= VAR_11;
    if (VAR_7->mask & VAR_2)
 VAR_11 = FUNC_2(VAR_9, VAR_12, "iImage=%d, ", VAR_7->iImage);
    else VAR_11 = 0;
    if (VAR_11 == -1) goto end;
    VAR_9 += VAR_11; VAR_12 -= VAR_11;
    if (VAR_7->mask & VAR_3)
 VAR_11 = FUNC_2(VAR_9, VAR_12, "iOrder=%d, ", VAR_7->iOrder);
    else VAR_11 = 0;
    if (VAR_11 == -1) goto end;
    VAR_9 += VAR_11;
    goto undo;
end:
    VAR_9 = VAR_10 + FUNC_3(VAR_10);
undo:
    if (VAR_9 - VAR_10 > 2) { VAR_9[-2] = '}'; VAR_9[-1] = 0; }
    return VAR_10;
}
