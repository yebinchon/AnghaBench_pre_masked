
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IHTMLWindow2 ;
typedef int IHTMLFramesCollection2 ;
typedef int IHTMLElement ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int **) ;
 scalar_t__ VAR_0 ;
 int * FUNC_6 (int *,char*) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int,char*,scalar_t__) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int *,char*) ;

__attribute__((used)) static void FUNC_15(IHTMLDocument2 *VAR_1)
{
    IHTMLWindow2 *VAR_2;
    IHTMLFramesCollection2 *VAR_3;
    IHTMLElement *VAR_4;
    HRESULT VAR_5;

    VAR_2 = FUNC_7(VAR_1);



    VAR_5 = FUNC_5(VAR_2, &VAR_3);
    FUNC_8(VAR_5 == VAR_0, "IHTMLWindow2_get_frames failed: 0x%08x\n", VAR_5);
    if(FUNC_0(VAR_5))
        return;

    FUNC_14(VAR_3, "fr1");
    FUNC_3(VAR_3);

    VAR_5 = FUNC_1(VAR_1, &VAR_3);
    FUNC_8(VAR_5 == VAR_0, "IHTMLDocument2_get_frames failed: 0x%08x\n", VAR_5);
    if(FUNC_0(VAR_5))
        return;

    FUNC_14(VAR_3, "fr1");
    FUNC_3(VAR_3);


    FUNC_14((IHTMLFramesCollection2*)VAR_2, "fr2");


    VAR_4 = FUNC_6(VAR_1, "nm1");
    FUNC_9((IUnknown*)VAR_4, "fr1");

    FUNC_10((IUnknown*)VAR_4);
    FUNC_11(VAR_4, "nm1");
    FUNC_12(VAR_4, "frame name");
    FUNC_12(VAR_4, ((void*)0));
    FUNC_12(VAR_4, "nm1");
    FUNC_13(VAR_4, "about:blank");
    FUNC_2(VAR_4);


    VAR_4 = FUNC_6(VAR_1, "fr3");
    FUNC_11(VAR_4, ((void*)0));
    FUNC_12(VAR_4, "frame name");
    FUNC_12(VAR_4, ((void*)0));
    FUNC_2(VAR_4);

    FUNC_4(VAR_2);
}
