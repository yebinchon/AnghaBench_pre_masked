
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_4__ {int guid; } ;
typedef TYPE_1__ TYPEATTR ;
typedef int ITypeInfo ;
typedef int HREFTYPE ;
typedef int GUID ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int*) ;
 int FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int *,TYPE_1__**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(ITypeInfo *VAR_1, WORD VAR_2, GUID *VAR_3)
{
    ITypeInfo *VAR_4;
    HREFTYPE VAR_5;
    TYPEATTR *VAR_6;
    int VAR_7, VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8)
    {
        FUNC_0(VAR_1, VAR_8, &VAR_7);
        if (VAR_7 & VAR_0)
            break;
    }


    if (VAR_8 == VAR_2)
        VAR_8 = 0;

    FUNC_2(VAR_1, VAR_8, &VAR_5);
    FUNC_1(VAR_1, VAR_5, &VAR_4);
    FUNC_3(VAR_4, &VAR_6);
    *VAR_3 = VAR_6->guid;
    FUNC_5(VAR_4, VAR_6);
    FUNC_4(VAR_4);
}
