
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_limit {int base; int queries; } ;


 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,char const*,int*) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_3(const char *VAR_2)
{
    bool VAR_3;
    int VAR_4;
    struct query_limit *VAR_5;

    VAR_5 = (struct query_limit *)FUNC_2(VAR_1,
                                                          VAR_2, &VAR_4);
    if (!VAR_5)
        return 1;

    VAR_3 = FUNC_0(&VAR_5->queries, 1) > VAR_0;
    FUNC_1(VAR_1, &VAR_5->base);

    return VAR_3;
}
