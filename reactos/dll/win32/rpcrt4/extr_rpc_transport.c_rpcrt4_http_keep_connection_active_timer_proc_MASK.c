
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {int frag_len; } ;
struct TYPE_7__ {TYPE_1__ common; } ;
typedef TYPE_2__ RpcPktHdr ;
typedef int PVOID ;
typedef int HINTERNET ;
typedef int DWORD ;
typedef int BOOLEAN ;


 int FUNC_0 (int ,TYPE_2__*,int ,int *) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ,int,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static VOID FUNC_3(PVOID VAR_1, BOOLEAN VAR_2)
{
    HINTERNET VAR_3 = VAR_1;
    RpcPktHdr *VAR_4;

    VAR_4 = FUNC_1(VAR_0, 0x0001,
                                      0, 0);
    if (VAR_4)
    {
        DWORD VAR_5;
        FUNC_0(VAR_3, VAR_4, VAR_4->common.frag_len, &VAR_5);
        FUNC_2(VAR_4);
    }
}
