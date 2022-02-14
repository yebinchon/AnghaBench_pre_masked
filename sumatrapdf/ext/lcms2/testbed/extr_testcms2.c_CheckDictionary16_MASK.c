
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int cmsInt32Number ;
typedef int cmsHPROFILE ;
typedef int * cmsHANDLE ;
struct TYPE_5__ {int * Value; int * Name; } ;
typedef TYPE_1__ cmsDICTentry ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int *,char*,char*,int *,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 TYPE_1__* FUNC_4 (int ,int *) ;
 TYPE_1__* FUNC_5 (int ,TYPE_1__ const*) ;
 int * FUNC_6 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_7 (int ,int ,int ,int *) ;
 int FUNC_8 (int *,char*,int) ;

__attribute__((used)) static
cmsInt32Number FUNC_9(cmsInt32Number VAR_1, cmsHPROFILE VAR_2)
{
      cmsHANDLE VAR_3;
      const cmsDICTentry* VAR_4;
      switch (VAR_1) {

        case 1:
            VAR_3 = FUNC_2(FUNC_0());
            FUNC_1(FUNC_0(), VAR_3, L"Name0", ((void*)0), ((void*)0), ((void*)0));
            FUNC_1(FUNC_0(), VAR_3, L"Name1", L"", ((void*)0), ((void*)0));
            FUNC_1(FUNC_0(), VAR_3, L"Name", L"String", ((void*)0), ((void*)0));
            FUNC_1(FUNC_0(), VAR_3, L"Name2", L"12", ((void*)0), ((void*)0));
            if (!FUNC_7(FUNC_0(), VAR_2, VAR_0, VAR_3)) return 0;
            FUNC_3(FUNC_0(), VAR_3);
            return 1;


        case 2:

             VAR_3 = FUNC_6(FUNC_0(), VAR_2, VAR_0);
             if (VAR_3 == ((void*)0)) return 0;
             VAR_4 = FUNC_4(FUNC_0(), VAR_3);
             if (FUNC_8(VAR_4 ->Name, L"Name2", sizeof(wchar_t) * 5) != 0) return 0;
             if (FUNC_8(VAR_4 ->Value, L"12", sizeof(wchar_t) * 2) != 0) return 0;
             VAR_4 = FUNC_5(FUNC_0(), VAR_4);
             if (FUNC_8(VAR_4 ->Name, L"Name", sizeof(wchar_t) * 4) != 0) return 0;
             if (FUNC_8(VAR_4 ->Value, L"String", sizeof(wchar_t) * 5) != 0) return 0;
             VAR_4 = FUNC_5(FUNC_0(), VAR_4);
             if (FUNC_8(VAR_4 ->Name, L"Name1", sizeof(wchar_t) *5) != 0) return 0;
             if (VAR_4 ->Value == ((void*)0)) return 0;
             if (*VAR_4->Value != 0) return 0;
             VAR_4 = FUNC_5(FUNC_0(), VAR_4);
             if (FUNC_8(VAR_4 ->Name, L"Name0", sizeof(wchar_t) * 5) != 0) return 0;
             if (VAR_4 ->Value != ((void*)0)) return 0;
             return 1;


        default:;
    }

    return 0;
}
