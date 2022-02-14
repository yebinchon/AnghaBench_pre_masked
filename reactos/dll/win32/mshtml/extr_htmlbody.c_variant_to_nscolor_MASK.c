
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsAString ;
typedef char WCHAR ;
typedef int VARIANT ;
typedef int PRUnichar ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;


 int * FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,char const*,int ) ;

BOOL FUNC_7(const VARIANT *VAR_2, nsAString *VAR_3)
{
    switch(FUNC_3(VAR_2)) {
    case 129:
        FUNC_5(VAR_3, FUNC_1(VAR_2));
        return VAR_1;

    case 128: {
        PRUnichar VAR_4[10];
        static const WCHAR VAR_5[] = {'#','%','x',0};

        FUNC_6(VAR_4, VAR_5, FUNC_2(VAR_2));
        FUNC_5(VAR_3, VAR_4);
        return VAR_1;
    }

    default:
        FUNC_0("invalid color %s\n", FUNC_4(VAR_2));
    }

    return VAR_0;

}
