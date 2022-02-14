
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; scalar_t__ content; } ;
typedef TYPE_1__ HttpRequest ;


 size_t FUNC_0 (scalar_t__,size_t) ;
 int FUNC_1 (void*,scalar_t__,size_t) ;

__attribute__((used)) static size_t
FUNC_2 (void *VAR_0, size_t VAR_1, size_t VAR_2, void *VAR_3)
{
    size_t VAR_4 = VAR_1 *VAR_2;
    size_t VAR_5;
    HttpRequest *VAR_6 = VAR_3;

    if (VAR_6->size == 0)
        return 0;

    VAR_5 = FUNC_0(VAR_6->size, VAR_4);
    FUNC_1 (VAR_0, VAR_6->content, VAR_5);
    VAR_6->size -= VAR_5;
    VAR_6->content = VAR_6->content + VAR_5;

    return VAR_5;
}
