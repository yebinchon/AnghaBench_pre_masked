
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; int * default_domain; } ;
typedef TYPE_1__ RuntimeHost ;
typedef int MonoDomain ;
typedef int HRESULT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int **) ;
 int VAR_0 ;

__attribute__((used)) static HRESULT FUNC_3(RuntimeHost *VAR_1, MonoDomain **VAR_2)
{
    HRESULT VAR_3=VAR_0;

    FUNC_0(&VAR_1->lock);

    if (VAR_1->default_domain) goto end;

    VAR_3 = FUNC_2(VAR_1, &VAR_1->default_domain);

end:
    *VAR_2 = VAR_1->default_domain;

    FUNC_1(&VAR_1->lock);

    return VAR_3;
}
