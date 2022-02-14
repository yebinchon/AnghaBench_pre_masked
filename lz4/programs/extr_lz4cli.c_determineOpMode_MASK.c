
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int operationMode_e ;


 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char const*) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static operationMode_e FUNC_2(const char* VAR_3)
{
    size_t const VAR_4 = FUNC_1(VAR_3);
    size_t const VAR_5 = FUNC_1(VAR_0);
    size_t const VAR_6= (VAR_4 > VAR_5) ? VAR_4-VAR_5 : 0;
    if (!FUNC_0(VAR_3+VAR_6, VAR_0)) return VAR_2;
    else return VAR_1;
}
