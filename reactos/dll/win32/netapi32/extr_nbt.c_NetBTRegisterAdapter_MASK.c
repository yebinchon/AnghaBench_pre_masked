
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_8__ {int dwIndex; } ;
struct TYPE_7__ {TYPE_2__ ipr; } ;
typedef TYPE_1__ NetBTAdapter ;
typedef TYPE_2__ MIB_IPADDRROW ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_5 ;

__attribute__((used)) static UCHAR FUNC_4(const MIB_IPADDRROW *VAR_6)
{
    UCHAR VAR_7;
    NetBTAdapter *VAR_8;

    if (!VAR_6) return VAR_1;

    VAR_8 = FUNC_1(FUNC_0(), VAR_0, sizeof(NetBTAdapter));
    if (VAR_8)
    {
        VAR_8->ipr = *VAR_6;
        if (!FUNC_2(VAR_5, VAR_6->dwIndex, VAR_8))
        {
            FUNC_3(VAR_8);
            VAR_7 = VAR_4;
        }
        else
            VAR_7 = VAR_2;
    }
    else
        VAR_7 = VAR_3;
    return VAR_7;
}
