
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bstr ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int * VAR_0 ;
 char const** VAR_1 ;

__attribute__((used)) static const char *FUNC_1(bstr VAR_2)
{
    for (int VAR_3 = 0; VAR_3 < 3; VAR_3++) {
        if (FUNC_0(VAR_2, VAR_0[VAR_3]))
            return VAR_1[VAR_3];
    }
    return ((void*)0);
}
