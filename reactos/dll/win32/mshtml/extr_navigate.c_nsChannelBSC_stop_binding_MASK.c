
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nschannel; scalar_t__ is_doc_channel; } ;
typedef TYPE_1__ nsChannelBSC ;
typedef int HRESULT ;
typedef int BSCallback ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static HRESULT FUNC_6(BSCallback *VAR_2, HRESULT VAR_3)
{
    nsChannelBSC *VAR_4 = FUNC_4(VAR_2);

    if(VAR_3 != VAR_0) {
        if(FUNC_0(VAR_3))
            FUNC_3(VAR_4, VAR_3);
        else if(VAR_4->is_doc_channel && VAR_4->nschannel) {
            VAR_3 = FUNC_2(VAR_4);
            if(FUNC_1(VAR_3))
                return VAR_1;
        }
    }

    FUNC_5(VAR_4, VAR_3);
    return VAR_1;
}
