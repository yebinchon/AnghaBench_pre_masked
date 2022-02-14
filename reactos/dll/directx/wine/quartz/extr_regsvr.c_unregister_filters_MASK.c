
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regsvr_filter {int clsid; int category; } ;
typedef int LPVOID ;
typedef int IFilterMapper2 ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static HRESULT FUNC_6(struct regsvr_filter const *VAR_3)
{
    HRESULT VAR_4;
    IFilterMapper2* VAR_5;

    FUNC_1(((void*)0));

    VAR_4 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_2, (LPVOID*)&VAR_5);

    if (FUNC_5(VAR_4)) {
 for (; FUNC_5(VAR_4) && VAR_3->clsid; ++VAR_3)
     VAR_4 = FUNC_4(VAR_5, VAR_3->category, ((void*)0), VAR_3->clsid);
 FUNC_3(VAR_5);
    }

    FUNC_2();

    return VAR_4;
}
