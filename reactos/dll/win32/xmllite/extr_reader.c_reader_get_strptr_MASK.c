
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xmlreader ;
struct TYPE_3__ {int start; int * str; } ;
typedef TYPE_1__ strval ;
typedef int WCHAR ;


 int * FUNC_0 (int const*,int ) ;

__attribute__((used)) static inline WCHAR *FUNC_1(const xmlreader *VAR_0, const strval *VAR_1)
{
    return VAR_1->str ? VAR_1->str : FUNC_0(VAR_0, VAR_1->start);
}
