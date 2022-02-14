
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct list {int dummy; } ;
typedef int VARIANT ;
struct TYPE_4__ {int data; int entry; int * guid; } ;
typedef int TLBGuid ;
typedef TYPE_1__ TLBCustData ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct list*,int ) ;
 int FUNC_1 (int *) ;







 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int) ;
 int FUNC_7 (struct list*,int *) ;

__attribute__((used)) static HRESULT FUNC_8(struct list *VAR_2, TLBGuid *VAR_3, VARIANT *VAR_4)
{
    TLBCustData *VAR_5;

    switch(FUNC_2(VAR_4)){
    case 132:
    case 130:
    case 129:
    case 131:
    case 128:
    case 133:
    case 134:
        break;
    default:
        return VAR_0;
    }

    VAR_5 = FUNC_0(VAR_2, FUNC_1(VAR_3));

    if (!VAR_5) {
        VAR_5 = FUNC_6(sizeof(TLBCustData));
        if (!VAR_5)
            return VAR_1;

        VAR_5->guid = VAR_3;
        FUNC_5(&VAR_5->data);

        FUNC_7(VAR_2, &VAR_5->entry);
    }else
        FUNC_3(&VAR_5->data);

    return FUNC_4(&VAR_5->data, VAR_4);
}
