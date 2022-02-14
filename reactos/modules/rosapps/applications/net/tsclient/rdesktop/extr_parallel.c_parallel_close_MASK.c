
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* rdpdr_device; } ;
struct TYPE_5__ {scalar_t__ handle; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef int NTSTATUS ;
typedef int NTHANDLE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static NTSTATUS
FUNC_2(RDPCLIENT * VAR_1, NTHANDLE VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 >= 0)
  VAR_1->rdpdr_device[VAR_3].handle = 0;
 FUNC_0(VAR_2);
 return VAR_0;
}
