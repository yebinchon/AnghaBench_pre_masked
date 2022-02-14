
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; int member_1; int member_2; int member_3; int iPixelType; int cColorBits; int cAlphaBits; int cStencilBits; int cAuxBuffers; int dwFlags; int member_25; int member_24; int member_23; int member_22; int member_21; int member_20; int member_19; int member_18; int member_17; int member_16; int member_15; int member_14; int member_13; int member_12; int member_11; int member_10; int member_9; int member_8; int member_7; int member_6; int member_5; int member_4; } ;
typedef TYPE_1__ PIXELFORMATDESCRIPTOR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(void)
{
    PIXELFORMATDESCRIPTOR VAR_6 = {
        sizeof(PIXELFORMATDESCRIPTOR),
        1,
        VAR_1 | VAR_4,
        VAR_5,
        0,
        0, 0, 0, 0, 0, 0,
        0,
        0,
        0,
        0, 0, 0, 0,
        0,
        0,
        0,
        VAR_2,
        0,
        0, 0, 0
    };
    PIXELFORMATDESCRIPTOR VAR_7;

    FUNC_0( FUNC_1(&VAR_6, ((void*)0)), "Simple pfd failed\n" );
    VAR_6.dwFlags |= VAR_0;
    FUNC_0( FUNC_1(&VAR_6, ((void*)0)), "PFD_DOUBLEBUFFER_DONTCARE failed\n" );
    VAR_6.dwFlags |= VAR_3;
    FUNC_0( FUNC_1(&VAR_6, ((void*)0)), "PFD_DOUBLEBUFFER_DONTCARE|PFD_STEREO_DONTCARE failed\n" );
    VAR_6.dwFlags &= ~VAR_0;
    FUNC_0( FUNC_1(&VAR_6, ((void*)0)), "PFD_STEREO_DONTCARE failed\n" );
    VAR_6.dwFlags &= ~VAR_3;
    VAR_6.iPixelType = 32;
    FUNC_0( FUNC_1(&VAR_6, &VAR_7), "Invalid pixel format 32 failed\n" );
    FUNC_0( VAR_7.iPixelType == VAR_5, "Expected pixel type PFD_TYPE_RGBA, got %d\n", VAR_7.iPixelType );
    VAR_6.iPixelType = 33;
    FUNC_0( FUNC_1(&VAR_6, &VAR_7), "Invalid pixel format 33 failed\n" );
    FUNC_0( VAR_7.iPixelType == VAR_5, "Expected pixel type PFD_TYPE_RGBA, got %d\n", VAR_7.iPixelType );
    VAR_6.iPixelType = 15;
    FUNC_0( FUNC_1(&VAR_6, &VAR_7), "Invalid pixel format 15 failed\n" );
    FUNC_0( VAR_7.iPixelType == VAR_5, "Expected pixel type PFD_TYPE_RGBA, got %d\n", VAR_7.iPixelType );
    VAR_6.iPixelType = VAR_5;

    VAR_6.cColorBits = 32;
    FUNC_0( FUNC_1(&VAR_6, ((void*)0)), "Simple pfd failed\n" );
    VAR_6.dwFlags |= VAR_0;
    FUNC_0( FUNC_1(&VAR_6, ((void*)0)), "PFD_DOUBLEBUFFER_DONTCARE failed\n" );
    VAR_6.dwFlags |= VAR_3;
    FUNC_0( FUNC_1(&VAR_6, ((void*)0)), "PFD_DOUBLEBUFFER_DONTCARE|PFD_STEREO_DONTCARE failed\n" );
    VAR_6.dwFlags &= ~VAR_0;
    FUNC_0( FUNC_1(&VAR_6, ((void*)0)), "PFD_STEREO_DONTCARE failed\n" );
    VAR_6.dwFlags &= ~VAR_3;
    VAR_6.cColorBits = 0;

    VAR_6.cAlphaBits = 8;
    FUNC_0( FUNC_1(&VAR_6, ((void*)0)), "Simple pfd failed\n" );
    VAR_6.dwFlags |= VAR_0;
    FUNC_0( FUNC_1(&VAR_6, ((void*)0)), "PFD_DOUBLEBUFFER_DONTCARE failed\n" );
    VAR_6.dwFlags |= VAR_3;
    FUNC_0( FUNC_1(&VAR_6, ((void*)0)), "PFD_DOUBLEBUFFER_DONTCARE|PFD_STEREO_DONTCARE failed\n" );
    VAR_6.dwFlags &= ~VAR_0;
    FUNC_0( FUNC_1(&VAR_6, ((void*)0)), "PFD_STEREO_DONTCARE failed\n" );
    VAR_6.dwFlags &= ~VAR_3;
    VAR_6.cAlphaBits = 0;

    VAR_6.cStencilBits = 8;
    FUNC_0( FUNC_1(&VAR_6, ((void*)0)), "Simple pfd failed\n" );
    VAR_6.dwFlags |= VAR_0;
    FUNC_0( FUNC_1(&VAR_6, ((void*)0)), "PFD_DOUBLEBUFFER_DONTCARE failed\n" );
    VAR_6.dwFlags |= VAR_3;
    FUNC_0( FUNC_1(&VAR_6, ((void*)0)), "PFD_DOUBLEBUFFER_DONTCARE|PFD_STEREO_DONTCARE failed\n" );
    VAR_6.dwFlags &= ~VAR_0;
    FUNC_0( FUNC_1(&VAR_6, ((void*)0)), "PFD_STEREO_DONTCARE failed\n" );
    VAR_6.dwFlags &= ~VAR_3;
    VAR_6.cStencilBits = 0;

    VAR_6.cAuxBuffers = 1;
    FUNC_0( FUNC_1(&VAR_6, ((void*)0)), "Simple pfd failed\n" );
    VAR_6.dwFlags |= VAR_0;
    FUNC_0( FUNC_1(&VAR_6, ((void*)0)), "PFD_DOUBLEBUFFER_DONTCARE failed\n" );
    VAR_6.dwFlags |= VAR_3;
    FUNC_0( FUNC_1(&VAR_6, ((void*)0)), "PFD_DOUBLEBUFFER_DONTCARE|PFD_STEREO_DONTCARE failed\n" );
    VAR_6.dwFlags &= ~VAR_0;
    FUNC_0( FUNC_1(&VAR_6, ((void*)0)), "PFD_STEREO_DONTCARE failed\n" );
    VAR_6.dwFlags &= ~VAR_3;
    VAR_6.cAuxBuffers = 0;
}
