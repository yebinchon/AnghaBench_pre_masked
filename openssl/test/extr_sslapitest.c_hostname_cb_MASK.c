
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(SSL *VAR_3, int *VAR_4, void *VAR_5)
{
    const char *VAR_6 = FUNC_0(VAR_3, VAR_2);

    if (VAR_6 != ((void*)0) && FUNC_1(VAR_6, "goodhost") == 0)
        return VAR_1;

    return VAR_0;
}
