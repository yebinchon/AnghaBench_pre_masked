
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter_kernel {scalar_t__ size; double filter_scale; } ;


 int FUNC_0 (int) ;
 double FUNC_1 (struct filter_kernel*,double) ;

__attribute__((used)) static void FUNC_2(struct filter_kernel *VAR_0, double VAR_1,
                               float *VAR_2)
{
    FUNC_0(VAR_0->size > 0);
    double VAR_3 = 0;
    for (int VAR_4 = 0; VAR_4 < VAR_0->size; VAR_4++) {
        double VAR_5 = VAR_1 - (VAR_4 - VAR_0->size / 2 + 1);
        double VAR_6 = FUNC_1(VAR_0, VAR_5 / VAR_0->filter_scale);
        VAR_2[VAR_4] = VAR_6;
        VAR_3 += VAR_6;
    }

    for (int VAR_7 = 0; VAR_7 < VAR_0->size; VAR_7++)
        VAR_2[VAR_7] /= VAR_3;
}
