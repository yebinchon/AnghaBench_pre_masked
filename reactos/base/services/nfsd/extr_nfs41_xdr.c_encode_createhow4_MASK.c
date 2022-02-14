
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; int createattrs; scalar_t__ createverf; } ;
typedef TYPE_1__ createhow4 ;
typedef int bool_t ;
typedef int XDR ;




 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,int*) ;

__attribute__((used)) static bool_t FUNC_3(
    XDR *VAR_3,
    createhow4 *VAR_4)
{
    bool_t VAR_5 = VAR_2;

    if (!FUNC_2(VAR_3, &VAR_4->mode))
        return VAR_0;

    switch (VAR_4->mode)
    {
    case 128:
    case 129:
        VAR_5 = FUNC_0(VAR_3, VAR_4->createattrs);
        break;
    case 131:
        VAR_5 = FUNC_1(VAR_3, (char *)VAR_4->createverf, VAR_1);
        break;
    case 130:
        if (!FUNC_1(VAR_3, (char *)VAR_4->createverf, VAR_1))
            return VAR_0;
        if (!FUNC_0(VAR_3, VAR_4->createattrs))
            return VAR_0;
        break;
    }
    return VAR_5;
}
