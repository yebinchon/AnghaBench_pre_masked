
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {int len; char* start; } ;


 int FUNC_0 (struct bstr,char*,...) ;
 int FUNC_1 (double) ;

__attribute__((used)) static int FUNC_2(struct bstr VAR_0, double *VAR_1, char VAR_2)
{
    int VAR_3, VAR_4, VAR_5;
    double VAR_6;
    *VAR_1 = 0;
    if (FUNC_0(VAR_0, "%d:%d:%lf%n", &VAR_3, &VAR_4, &VAR_6, &VAR_5) >= 3)
        *VAR_1 = 3600 * VAR_3 + 60 * VAR_4 + VAR_6;
    else if (FUNC_0(VAR_0, "%d:%lf%n", &VAR_3, &VAR_6, &VAR_5) >= 2)
        *VAR_1 = 60 * VAR_3 + VAR_6;
    else if (FUNC_0(VAR_0, "%lf%n", &VAR_6, &VAR_5) >= 1)
        *VAR_1 = VAR_6;
    else
        return 0;
    if (VAR_5 < VAR_0.len && VAR_0.start[VAR_5] != VAR_2)
        return 0;
    if (!FUNC_1(*VAR_1))
        return 0;
    return VAR_5;
}
