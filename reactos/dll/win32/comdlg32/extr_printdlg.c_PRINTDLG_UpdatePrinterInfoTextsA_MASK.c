
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Status; char* pDriverName; char* pLocation; char* pPortName; char* pComment; } ;
typedef TYPE_1__ PRINTER_INFO_2A ;
typedef int HWND ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,char*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(HWND VAR_7, const PRINTER_INFO_2A *VAR_8)
{
    char VAR_9[256];
    char VAR_10[256];
    int VAR_11;


    VAR_9[0]='\0';


    for (VAR_11 = 0; VAR_11 < 25; VAR_11++) {
        if (VAR_8->Status & (1<<VAR_11)) {
     FUNC_0(VAR_0, VAR_1+VAR_11,
   VAR_10, 255);
     FUNC_2(VAR_9,VAR_10);
        }
    }



    FUNC_0(VAR_0, VAR_2,
  VAR_10, 255);
    FUNC_2(VAR_9,VAR_10);
    FUNC_1(VAR_7, VAR_4, VAR_9);


    FUNC_1(VAR_7, VAR_3, VAR_8->pDriverName);

    if (VAR_8->pLocation != ((void*)0) && VAR_8->pLocation[0] != '\0')
        FUNC_1(VAR_7, VAR_6, VAR_8->pLocation);
    else
        FUNC_1(VAR_7, VAR_6, VAR_8->pPortName);
    FUNC_1(VAR_7, VAR_5, VAR_8->pComment ? VAR_8->pComment : "");
    return;
}
