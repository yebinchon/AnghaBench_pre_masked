
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hMF; } ;
typedef TYPE_1__ METAFILEPICT ;
typedef int HRESULT ;
typedef int * HGLOBAL ;


 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (int *,int,int **) ;

__attribute__((used)) static HRESULT FUNC_6(HGLOBAL VAR_4, HGLOBAL *VAR_5)
{
    HRESULT VAR_6;
    HGLOBAL VAR_7;
    METAFILEPICT *VAR_8;

    *VAR_5 = ((void*)0);


    VAR_6 = FUNC_5(VAR_4, VAR_1|VAR_2, &VAR_7);
    if (FUNC_1(VAR_6)) return VAR_6;

    VAR_8 = FUNC_3(VAR_7);
    if (!VAR_8) return VAR_0;


    VAR_8->hMF = FUNC_0(VAR_8->hMF, ((void*)0));
    if (VAR_8->hMF)
    {
       FUNC_4(VAR_7);
       *VAR_5 = VAR_7;
       return VAR_3;
    }
    else
    {
       FUNC_4(VAR_7);
       FUNC_2(VAR_7);
       return VAR_0;
    }
}
