
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf_info {int dummy; } ;
typedef int WCHAR ;
typedef int HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (int ,int ,int *) ;
 unsigned int FUNC_3 (int ,int ,char const*,int,int *,unsigned int) ;
 int const* VAR_2 ;
 int FUNC_4 (int ,int *,unsigned long,unsigned long,struct elf_info*) ;
 unsigned int FUNC_5 (int const*) ;
 int FUNC_6 (int *,int const*) ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static BOOL FUNC_8(HANDLE VAR_3,
                                        const WCHAR* VAR_4,
                                        unsigned long VAR_5,
                                        unsigned long VAR_6,
                                        struct elf_info* VAR_7)
{
    BOOL VAR_8 = VAR_1;
    unsigned int VAR_9 = 0;
    const char *VAR_10;

    while (!VAR_8 && (VAR_10 = FUNC_7( VAR_9++ )))
    {
        WCHAR *VAR_11;
        unsigned VAR_12;

        VAR_12 = FUNC_3(VAR_0, 0, VAR_10, -1, ((void*)0), 0);

        VAR_11 = FUNC_1( FUNC_0(), 0,
                          (VAR_12 + FUNC_5(VAR_4) + 2) * sizeof(WCHAR) );

        if (!VAR_11) break;
        FUNC_3(VAR_0, 0, VAR_10, -1, VAR_11, VAR_12);
        FUNC_6( VAR_11, VAR_2 );
        FUNC_6( VAR_11, VAR_4 );
        VAR_8 = FUNC_4(VAR_3, VAR_11, VAR_5, VAR_6, VAR_7);
        FUNC_2( FUNC_0(), 0, VAR_11 );
    }
    return VAR_8;
}
