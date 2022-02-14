
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_PURPOSE ;
typedef int X509 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*,int) ;
 scalar_t__ FUNC_2 (int const*,int ) ;
 scalar_t__ FUNC_3 (int const*,int ) ;

__attribute__((used)) static int FUNC_4(const X509_PURPOSE *VAR_4, const X509 *VAR_5,
                                    int VAR_6)
{
    if (FUNC_3(VAR_5, VAR_3))
        return 0;
    if (VAR_6)
        return FUNC_0(VAR_5);

    if (FUNC_1(VAR_5, VAR_0 | VAR_1))
        return 0;

    if (FUNC_2(VAR_5, VAR_2))
        return 0;
    return 1;
}
