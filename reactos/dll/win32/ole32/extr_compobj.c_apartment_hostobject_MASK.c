
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host_object_params {int stream; int iid; int clsid; int apartment_threaded; int regdata; } ;
struct apartment {int dummy; } ;
typedef int WCHAR ;
typedef int LARGE_INTEGER ;
typedef int IUnknown ;
typedef int HRESULT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int *,int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int const,int ,int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (struct apartment*,int *,int ,int *,int *,void**) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ) ;

__attribute__((used)) static HRESULT FUNC_10(struct apartment *VAR_5,
                                    const struct host_object_params *VAR_6)
{
    IUnknown *VAR_7;
    HRESULT VAR_8;
    static const LARGE_INTEGER VAR_9;
    WCHAR VAR_10[VAR_0+1];

    FUNC_5("clsid %s, iid %s\n", FUNC_8(&VAR_6->clsid), FUNC_8(&VAR_6->iid));

    if (!FUNC_9(&VAR_6->regdata, VAR_10, FUNC_0(VAR_10)))
    {

        FUNC_6("class %s not registered inproc\n", FUNC_8(&VAR_6->clsid));
        return VAR_3;
    }

    VAR_8 = FUNC_7(VAR_5, VAR_10, VAR_6->apartment_threaded,
                                  &VAR_6->clsid, &VAR_6->iid, (void **)&VAR_7);
    if (FUNC_2(VAR_8))
        return VAR_8;

    VAR_8 = FUNC_1(VAR_6->stream, &VAR_6->iid, VAR_7, VAR_1, ((void*)0), VAR_2);
    if (FUNC_2(VAR_8))
        FUNC_4(VAR_7);
    FUNC_3(VAR_6->stream, VAR_9, VAR_4, ((void*)0));

    return VAR_8;
}
