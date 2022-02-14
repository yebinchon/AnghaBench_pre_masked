
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;

__attribute__((used)) static const char *FUNC_3(const char *VAR_1)
{
    struct stat VAR_2;

    if (!VAR_1)
        return ((void*)0);

    if (*VAR_1 != '/')
        return ((void*)0);

    if (FUNC_2(VAR_1, &VAR_2) < 0)
        return ((void*)0);

    if (!FUNC_0(VAR_2.st_mode))
        return ((void*)0);

    if (!(VAR_2.st_mode & VAR_0)) {
        FUNC_1(
            "Using %s as temporary directory, but it doesn't have "
            "the sticky bit set.",
            VAR_1);
    }

    return VAR_1;
}
