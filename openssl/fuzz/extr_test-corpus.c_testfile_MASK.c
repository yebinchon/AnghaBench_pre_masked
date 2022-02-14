
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; int st_mode; } ;
typedef int FILE ;


 int FUNC_0 (unsigned char*,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (char const*,char*) ;
 size_t FUNC_6 (unsigned char*,int,scalar_t__,int *) ;
 int FUNC_7 (unsigned char*) ;
 unsigned char* FUNC_8 (scalar_t__) ;
 int FUNC_9 (char*,char const*) ;
 scalar_t__ FUNC_10 (char const*,struct stat*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_11(const char *VAR_1)
{
    struct stat VAR_2;
    FILE *VAR_3;
    unsigned char *VAR_4;
    size_t VAR_5;

    if (FUNC_10(VAR_1, &VAR_2) < 0 || !FUNC_2(VAR_2.st_mode))
        return;
    FUNC_9("# %s\n", VAR_1);
    FUNC_4(VAR_0);
    VAR_3 = FUNC_5(VAR_1, "rb");
    if (VAR_3 == ((void*)0))
        return;
    VAR_4 = FUNC_8(VAR_2.st_size);
    if (VAR_4 != ((void*)0)) {
        VAR_5 = FUNC_6(VAR_4, 1, VAR_2.st_size, VAR_3);
        FUNC_1(VAR_5 == (size_t)VAR_2.st_size);
        FUNC_0(VAR_4, VAR_5);
        FUNC_7(VAR_4);
    }
    FUNC_3(VAR_3);
}
