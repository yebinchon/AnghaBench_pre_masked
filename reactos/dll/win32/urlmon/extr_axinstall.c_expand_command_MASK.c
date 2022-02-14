
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* tmp_dir; } ;
typedef TYPE_1__ install_ctx_t ;
typedef char WCHAR ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,size_t) ;
 char* FUNC_4 (char const*,char) ;
 int FUNC_5 (char*,char const*) ;
 size_t FUNC_6 (char const*) ;
 int FUNC_7 (char const*,char const*,int ) ;

__attribute__((used)) static void FUNC_8(install_ctx_t *VAR_0, const WCHAR *VAR_1, WCHAR *VAR_2, size_t *VAR_3)
{
    const WCHAR *VAR_4 = VAR_1, *VAR_5 = VAR_1;
    size_t VAR_6 = 0, VAR_7;

    static const WCHAR VAR_8[] = {'%','E','X','T','R','A','C','T','_','D','I','R','%'};

    while((VAR_4 = FUNC_4(VAR_4, '%'))) {
        if(VAR_2)
            FUNC_3(VAR_2+VAR_6, VAR_5, VAR_4-VAR_5);
        VAR_6 += VAR_4-VAR_5;

        if(!FUNC_7(VAR_4, VAR_8, FUNC_0(VAR_8))) {
            VAR_7 = FUNC_6(VAR_0->tmp_dir);
            if(VAR_2)
                FUNC_3(VAR_2+VAR_6, VAR_0->tmp_dir, VAR_7*sizeof(WCHAR));
            VAR_6 += VAR_7;
            VAR_4 += FUNC_0(VAR_8);
        }else {
            FUNC_1("Can't expand %s\n", FUNC_2(VAR_4));
            if(VAR_2)
                VAR_2[VAR_6] = '%';
            VAR_6++;
            VAR_4++;
        }

        VAR_5 = VAR_4;
    }

    if(VAR_2)
        FUNC_5(VAR_2+VAR_6, VAR_5);
    *VAR_3 = VAR_6 + FUNC_6(VAR_5) + 1;
}
