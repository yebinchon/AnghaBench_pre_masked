
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct oci_lob_self {int lob; TYPE_1__* E; } ;
struct TYPE_5__ {scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;
struct TYPE_4__ {int err; int svc; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(php_stream *VAR_0)
{
 struct oci_lob_self *VAR_1 = (struct oci_lob_self*)VAR_0->abstract;
 FUNC_0(VAR_1->E->svc, VAR_1->E->err, VAR_1->lob, 0);
 return 0;
}
