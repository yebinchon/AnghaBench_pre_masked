
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int*,int *,int ) ;
 scalar_t__ FUNC_1 (char const*,struct stat*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_5, unsigned int VAR_6, int *VAR_7)
{
    struct stat VAR_8;

    if (VAR_5 == ((void*)0)) {
 FUNC_0(VAR_7, ((void*)0), VAR_2);
 return -1;
    }

    if (FUNC_1(VAR_5, &VAR_8) != 0) {
 if (VAR_6 & VAR_0)
     return 0;
 else {
     FUNC_0(VAR_7, ((void*)0), VAR_3);
     return -1;
 }
    }
    else if ((VAR_6 & VAR_4)) {
 FUNC_0(VAR_7, ((void*)0), VAR_1);
 return -1;
    }



    return 1;
}
