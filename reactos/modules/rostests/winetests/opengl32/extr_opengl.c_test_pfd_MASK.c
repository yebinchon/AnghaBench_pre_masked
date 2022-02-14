
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PIXELFORMATDESCRIPTOR ;
typedef int HWND ;
typedef int HDC ;


 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (char*,char*,int ,int,int,int,int,int *,int *,int *,int *) ;
 int FUNC_2 (int ,int,int,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int VAR_0 ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_9(const PIXELFORMATDESCRIPTOR *VAR_1, PIXELFORMATDESCRIPTOR *VAR_2)
{
    int VAR_3;
    HDC VAR_4;
    HWND VAR_5;

    VAR_5 = FUNC_1("static", "Title", VAR_0, 10, 10, 200, 200, ((void*)0), ((void*)0),
            ((void*)0), ((void*)0));
    if (!VAR_5)
        return 0;

    VAR_4 = FUNC_4( VAR_5 );
    VAR_3 = FUNC_0( VAR_4, VAR_1 );
    if (VAR_3 && VAR_2)
    {
        FUNC_7(VAR_2, 0, sizeof(*VAR_2));
        FUNC_8(FUNC_2( VAR_4, VAR_3, sizeof(*VAR_2), VAR_2 ),
           "DescribePixelFormat failed with error: %u\n", FUNC_5());
    }
    FUNC_6( VAR_5, VAR_4 );
    FUNC_3( VAR_5 );

    return VAR_3;
}
