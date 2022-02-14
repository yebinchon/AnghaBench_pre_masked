
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nSize; int nVersion; int dwFlags; int cColorBits; int cDepthBits; } ;
typedef TYPE_1__ PIXELFORMATDESCRIPTOR ;
typedef int HWND ;
typedef int HGLRC ;
typedef int HDC ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int,int,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

HGLRC FUNC_8(HWND VAR_3)
{
 HDC VAR_4 = FUNC_2(VAR_3);
 HGLRC VAR_5 = 0;
 PIXELFORMATDESCRIPTOR VAR_6;
 int VAR_7;

 FUNC_5(&VAR_6, sizeof(PIXELFORMATDESCRIPTOR));

 VAR_6.nSize = sizeof(PIXELFORMATDESCRIPTOR);
 VAR_6.nVersion = 1;
 VAR_6.dwFlags = VAR_2 | VAR_1 | VAR_0;
 VAR_6.cColorBits = 24;
 VAR_6.cDepthBits = 24;

 VAR_7 = FUNC_0(VAR_4, &VAR_6);
 FUNC_1(VAR_4, VAR_7, sizeof(PIXELFORMATDESCRIPTOR), &VAR_6);
 FUNC_4(VAR_4, VAR_7, &VAR_6);

 VAR_5 = FUNC_6(VAR_4);
 FUNC_7(VAR_4, VAR_5);

 FUNC_3(VAR_3, VAR_4);

 return VAR_5;
}
