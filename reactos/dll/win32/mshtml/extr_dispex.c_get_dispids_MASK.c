
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tid_t ;
struct TYPE_8__ {int memid; } ;
struct TYPE_7__ {unsigned int cFuncs; } ;
typedef TYPE_1__ TYPEATTR ;
typedef int ITypeInfo ;
typedef int HRESULT ;
typedef TYPE_2__ FUNCDESC ;
typedef unsigned int DWORD ;
typedef int DISPID ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned int,TYPE_2__**) ;
 int FUNC_2 (int *,TYPE_1__**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_6 (int ,int **) ;
 int * FUNC_7 (unsigned int) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int FUNC_9 (int *,unsigned int,int,int ) ;

HRESULT FUNC_10(tid_t VAR_3, DWORD *VAR_4, DISPID **VAR_5)
{
    unsigned VAR_6, VAR_7;
    FUNCDESC *VAR_8;
    ITypeInfo *VAR_9;
    TYPEATTR *VAR_10;
    DISPID *VAR_11;
    HRESULT VAR_12;

    VAR_12 = FUNC_6(VAR_3, &VAR_9);
    if(FUNC_0(VAR_12))
        return VAR_12;

    VAR_12 = FUNC_2(VAR_9, &VAR_10);
    if(FUNC_0(VAR_12)) {
        FUNC_3(VAR_9);
        return VAR_12;
    }

    VAR_7 = VAR_10->cFuncs;
    FUNC_5(VAR_9, VAR_10);

    VAR_11 = FUNC_7(VAR_7*sizeof(DISPID));
    if(!VAR_11) {
        FUNC_3(VAR_9);
        return VAR_0;
    }

    for(VAR_6=0; VAR_6 < VAR_7; VAR_6++) {
        VAR_12 = FUNC_1(VAR_9, VAR_6, &VAR_8);
        if(FUNC_0(VAR_12))
            break;

        VAR_11[VAR_6] = VAR_8->memid;
        FUNC_4(VAR_9, VAR_8);
    }

    FUNC_3(VAR_9);
    if(FUNC_0(VAR_12)) {
        FUNC_8(VAR_11);
        return VAR_12;
    }

    FUNC_9(VAR_11, VAR_7, sizeof(DISPID), VAR_2);

    *VAR_4 = VAR_7;
    *VAR_5 = VAR_11;
    return VAR_1;
}
