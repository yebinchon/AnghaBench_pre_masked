
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (scalar_t__*,int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_2(const ASN1_INTEGER *VAR_5)
{
    int64_t VAR_6;

    if (!FUNC_0(&VAR_6, VAR_5)) {
        FUNC_1(0, VAR_0);
        return -1;
    }
    if (VAR_6 < VAR_4) {
        FUNC_1(0, VAR_2);
        return -1;
    }
    if (VAR_6 > VAR_3) {
        FUNC_1(0, VAR_1);
        return -1;
    }
    return (int)VAR_6;
}
