
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_filelist {char* name; } ;


 int FUNC_0 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
    const char *VAR_2 = ((const struct zip_filelist *)VAR_0)->name;
    const char *VAR_3 = ((const struct zip_filelist *)VAR_1)->name;

    if (VAR_2 == ((void*)0))
 return (VAR_3 != ((void*)0)) * -1;
    else if (VAR_3 == ((void*)0))
 return 1;

    return FUNC_0(VAR_2, VAR_3);
}
