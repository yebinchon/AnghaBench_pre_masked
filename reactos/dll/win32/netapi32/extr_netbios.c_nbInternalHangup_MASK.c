
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_9__ {int data; } ;
struct TYPE_11__ {int cs; TYPE_2__ impl; TYPE_1__* transport; } ;
struct TYPE_10__ {int data; } ;
struct TYPE_8__ {int (* hangup ) (int ,int ) ;} ;
typedef TYPE_3__ NetBIOSSession ;
typedef TYPE_4__ NetBIOSAdapter ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static UCHAR FUNC_4(NetBIOSAdapter *VAR_3, NetBIOSSession *VAR_4)
{
    UCHAR VAR_5;

    if (!VAR_3) return VAR_0;
    if (!VAR_4) return VAR_2;

    if (VAR_3->transport->hangup)
        VAR_5 = VAR_3->transport->hangup(VAR_3->impl.data, VAR_4->data);
    else
        VAR_5 = VAR_1;
    FUNC_0(&VAR_3->cs);
    FUNC_2(VAR_4, 0, sizeof(NetBIOSSession));
    FUNC_1(&VAR_3->cs);
    return VAR_5;
}
