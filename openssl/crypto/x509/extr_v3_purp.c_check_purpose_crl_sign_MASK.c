
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_PURPOSE ;
typedef int X509 ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*,int ) ;

__attribute__((used)) static int FUNC_2(const X509_PURPOSE *VAR_1, const X509 *VAR_2,
                                  int VAR_3)
{
    if (VAR_3) {
        int VAR_4;
        if ((VAR_4 = FUNC_0(VAR_2)) != 2)
            return VAR_4;
        else
            return 0;
    }
    if (FUNC_1(VAR_2, VAR_0))
        return 0;
    return 1;
}
