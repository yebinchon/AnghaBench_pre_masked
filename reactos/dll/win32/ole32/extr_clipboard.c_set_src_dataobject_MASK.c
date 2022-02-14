
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int marshal_data; int * src_data; int * cached_enum; } ;
typedef TYPE_1__ ole_clipbrd ;
typedef int IUnknown ;
typedef int IDataObject ;
typedef int HWND ;
typedef int HRESULT ;


 int FUNC_0 (int ,int *,int *,int ,int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,void**) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,int *) ;

__attribute__((used)) static HRESULT FUNC_11(ole_clipbrd *VAR_4, IDataObject *VAR_5)
{
    HRESULT VAR_6;
    HWND VAR_7;

    if(FUNC_1(VAR_6 = FUNC_8(VAR_4, &VAR_7))) return VAR_6;

    if(VAR_4->src_data)
    {
        FUNC_9(VAR_4->marshal_data);

        FUNC_6(VAR_4->src_data);
        VAR_4->src_data = ((void*)0);
        FUNC_3(FUNC_2(), 0, VAR_4->cached_enum);
        VAR_4->cached_enum = ((void*)0);
    }

    if(VAR_5)
    {
        IUnknown *VAR_8;

        FUNC_4(VAR_5);
        VAR_4->src_data = VAR_5;

        FUNC_5(VAR_5, &VAR_1, (void**)&VAR_8);
        VAR_6 = FUNC_0(VAR_4->marshal_data, &VAR_0, VAR_8,
                                VAR_2, ((void*)0), VAR_3);
        FUNC_7(VAR_8);
        if(FUNC_1(VAR_6)) return VAR_6;
        VAR_6 = FUNC_10(VAR_4, VAR_5);
    }
    return VAR_6;
}
