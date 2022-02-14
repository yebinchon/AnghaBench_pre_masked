
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pfd ;
struct TYPE_4__ {int nSize; int nVersion; int cColorBits; int cDepthBits; int cStencilBits; int dwFlags; int iLayerType; int iPixelType; } ;
typedef TYPE_1__ PIXELFORMATDESCRIPTOR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(PIXELFORMATDESCRIPTOR *VAR_5)
{
 FUNC_0(VAR_5, 0, sizeof(PIXELFORMATDESCRIPTOR));
 VAR_5->nSize = sizeof(VAR_5);
 VAR_5->nVersion = 1;
 VAR_5->iPixelType = VAR_4;
 VAR_5->cColorBits = 32;
 VAR_5->cDepthBits = 24;
 VAR_5->cStencilBits = 8;
 VAR_5->iLayerType = VAR_2;
 VAR_5->dwFlags = VAR_1 | VAR_3 |
         VAR_0;
}
