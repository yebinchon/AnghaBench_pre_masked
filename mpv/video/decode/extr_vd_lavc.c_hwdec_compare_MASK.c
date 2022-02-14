
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwdec_info {scalar_t__ auto_pos; scalar_t__ copying; scalar_t__ rank; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(const void *VAR_1, const void *VAR_2)
{
    struct hwdec_info *VAR_3 = (void *)VAR_1;
    struct hwdec_info *VAR_4 = (void *)VAR_2;

    if (VAR_3 == VAR_4)
        return 0;


    if ((VAR_3->auto_pos == VAR_0) != (VAR_4->auto_pos == VAR_0))
        return VAR_3->auto_pos == VAR_0 ? 1 : -1;

    if (VAR_3->copying != VAR_4->copying)
        return VAR_3->copying ? 1 : -1;

    if (VAR_3->auto_pos != VAR_4->auto_pos)
        return VAR_3->auto_pos > VAR_4->auto_pos ? 1 : -1;

    return VAR_3->rank > VAR_4->rank ? 1 :-1;
}
