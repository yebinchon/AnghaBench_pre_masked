
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_mode; } ;
typedef int char_u ;


 int FUNC_0 (int *,struct stat*) ;

long
FUNC_1(char_u *VAR_0)
{
    struct stat VAR_1;
    int VAR_2;

    VAR_2 = FUNC_0(VAR_0, &VAR_1);
    return VAR_2 == 0 ? (long)(unsigned short)VAR_1.st_mode : -1L;
}
