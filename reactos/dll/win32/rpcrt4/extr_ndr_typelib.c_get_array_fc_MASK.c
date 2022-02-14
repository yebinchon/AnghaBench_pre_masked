
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ typekind; } ;
struct TYPE_7__ {scalar_t__ vt; int hreftype; } ;
typedef TYPE_1__ TYPEDESC ;
typedef TYPE_2__ TYPEATTR ;
typedef int ITypeInfo ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *,TYPE_2__**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__*) ;

__attribute__((used)) static unsigned char FUNC_6(ITypeInfo *VAR_6, TYPEDESC *VAR_7)
{
    if (FUNC_4(VAR_7->vt))
        return VAR_1;
    else if (VAR_7->vt == VAR_5)
    {
        ITypeInfo *VAR_8;
        TYPEATTR *VAR_9;
        unsigned char VAR_10;

        FUNC_0(VAR_6, VAR_7->hreftype, &VAR_8);
        FUNC_1(VAR_8, &VAR_9);

        if (VAR_9->typekind == VAR_3)
            VAR_10 = VAR_1;
        else if (VAR_9->typekind == VAR_4 && FUNC_5(VAR_8, VAR_9) == VAR_2)
            VAR_10 = VAR_1;
        else
            VAR_10 = VAR_0;

        FUNC_3(VAR_8, VAR_9);
        FUNC_2(VAR_8);

        return VAR_10;
    }
    else
        return VAR_0;
}
