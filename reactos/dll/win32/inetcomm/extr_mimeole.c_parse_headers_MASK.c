
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* prop; int entry; } ;
typedef TYPE_2__ header_t ;
struct TYPE_14__ {int headers; } ;
struct TYPE_12__ {int id; } ;
typedef TYPE_3__ MimeBody ;
typedef int IStream ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,char*) ;


 int FUNC_3 (int *,char**) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_6 (int *,int *) ;
 TYPE_2__* FUNC_7 (TYPE_3__*,char**) ;
 int FUNC_8 (TYPE_2__*,char**) ;

__attribute__((used)) static HRESULT FUNC_9(MimeBody *VAR_0, IStream *VAR_1)
{
    char *VAR_2, *VAR_3;
    HRESULT VAR_4;
    header_t *VAR_5;

    VAR_4 = FUNC_3(VAR_1, &VAR_2);
    if(FUNC_0(VAR_4)) return VAR_4;

    VAR_3 = VAR_2;
    while((VAR_5 = FUNC_7(VAR_0, &VAR_3)))
    {
        FUNC_8(VAR_5, &VAR_3);
        FUNC_6(&VAR_0->headers, &VAR_5->entry);

        switch(VAR_5->prop->id) {
        case 129:
            FUNC_5(VAR_0, VAR_5);
            break;
        case 128:
            FUNC_4(VAR_0, VAR_5);
            break;
        }
    }

    FUNC_2(FUNC_1(), 0, VAR_2);
    return VAR_4;
}
