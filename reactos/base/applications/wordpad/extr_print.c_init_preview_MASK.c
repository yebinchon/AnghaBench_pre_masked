
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int page; scalar_t__ zoomlevel; scalar_t__ zoomratio; int wszFileName; scalar_t__ hdc2; scalar_t__ hdc; } ;
typedef int LPWSTR ;
typedef int HWND ;
typedef int HMENU ;
typedef int HINSTANCE ;


 int FUNC_0 (int ,int ,int *,int,int ,int ,int,int,int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int VAR_7 ;

void FUNC_3(HWND VAR_8, LPWSTR VAR_9)
{
    HINSTANCE VAR_10 = FUNC_1(0);
    VAR_6.page = 1;
    VAR_6.hdc = 0;
    VAR_6.hdc2 = 0;
    VAR_6.wszFileName = VAR_9;
    VAR_6.zoomratio = 0;
    VAR_6.zoomlevel = 0;
    FUNC_2(VAR_8, VAR_1);

    FUNC_0(0, VAR_7, ((void*)0),
            VAR_4 | VAR_2 | VAR_5 | VAR_3,
            0, 0, 200, 10, VAR_8, (HMENU)VAR_0, VAR_10, ((void*)0));
}
