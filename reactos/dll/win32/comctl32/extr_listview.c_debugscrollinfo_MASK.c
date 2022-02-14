
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cbSize; int fMask; int nMin; int nMax; int nPage; int nPos; int nTrackPos; } ;
typedef TYPE_1__ SCROLLINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 () ;
 int FUNC_1 (char*,int,char*,int,...) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static const char* FUNC_3(const SCROLLINFO *VAR_5)
{
    char* VAR_6 = FUNC_0(), *VAR_7 = VAR_6;
    int VAR_8, VAR_9 = VAR_0;

    if (VAR_5 == ((void*)0)) return "(null)";
    VAR_8 = FUNC_1(VAR_6, VAR_9, "{cbSize=%u, ", VAR_5->cbSize);
    if (VAR_8 == -1) goto end;
    VAR_6 += VAR_8; VAR_9 -= VAR_8;
    if (VAR_5->fMask & VAR_3)
 VAR_8 = FUNC_1(VAR_6, VAR_9, "nMin=%d, nMax=%d, ", VAR_5->nMin, VAR_5->nMax);
    else VAR_8 = 0;
    if (VAR_8 == -1) goto end;
    VAR_6 += VAR_8; VAR_9 -= VAR_8;
    if (VAR_5->fMask & VAR_1)
 VAR_8 = FUNC_1(VAR_6, VAR_9, "nPage=%u, ", VAR_5->nPage);
    else VAR_8 = 0;
    if (VAR_8 == -1) goto end;
    VAR_6 += VAR_8; VAR_9 -= VAR_8;
    if (VAR_5->fMask & VAR_2)
 VAR_8 = FUNC_1(VAR_6, VAR_9, "nPos=%d, ", VAR_5->nPos);
    else VAR_8 = 0;
    if (VAR_8 == -1) goto end;
    VAR_6 += VAR_8; VAR_9 -= VAR_8;
    if (VAR_5->fMask & VAR_4)
 VAR_8 = FUNC_1(VAR_6, VAR_9, "nTrackPos=%d, ", VAR_5->nTrackPos);
    else VAR_8 = 0;
    if (VAR_8 == -1) goto end;
    VAR_6 += VAR_8;
    goto undo;
end:
    VAR_6 = VAR_7 + FUNC_2(VAR_7);
undo:
    if (VAR_6 - VAR_7 > 2) { VAR_6[-2] = '}'; VAR_6[-1] = 0; }
    return VAR_7;
}
