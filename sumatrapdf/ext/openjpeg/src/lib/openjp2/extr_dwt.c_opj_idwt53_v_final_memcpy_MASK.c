
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t OPJ_SIZE_T ;
typedef size_t OPJ_INT32 ;


 int FUNC_0 (size_t const*) ;
 size_t VAR_0 ;
 int FUNC_1 (size_t*,int ) ;
 size_t VAR_1 ;

__attribute__((used)) static
void FUNC_2(OPJ_INT32* VAR_2,
                               const OPJ_INT32* VAR_3,
                               OPJ_INT32 VAR_4,
                               OPJ_SIZE_T VAR_5)
{
    OPJ_INT32 VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {





        FUNC_1(&VAR_2[(OPJ_SIZE_T)VAR_6 * VAR_5 + 0],
               FUNC_0(&VAR_3[VAR_0 * VAR_6 + 0]));
        FUNC_1(&VAR_2[(OPJ_SIZE_T)VAR_6 * VAR_5 + VAR_1],
               FUNC_0(&VAR_3[VAR_0 * VAR_6 + VAR_1]));
    }
}
