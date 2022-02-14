
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cbSize; int * hIconSm; int lpszClassName; int * lpszMenuName; int hbrBackground; int hCursor; int * hIcon; int hInstance; scalar_t__ cbWndExtra; scalar_t__ cbClsExtra; int lpfnWndProc; int style; } ;
typedef TYPE_1__ WNDCLASSEXW ;
typedef int WNDCLASSEX ;
typedef int HINSTANCE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

BOOL
FUNC_3(HINSTANCE VAR_7)
{
 WNDCLASSEXW VAR_8;


 VAR_8.cbSize = sizeof(WNDCLASSEX);
 VAR_8.style = VAR_0;
 VAR_8.lpfnWndProc = VAR_1;
 VAR_8.cbClsExtra = 0;
 VAR_8.cbWndExtra = 0;
 VAR_8.hInstance = VAR_7;
 VAR_8.hIcon = ((void*)0);
 VAR_8.hCursor = FUNC_1 (((void*)0), VAR_3);
 VAR_8.hbrBackground = FUNC_0(VAR_5);
 VAR_8.lpszMenuName = ((void*)0);
 VAR_8.lpszClassName = VAR_6;
 VAR_8.hIconSm = ((void*)0);


 if (!FUNC_2 (&VAR_8))
 {
  return VAR_2;
 }
 return VAR_4;
}
