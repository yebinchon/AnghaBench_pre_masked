
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xmlreader ;
struct TYPE_5__ {int len; } ;
typedef TYPE_1__ strval ;
typedef int WCHAR ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int const*,TYPE_1__ const*) ;

__attribute__((used)) static inline int FUNC_2(const xmlreader *VAR_0, const strval *VAR_1, const strval *VAR_2)
{
    if (VAR_1->len != VAR_2->len) return 0;
    return !FUNC_0(FUNC_1(VAR_0, VAR_1), FUNC_1(VAR_0, VAR_2), VAR_1->len*sizeof(WCHAR));
}
