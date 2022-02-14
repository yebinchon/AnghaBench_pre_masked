
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
typedef size_t UINT ;
struct TYPE_7__ {int itemFlag; int size; int datastart; } ;
struct TYPE_5__ {char* lpszSubKey; int fFlags; int hKey; } ;
struct TYPE_6__ {int wineFlags; char* realMRU; size_t cursize; TYPE_1__ extview; TYPE_3__** array; } ;
typedef TYPE_2__* LPWINEMRULIST ;
typedef TYPE_3__* LPWINEMRUITEM ;
typedef int * LPBYTE ;
typedef int HKEY ;


 int FUNC_0 (char*,size_t,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ,char*,int ,int *,int ,int,int ,int *,int ) ;
 size_t FUNC_3 (int ,char*,int ,int,int *) ;
 size_t FUNC_4 (int ,char*,int ,int ,int *,int) ;
 int FUNC_5 (char*,int ,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (char*) ;
 char* VAR_8 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8 ( LPWINEMRULIST VAR_9 )
{
    UINT VAR_10, VAR_11;
    HKEY VAR_12;
    WCHAR VAR_13[2];
    LPWINEMRUITEM VAR_14;





    if ((VAR_11 = FUNC_3( VAR_9->extview.hKey, VAR_9->extview.lpszSubKey,
         0, VAR_1, &VAR_12))) {

 FUNC_0("Could not open key, error=%d, attempting to create\n",
     VAR_11);
 if ((VAR_11 = FUNC_2( VAR_9->extview.hKey, VAR_9->extview.lpszSubKey,
        0,
        ((void*)0),
        VAR_4,
        VAR_0 | VAR_1,
        0,
        &VAR_12,
        0))) {
     FUNC_0("failed to create key /%s/, err=%d\n",
  FUNC_6(VAR_9->extview.lpszSubKey), VAR_11);
     return;
 }
    }
    if (VAR_9->wineFlags & VAR_6) {
 VAR_9->wineFlags &= ~VAR_6;
 VAR_11 = FUNC_4(VAR_12, VAR_8, 0, VAR_5, (LPBYTE)VAR_9->realMRU,
        (FUNC_7(VAR_9->realMRU) + 1)*sizeof(WCHAR));
 if (VAR_11) {
     FUNC_0("error saving MRUList, err=%d\n", VAR_11);
 }
 FUNC_5("saving MRUList=/%s/\n", FUNC_6(VAR_9->realMRU));
    }
    VAR_13[1] = 0;
    for(VAR_10=0; VAR_10<VAR_9->cursize; VAR_10++) {
 VAR_14 = VAR_9->array[VAR_10];
 if (VAR_14->itemFlag & VAR_7) {
     VAR_14->itemFlag &= ~VAR_7;
     VAR_13[0] = 'a' + VAR_10;
     VAR_11 = FUNC_4(VAR_12, VAR_13, 0,
     (VAR_9->extview.fFlags & VAR_2) ?
     VAR_3 : VAR_5,
     &VAR_14->datastart, VAR_14->size);
     if (VAR_11) {
  FUNC_0("error saving /%s/, err=%d\n", FUNC_6(VAR_13), VAR_11);
     }
            FUNC_5("saving value for name /%s/ size=%d\n",
    FUNC_6(VAR_13), VAR_14->size);
 }
    }
    FUNC_1( VAR_12 );
}
