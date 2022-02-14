
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int FUNC_0 (char*,int,char*,int *) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int *,char*,int *,int,char*,int *) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int,char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    WCHAR VAR_1[] = {'c',':','\\','f','o','o',0};
    WCHAR VAR_2[] = {'c',':','\\','f','o','o',0};
    WCHAR VAR_3[] = {'c',':','f','o','o',0};
    WCHAR VAR_4[] = {'c',':',0};
    WCHAR VAR_5[] = {'f','o','o',0};
    WCHAR VAR_6[] = {'\\','f','o','o',0};
    WCHAR VAR_7[] = {'w','i','n','.','i','n','i',0};
    WCHAR VAR_8[VAR_0];
    WCHAR VAR_9[VAR_0];
    WCHAR VAR_10[] = {'.',0};


    FUNC_7(FUNC_2(VAR_1, VAR_8, VAR_0) != 0,
       "PathSearchAndQualify rets 0\n");
    FUNC_7(!FUNC_5(VAR_8, VAR_2), "strings don't match\n");


    FUNC_7(FUNC_2(VAR_3, VAR_8, VAR_0) != 0,
       "PathSearchAndQualify rets 0\n");
    FUNC_0(VAR_4, VAR_0, VAR_9, ((void*)0));
    FUNC_1(VAR_9);
    FUNC_4(VAR_9, VAR_5);
    FUNC_7(!FUNC_5(VAR_8, VAR_9), "strings don't match\n");


    FUNC_7(FUNC_2(VAR_5, VAR_8, VAR_0) != 0,
       "PathSearchAndQualify rets 0\n");
    FUNC_0(VAR_10, VAR_0, VAR_9, ((void*)0));
    FUNC_1(VAR_9);
    FUNC_4(VAR_9, VAR_5);
    FUNC_7(!FUNC_5(VAR_8, VAR_9), "strings don't match\n");


    FUNC_7(FUNC_2(VAR_6, VAR_8, VAR_0) != 0,
       "PathSearchAndQualify rets 0\n");
    FUNC_0(VAR_10, VAR_0, VAR_9, ((void*)0));
    FUNC_6(VAR_9 + 2, VAR_6);
    FUNC_7(!FUNC_5(VAR_8, VAR_9), "strings don't match\n");


    FUNC_7(FUNC_2(VAR_7, VAR_8, VAR_0) != 0,
       "PathSearchAndQualify rets 0\n");
    if(!FUNC_3(((void*)0), VAR_7, ((void*)0), VAR_0, VAR_9, ((void*)0)))
        FUNC_0(VAR_7, VAR_0, VAR_9, ((void*)0));
    FUNC_7(!FUNC_5(VAR_8, VAR_9), "strings don't match\n");

}
