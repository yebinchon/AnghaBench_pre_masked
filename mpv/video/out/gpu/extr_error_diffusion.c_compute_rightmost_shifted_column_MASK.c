
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct error_diffusion_kernel {scalar_t__** pattern; int shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const struct error_diffusion_kernel *VAR_3)
{
    int VAR_4 = 0;
    for (int VAR_5 = 0; VAR_5 <= VAR_1; VAR_5++) {
        for (int VAR_6 = VAR_2; VAR_6 <= VAR_0; VAR_6++) {
            if (VAR_3->pattern[VAR_5][VAR_6 - VAR_2] != 0) {
                int VAR_7 = VAR_6 + VAR_5 * VAR_3->shift;



                FUNC_1(VAR_7 > 0);

                VAR_4 = FUNC_0(VAR_4, VAR_7);
            }
        }
    }
    return VAR_4;
}
