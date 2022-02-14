
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char const*,struct stat*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_4)
{
        struct stat VAR_5;
        if (FUNC_2(VAR_4, &VAR_5) != -1)
                return 1;
        else
                return 0;

}
