
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ub4 ;
typedef scalar_t__ sword ;
struct oci_lob_self {int offset; int lob; TYPE_1__* E; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_5__ {scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;
struct TYPE_4__ {int err; int svc; } ;


 scalar_t__ FUNC_0 (int ,int ,int ,scalar_t__*,int ,char*,scalar_t__,int ,int *,int *,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ssize_t FUNC_1(php_stream *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct oci_lob_self *VAR_6 = (struct oci_lob_self*)VAR_3->abstract;
 ub4 VAR_7;
 sword VAR_8;

 VAR_7 = (ub4) VAR_5;
 VAR_8 = FUNC_0(VAR_6->E->svc, VAR_6->E->err, VAR_6->lob,
  &VAR_7, VAR_6->offset, (char*)VAR_4, (ub4) VAR_5,
  VAR_0,
  ((void*)0), ((void*)0), 0, VAR_2);

 if (VAR_8 != VAR_1) {
  return (ssize_t)-1;
 }

 VAR_6->offset += VAR_7;
 return VAR_7;
}
