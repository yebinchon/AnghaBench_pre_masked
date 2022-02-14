
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* val; } ;
typedef TYPE_1__ PQconninfoOption ;


 TYPE_1__* FUNC_0 (TYPE_1__*,char const*) ;

__attribute__((used)) static const char *
FUNC_1(PQconninfoOption *VAR_0,
    const char *VAR_1)
{
 PQconninfoOption *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_2 ? VAR_2->val : ((void*)0);
}
