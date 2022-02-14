
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subfn {scalar_t__ priority; int fname; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
    const struct subfn *VAR_2 = VAR_0;
    const struct subfn *VAR_3 = VAR_1;
    if (VAR_2->priority > VAR_3->priority)
        return -1;
    if (VAR_2->priority < VAR_3->priority)
        return 1;
    return FUNC_0(VAR_2->fname, VAR_3->fname);
}
