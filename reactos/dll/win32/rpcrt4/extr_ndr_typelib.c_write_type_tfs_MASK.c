
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int typekind; } ;
struct TYPE_7__ {int vt; int hreftype; int lpadesc; int lptdesc; } ;
typedef TYPE_1__ TYPEDESC ;
typedef TYPE_2__ TYPEATTR ;
typedef int ITypeInfo ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int *,TYPE_2__**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__*) ;

 int FUNC_5 (char*,int,char*) ;



 int FUNC_6 (unsigned char*,size_t,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 size_t FUNC_9 (int *,unsigned char*,size_t*,int ) ;
 size_t FUNC_10 (int) ;
 size_t FUNC_11 (int *,unsigned char*,size_t*,int ,scalar_t__,scalar_t__) ;
 size_t FUNC_12 (int *,unsigned char*,size_t*,TYPE_2__*) ;

__attribute__((used)) static size_t FUNC_13(ITypeInfo *VAR_0, unsigned char *VAR_1,
        size_t *VAR_2, TYPEDESC *VAR_3, BOOL VAR_4, BOOL VAR_5)
{
    ITypeInfo *VAR_6;
    TYPEATTR *VAR_7;
    size_t VAR_8;

    FUNC_5("vt %d%s\n", VAR_3->vt, VAR_4 ? " (toplevel)" : "");

    if ((VAR_8 = FUNC_10(VAR_3->vt)))
        return VAR_8;

    switch (VAR_3->vt)
    {
    case 129:
        return FUNC_11(VAR_0, VAR_1, VAR_2, VAR_3->lptdesc, VAR_4, VAR_5);
    case 130:
        return FUNC_9(VAR_0, VAR_1, VAR_2, VAR_3->lpadesc);
    case 128:
        FUNC_1(VAR_0, VAR_3->hreftype, &VAR_6);
        FUNC_2(VAR_6, &VAR_7);

        switch (VAR_7->typekind)
        {
        case 131:
            VAR_8 = FUNC_12(VAR_6, VAR_1, VAR_2, VAR_7);
            break;
        default:
            FUNC_0("unhandled kind %u\n", VAR_7->typekind);
            VAR_8 = *VAR_2;
            FUNC_6(VAR_1, *VAR_2, 0);
            break;
        }

        FUNC_4(VAR_6, VAR_7);
        FUNC_3(VAR_6);
        break;
    default:

        FUNC_7(!FUNC_8(VAR_3->vt));
        FUNC_0("unhandled type %u\n", VAR_3->vt);
        VAR_8 = *VAR_2;
        FUNC_6(VAR_1, *VAR_2, 0);
        break;
    }

    return VAR_8;
}
