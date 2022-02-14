
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IHTMLElement ;
typedef int IHTMLDocument2 ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,char*) ;

__attribute__((used)) static void FUNC_5(IHTMLDocument2 *VAR_1, IHTMLElement *VAR_2)
{
    IHTMLElement *VAR_3;

    FUNC_2((IUnknown*)VAR_2,
            "<img id=\"imgid\" src=\"BLOCKED::http://www.winehq.org/img.png\" />");
    VAR_3 = FUNC_1(VAR_1, "imgid", VAR_0);
    if(VAR_3) {
        FUNC_4((IUnknown*)VAR_3, "BLOCKED::", "blocked::http://www.winehq.org/img.png");
        FUNC_0(VAR_3);
    }

    FUNC_2((IUnknown*)VAR_2,
            "<img id=\"imgid\" src=\"BLOCKE::http://www.winehq.org/img.png\" />");
    VAR_3 = FUNC_1(VAR_1, "imgid", VAR_0);
    if(VAR_3) {
        FUNC_4((IUnknown*)VAR_3, "blocke::http://www.winehq.org/img.png", ((void*)0));
        FUNC_3((IUnknown*)VAR_3, "BLOCKED:http://www.winehq.org/img.png");
        FUNC_4((IUnknown*)VAR_3, "blocked:http://www.winehq.org/img.png", ((void*)0));
        FUNC_3((IUnknown*)VAR_3, "blocked::http://www.winehq.org/img.png");
        FUNC_4((IUnknown*)VAR_3, "BLOCKED::", "blocked::http://www.winehq.org/img.png");
        FUNC_0(VAR_3);
    }
}
