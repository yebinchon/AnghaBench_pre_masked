
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MSXML_VERSION ;
typedef int LPVOID ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

HRESULT FUNC_1(MSXML_VERSION VAR_1, LPVOID *VAR_2)
{
    FUNC_0("This program tried to use a SAX XML Reader object, but\n"
            "libxml2 support was not present at compile time.\n");
    return VAR_0;
}
