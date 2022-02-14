
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HPBUFFERARB ;
typedef int HDC ;


 unsigned int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,char*,int,int) ;
 int FUNC_3 (int ,int const*,int *,int,int*,unsigned int*) ;
 scalar_t__ FUNC_4 (int ,int,int,int,int*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static void FUNC_9(HDC VAR_2)
{
    const int VAR_3[] = { VAR_1, 1,
                                0 };
    int VAR_4[VAR_0];
    unsigned int VAR_5;
    unsigned int VAR_6;
    int VAR_7, VAR_8;
    int VAR_9 = 0;

    VAR_5 = FUNC_0(VAR_2, 0, 0, ((void*)0));
    VAR_8 = FUNC_3(VAR_2, VAR_3, ((void*)0), VAR_0, VAR_4, &VAR_6);
    if(VAR_8 <= 0)
    {
        FUNC_7("No pbuffer compatible formats found while WGL_ARB_pbuffer is supported\n");
        return;
    }
    FUNC_8("nOnscreenFormats: %d\n", VAR_5);
    FUNC_8("Total number of pbuffer capable pixelformats: %d\n", VAR_6);


    for(VAR_7=0; VAR_7 < VAR_6; VAR_7++)
    {

        if(VAR_4[VAR_7] <= VAR_5)
        {
            VAR_9 = VAR_4[VAR_7];
            FUNC_8("Selected iPixelFormat=%d\n", VAR_9);
            break;
        }
    }
    if(VAR_9 != 0)
    {
        HDC VAR_10;
        int VAR_11 = 0;
        HPBUFFERARB VAR_12 = FUNC_4(VAR_2, VAR_9, 640 , 480 , &VAR_11);
        if(!VAR_12)
            FUNC_7("Pbuffer creation failed!\n");


        VAR_10 = FUNC_5(VAR_12);
        VAR_8 = FUNC_1(VAR_10);
        FUNC_2(VAR_8 == VAR_9, "Unexpected iPixelFormat=%d returned by GetPixelFormat for format %d\n", VAR_8, VAR_9);
        FUNC_8("iPixelFormat returned by GetPixelFormat: %d\n", VAR_8);
        FUNC_8("PixelFormat from wglChoosePixelFormatARB: %d\n", VAR_9);

        FUNC_6(VAR_12, VAR_10);
    }
    else FUNC_7("Pbuffer test for onscreen pixelformat skipped as no onscreen format with pbuffer capabilities have been found\n");


    for(VAR_7=0, VAR_9=0; VAR_7<VAR_6; VAR_7++)
    {
        if(VAR_4[VAR_7] > VAR_5)
        {
            VAR_9 = VAR_4[VAR_7];
            FUNC_8("Selected iPixelFormat: %d\n", VAR_9);
            break;
        }
    }

    if(VAR_9 != 0)
    {
        HDC VAR_13;
        HPBUFFERARB VAR_14 = FUNC_4(VAR_2, VAR_9, 640 , 480 , ((void*)0));
        if(VAR_14)
        {

            VAR_13 = FUNC_5(VAR_14);
            VAR_8 = FUNC_1(VAR_13);

            FUNC_2(VAR_8 == 1, "Unexpected iPixelFormat=%d (1 expected) returned by GetPixelFormat for offscreen format %d\n", VAR_8, VAR_9);
            FUNC_8("iPixelFormat returned by GetPixelFormat: %d\n", VAR_8);
            FUNC_8("PixelFormat from wglChoosePixelFormatARB: %d\n", VAR_9);
            FUNC_6(VAR_14, VAR_2);
        }
        else FUNC_7("Pbuffer creation failed!\n");
    }
    else FUNC_7("Pbuffer test for offscreen pixelformat skipped as no offscreen-only format with pbuffer capabilities has been found\n");
}
