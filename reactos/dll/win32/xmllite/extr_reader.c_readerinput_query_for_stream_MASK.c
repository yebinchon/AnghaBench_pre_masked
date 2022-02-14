
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stream; int input; } ;
typedef TYPE_1__ xmlreaderinput ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,void**) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static inline HRESULT FUNC_2(xmlreaderinput *VAR_3)
{
    HRESULT VAR_4;

    FUNC_1(VAR_3);
    VAR_4 = FUNC_0(VAR_3->input, &VAR_1, (void**)&VAR_3->stream);
    if (VAR_4 != VAR_2)
        VAR_4 = FUNC_0(VAR_3->input, &VAR_0, (void**)&VAR_3->stream);

    return VAR_4;
}
