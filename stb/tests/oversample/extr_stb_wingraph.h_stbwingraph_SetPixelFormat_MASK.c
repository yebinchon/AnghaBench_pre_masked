
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int stbwingraph_hwnd ;
typedef int pfd ;
struct TYPE_5__ {int member_0; int nVersion; int dwFlags; int cColorBits; int cAlphaBits; int cDepthBits; int cStencilBits; int cAccumBits; int iPixelType; int dwLayerMask; } ;
typedef TYPE_1__ PIXELFORMATDESCRIPTOR ;
typedef int HDC ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int,int,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int,TYPE_1__*) ;
 int VAR_6 ;

int FUNC_4(stbwingraph_hwnd VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
   HDC VAR_13 = FUNC_2(VAR_7);
   PIXELFORMATDESCRIPTOR VAR_14 = { sizeof(VAR_14) };
   int VAR_15;

   VAR_14.nVersion = 1;
   VAR_14.dwFlags = VAR_4 | VAR_2 | VAR_1;
   VAR_14.dwLayerMask = VAR_3;
   VAR_14.iPixelType = VAR_5;
   VAR_14.cColorBits = VAR_8;
   VAR_14.cAlphaBits = VAR_9;
   VAR_14.cDepthBits = VAR_10;
   VAR_14.cStencilBits = VAR_11;
   VAR_14.cAccumBits = VAR_12;

   VAR_15 = FUNC_0(VAR_13, &VAR_14);
   if (!VAR_15) return VAR_0;

   if (!FUNC_1(VAR_13, VAR_15, sizeof(PIXELFORMATDESCRIPTOR), &VAR_14))
      return VAR_0;
   FUNC_3(VAR_13, VAR_15, &VAR_14);

   return VAR_6;
}
