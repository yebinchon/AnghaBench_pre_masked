
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int specdata1; int specdata2; } ;
struct TYPE_6__ {char* linkdata; int linkdata_len; } ;
struct TYPE_8__ {TYPE_2__ devdata; TYPE_1__ lnk; } ;
struct TYPE_9__ {int type; TYPE_3__ u; } ;
typedef TYPE_4__ createtype4 ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char**,int *,int ) ;
 int FUNC_1 (int *,int*) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_3,
    createtype4 *VAR_4)
{
    bool_t VAR_5 = VAR_2;
    const char *VAR_6;

    if (!FUNC_1(VAR_3, &VAR_4->type))
        return VAR_0;

    switch (VAR_4->type)
    {
    case 128:
        VAR_6 = VAR_4->u.lnk.linkdata;
        VAR_5 = FUNC_0(VAR_3, (char**)&VAR_6, &VAR_4->u.lnk.linkdata_len,
            VAR_1);
        break;
    case 130:
    case 129:
        VAR_5 = FUNC_1(VAR_3, &VAR_4->u.devdata.specdata1);
        if (VAR_5 == VAR_2)
            VAR_5 = FUNC_1(VAR_3, &VAR_4->u.devdata.specdata2);
        break;
    default:

        break;
    }
    return VAR_5;
}
