
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;


 int FUNC_0 (void*,size_t,char const*,int,size_t const*,unsigned int,char const*,int) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static void FUNC_3(void* VAR_7, size_t VAR_8,
                            const char* VAR_9, int VAR_10, int VAR_11,
                            const size_t* VAR_12, unsigned VAR_13,
                            const char* VAR_14, int VAR_15)
{
    int VAR_16;

    const char* VAR_17 = FUNC_2(VAR_9, '\\');
    if (!VAR_17) VAR_17 = FUNC_2(VAR_9, '/');
    if (VAR_17) VAR_9 = VAR_17+1;

    VAR_2;

    if (VAR_5 == 1 && !VAR_3)
        FUNC_1("bench %s %s: input %u bytes, %u seconds, %u KB blocks\n", VAR_1, VAR_0, (U32)VAR_8, VAR_6, (U32)(VAR_4>>10));

    if (VAR_11 < VAR_10) VAR_11 = VAR_10;

    for (VAR_16=VAR_10; VAR_16 <= VAR_11; VAR_16++) {
        FUNC_0(VAR_7, VAR_8,
                     VAR_9, VAR_16,
                     VAR_12, VAR_13,
                     VAR_14, VAR_15);
    }
}
