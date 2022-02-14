
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ns; int nsdef; } ;
typedef TYPE_1__ xmlreader ;
typedef int strval ;
struct ns {int entry; int * element; int prefix; int uri; } ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int) ;
 struct ns* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,struct ns*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int const*,int *) ;

__attribute__((used)) static HRESULT FUNC_7(xmlreader *VAR_1, const strval *VAR_2, const strval *VAR_3, BOOL VAR_4)
{
    struct ns *VAR_5;
    HRESULT VAR_6;

    VAR_5 = FUNC_3(VAR_1, sizeof(*VAR_5));
    if (!VAR_5) return VAR_0;

    if (VAR_4)
        FUNC_2(&VAR_5->prefix, 0, sizeof(VAR_5->prefix));
    else {
        VAR_6 = FUNC_6(VAR_1, VAR_2, &VAR_5->prefix);
        if (FUNC_0(VAR_6)) {
            FUNC_4(VAR_1, VAR_5);
            return VAR_6;
        }
    }

    VAR_6 = FUNC_6(VAR_1, VAR_3, &VAR_5->uri);
    if (FUNC_0(VAR_6)) {
        FUNC_5(VAR_1, &VAR_5->prefix);
        FUNC_4(VAR_1, VAR_5);
        return VAR_6;
    }

    VAR_5->element = ((void*)0);
    FUNC_1(VAR_4 ? &VAR_1->nsdef : &VAR_1->ns, &VAR_5->entry);
    return VAR_6;
}
