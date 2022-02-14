
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int (* pfnWordBreak ) (int *,int,int,int) ;int bEmulateVersion10; } ;
typedef TYPE_1__ ME_TextEditor ;
typedef int INT ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,int) ;
 int FUNC_1 (int ,int ,int *,int,char*,int,int *,int *) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int,int,int) ;
 int FUNC_5 (int *,int,int,int) ;

int
FUNC_6(ME_TextEditor *VAR_1, WCHAR *VAR_2, INT VAR_3, INT VAR_4, INT VAR_5)
{
  if (!VAR_1->pfnWordBreak) {
    return FUNC_0(VAR_2, VAR_4, VAR_3, VAR_5);
  } else if (!VAR_1->bEmulateVersion10) {


    return VAR_1->pfnWordBreak(VAR_2, VAR_4, VAR_3 * sizeof(WCHAR), VAR_5);
  } else {
    int VAR_6;
    int VAR_7 = FUNC_1(VAR_0, 0, VAR_2, VAR_3,
                                          ((void*)0), 0, ((void*)0), ((void*)0));
    char *VAR_8 = FUNC_2(VAR_7);
    if (!VAR_8) return 0;
    FUNC_1(VAR_0, 0, VAR_2, VAR_3,
                        VAR_8, VAR_7, ((void*)0), ((void*)0));
    VAR_6 = VAR_1->pfnWordBreak((WCHAR*)VAR_8, VAR_4, VAR_7, VAR_5);
    FUNC_3(VAR_8);
    return VAR_6;
  }
}
