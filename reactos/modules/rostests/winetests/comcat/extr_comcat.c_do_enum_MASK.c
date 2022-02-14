
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int ULONG ;
typedef int * REFCLSID ;
typedef int IEnumCLSID ;
typedef int ICatInformation ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;


 int VAR_0 ;
 int FUNC_0 (char const*,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,int ,int *,void**) ;
 scalar_t__ FUNC_2 (int *,int,int *,int,int *,int **) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int,int *,int*) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (scalar_t__,char*) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;

__attribute__((used)) static void FUNC_14(void)
{
 HRESULT VAR_5;
 REFCLSID VAR_6 = &VAR_1;
 ICatInformation *VAR_7 = (ICatInformation*)0xdeadbeef;
 GUID VAR_8[1];
 GUID VAR_9[1];
 GUID VAR_10;
 ULONG VAR_11 = -1;

        static const WCHAR VAR_12[] = {
   '{',
   'd','e','a','d','c','a','f','e',
   '-','0','0','0','0','-','0','0','0','0',
   '-','0','0','0','0',
   '-','0','0','0','0','0','0','0','0','0','0','0','0',
   '}',0};
        static const WCHAR VAR_13[] = {
   '{',
   'd','e','a','d','c','a','f','e','-',
   'b','e','e','d','-',
   'b','e','a','d','-',
   'd','e','a','d','-',
   'c','a','f','e','b','e','a','d','d','e','a','d',
   '}',0};

 IEnumCLSID *VAR_14 =(IEnumCLSID*)0xdeadcafe;

 FUNC_0(VAR_12,VAR_9);
 FUNC_0(VAR_13,&VAR_10);

 FUNC_7(((void*)0));

 VAR_5 = FUNC_1(VAR_6,((void*)0),VAR_0,
   &VAR_2, (void **)&VAR_7);
 FUNC_10(VAR_5, "CoCreateInstance");

 VAR_5 = FUNC_2(VAR_7, -1, ((void*)0), -1, ((void*)0),
   &VAR_14);
 FUNC_10(VAR_5,"ICatInformation_EnumClassesOfCategories");

 FUNC_5(VAR_14);

 VAR_5 = FUNC_2(VAR_7, 1, VAR_9, -1, ((void*)0),
   &VAR_14);
 FUNC_10(VAR_5,"ICatInformation_EnumClassesOfCategories");

 VAR_5 = FUNC_4(VAR_14,1,VAR_8, &VAR_11);
 FUNC_9 (VAR_5 == VAR_3,"Expected S_FALSE, got 0x%08x\n", VAR_5);
 FUNC_9 (VAR_11 == 0,"Fetched wrong number of guids %u\n",VAR_11);
 FUNC_5(VAR_14);

 if (FUNC_11())
        {
            VAR_5 = FUNC_2(VAR_7, 1, VAR_9, -1, ((void*)0), &VAR_14);
            FUNC_10(VAR_5,"ICatInformation_EnumClassesOfCategories");

            VAR_5 = FUNC_4(VAR_14,1,VAR_8, &VAR_11);
            FUNC_9 (VAR_5 == VAR_4,"Expected S_OK, got 0x%08x\n", VAR_5);
            FUNC_9 (VAR_11 == 1,"Fetched wrong number of guids %u\n",VAR_11);
            FUNC_9 (FUNC_6(VAR_8,&VAR_10),"Guids do not match\n");

            FUNC_5(VAR_14);
            FUNC_13();
        }
        else FUNC_12( "Could not register the test category\n" );

 FUNC_3(VAR_7);

 FUNC_8();
}
