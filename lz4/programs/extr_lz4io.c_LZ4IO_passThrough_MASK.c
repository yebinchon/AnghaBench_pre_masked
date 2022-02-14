
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LZ4IO_prefs_t ;
typedef int FILE ;


 int FUNC_0 (int,char*) ;
 unsigned int FUNC_1 (int * const,int *,size_t*,size_t,unsigned int) ;
 int FUNC_2 (int *,unsigned int) ;
 size_t const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *) ;
 size_t FUNC_4 (size_t*,int,int ,int *) ;
 size_t FUNC_5 (unsigned char*,int,size_t const,int *) ;

__attribute__((used)) static unsigned long long FUNC_6(LZ4IO_prefs_t* const VAR_3, FILE* VAR_4, FILE* VAR_5, unsigned char VAR_6[VAR_0])
{
 size_t VAR_7[VAR_2];
    size_t VAR_8 = 1;
    unsigned long long VAR_9 = VAR_0;
    unsigned VAR_10 = 0;

    size_t const VAR_11 = FUNC_5(VAR_6, 1, VAR_0, VAR_5);
    if (VAR_11 != VAR_0) FUNC_0(50, "Pass-through write error");

    while (VAR_8) {
        VAR_8 = FUNC_4(VAR_7, 1, VAR_1, VAR_4);
        VAR_9 += VAR_8;
        VAR_10 = FUNC_1(VAR_3, VAR_5, VAR_7, VAR_8, VAR_10);
    }
    if (FUNC_3(VAR_4)) FUNC_0(51, "Read Error");

    FUNC_2(VAR_5, VAR_10);
    return VAR_9;
}
