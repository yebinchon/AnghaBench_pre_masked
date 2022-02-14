
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
typedef char WCHAR ;
struct TYPE_5__ {int style; char* text; int bound; } ;
struct TYPE_4__ {int numParts; int Self; TYPE_2__* parts; TYPE_2__ part0; } ;
typedef TYPE_1__ STATUS_INFO ;
typedef TYPE_2__ STATUSWINDOWPART ;
typedef char* LPWSTR ;
typedef int LPCSTR ;
typedef int INT ;
typedef int DWORD ;
typedef int BOOL ;


 char* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int ,int ,int,char*,int) ;
 int VAR_2 ;
 int FUNC_4 (char*,int,char*) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (char*,int ) ;
 int FUNC_7 (char) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static BOOL
FUNC_11 (STATUS_INFO *VAR_4, INT VAR_5, WORD VAR_6,
      LPWSTR VAR_7, BOOL VAR_8)
{
    STATUSWINDOWPART *VAR_9=((void*)0);
    BOOL VAR_10 = VAR_1;
    INT VAR_11;

    if (VAR_6 & VAR_2) {
         FUNC_4("part %d, text %p\n",VAR_5,VAR_7);
    }
    else FUNC_4("part %d, text %s\n", VAR_5, FUNC_6(VAR_7, VAR_8));




    if (VAR_5 == 0x00ff) {
 VAR_9 = &VAR_4->part0;
    } else {
 if (VAR_4->parts && VAR_5 >= 0 && VAR_5 < VAR_4->numParts) {
     VAR_9 = &VAR_4->parts[VAR_5];
 }
    }
    if (!VAR_9) return VAR_1;

    if (VAR_9->style != VAR_6)
 VAR_10 = VAR_3;

    VAR_11 = VAR_9->style;
    VAR_9->style = VAR_6;
    if (VAR_6 & VAR_2) {
        if (!(VAR_11 & VAR_2))
            FUNC_1 (VAR_9->text);
        VAR_9->text = VAR_7;
    } else {
 LPWSTR VAR_12;
 WCHAR *VAR_13;

 if (VAR_7 && !VAR_8) {
     LPCSTR VAR_14 = (LPCSTR)VAR_7;
            DWORD VAR_15 = FUNC_3( VAR_0, 0, VAR_14, -1, ((void*)0), 0 );
     VAR_12 = FUNC_0( (VAR_15 + 1)*sizeof(WCHAR) );
     if (!VAR_12) return VAR_1;
            FUNC_3( VAR_0, 0, VAR_14, -1, VAR_12, VAR_15 );
 } else if (VAR_7) {
     VAR_12 = FUNC_0( (FUNC_10(VAR_7) + 1)*sizeof(WCHAR) );
     if (!VAR_12) return VAR_1;
     FUNC_9 (VAR_12, VAR_7);
 } else VAR_12 = 0;


 if (VAR_12) {
     VAR_13 = VAR_12;
     while (*VAR_13) {
         if(!FUNC_7(*VAR_13))
             *VAR_13 = ' ';
         VAR_13++;
     }
 }


 if (VAR_7) {
     if (!VAR_10 && VAR_9->text && !FUNC_8(VAR_12, VAR_9->text)) {
  FUNC_1(VAR_12);
  return VAR_3;
     }
 } else {
     if (!VAR_10 && !VAR_9->text)
  return VAR_3;
 }

 if (!(VAR_11 & VAR_2))
     FUNC_1 (VAR_9->text);
 VAR_9->text = VAR_12;
    }
    FUNC_2(VAR_4->Self, &VAR_9->bound, VAR_1);
    FUNC_5(VAR_4->Self);

    return VAR_3;
}
