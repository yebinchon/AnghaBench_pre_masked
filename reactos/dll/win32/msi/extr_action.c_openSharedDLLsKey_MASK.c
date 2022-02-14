
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int HKEY ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,int *) ;

__attribute__((used)) static HKEY FUNC_1(void)
{
    HKEY VAR_1=0;
    static const WCHAR VAR_2[] =
        {'S','o','f','t','w','a','r','e','\\',
         'M','i','c','r','o','s','o','f','t','\\',
         'W','i','n','d','o','w','s','\\',
         'C','u','r','r','e','n','t','V','e','r','s','i','o','n','\\',
         'S','h','a','r','e','d','D','L','L','s',0};

    FUNC_0(VAR_0,VAR_2,&VAR_1);
    return VAR_1;
}
