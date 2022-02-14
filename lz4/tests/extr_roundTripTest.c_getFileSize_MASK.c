
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; int st_mode; } ;
struct _stat64 {int st_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,struct _stat64*) ;
 int FUNC_2 (char const*,struct stat*) ;

__attribute__((used)) static size_t FUNC_3(const char* VAR_1)
{
    int VAR_2;





    struct stat VAR_3;
    VAR_2 = FUNC_2(VAR_1, &VAR_3);
    if (VAR_2 || !FUNC_0(VAR_3.st_mode)) return 0;

    return (size_t)VAR_3.st_size;
}
