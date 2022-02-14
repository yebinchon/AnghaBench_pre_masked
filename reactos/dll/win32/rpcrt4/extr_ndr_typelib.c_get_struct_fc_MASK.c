
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ WORD ;
typedef int VARTYPE ;
struct TYPE_10__ {int vt; TYPE_1__* lpadesc; } ;
struct TYPE_11__ {TYPE_2__ tdesc; } ;
struct TYPE_12__ {TYPE_3__ elemdescVar; } ;
typedef TYPE_4__ VARDESC ;
struct TYPE_13__ {scalar_t__ cVars; } ;
struct TYPE_9__ {int tdescElem; } ;
typedef TYPE_5__ TYPEATTR ;
typedef int ITypeInfo ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,scalar_t__,TYPE_4__**) ;
 int FUNC_2 (int *,TYPE_4__*) ;

 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int) ;

__attribute__((used)) static unsigned char FUNC_5(ITypeInfo *VAR_3, TYPEATTR *VAR_4)
{
    unsigned char VAR_5 = VAR_2;
    VARDESC *VAR_6;
    VARTYPE VAR_7;
    WORD VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_4->cVars; VAR_8++)
    {
        FUNC_1(VAR_3, VAR_8, &VAR_6);
        VAR_7 = VAR_6->elemdescVar.tdesc.vt;

        switch (VAR_7)
        {
        case 128:
            if (FUNC_3(VAR_3, &VAR_6->elemdescVar.tdesc.lpadesc->tdescElem) == VAR_0)
                VAR_5 = VAR_1;
            break;
        default:
            if (!FUNC_4(VAR_7))
            {
                FUNC_0("unhandled type %u\n", VAR_7);
                VAR_5 = VAR_1;
            }
            break;
        }

        FUNC_2(VAR_3, VAR_6);
    }

    return VAR_5;
}
