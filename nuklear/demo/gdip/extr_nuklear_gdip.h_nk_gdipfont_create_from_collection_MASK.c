
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int curFontCollection; } ;
struct TYPE_4__ {int handle; } ;
typedef int REAL ;
typedef int INT ;
typedef int GpFontFamily ;
typedef TYPE_1__ GdipFont ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ,int*) ;
 scalar_t__ FUNC_2 (int ,int,int **,int*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int **) ;
 TYPE_3__ VAR_2 ;
 int FUNC_5 () ;

GdipFont*
FUNC_6(int VAR_3){
    GpFontFamily **VAR_4;
    INT VAR_5;
    GdipFont *VAR_6 = (GdipFont*)FUNC_3(1, sizeof(GdipFont));
    if( FUNC_1(FUNC_5(), &VAR_5) ) return ((void*)0);
    VAR_4 = (GpFontFamily**)FUNC_3(1, sizeof(GpFontFamily*));
    if( !VAR_4 ) return ((void*)0);
    if( FUNC_2(FUNC_5(), VAR_5, VAR_4, &VAR_5) ) return ((void*)0);
    if( VAR_5 < 1 ) return ((void*)0);
    if( FUNC_0(VAR_4[VAR_5-1], (REAL)VAR_3, VAR_0, VAR_1, &VAR_6->handle) ) return ((void*)0);
    FUNC_4(VAR_4);
    VAR_2.curFontCollection++;
    return VAR_6;
}
