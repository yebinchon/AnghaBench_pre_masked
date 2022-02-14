
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ub4 ;
typedef scalar_t__ sword ;
struct oci_lob_self {size_t offset; int lob; TYPE_1__* E; } ;
struct TYPE_5__ {int eof; scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;
struct TYPE_4__ {int err; int svc; } ;


 scalar_t__ FUNC_0 (int ,int ,int ,size_t*,size_t,char*,size_t,int *,int *,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static size_t FUNC_1(php_stream *VAR_3, char *VAR_4, size_t VAR_5)
{
 struct oci_lob_self *VAR_6 = (struct oci_lob_self*)VAR_3->abstract;
 ub4 VAR_7;
 sword VAR_8;

 VAR_7 = (ub4) VAR_5;
 VAR_8 = FUNC_0(VAR_6->E->svc, VAR_6->E->err, VAR_6->lob,
  &VAR_7, VAR_6->offset, VAR_4, (ub4) VAR_5,
  ((void*)0), ((void*)0), 0, VAR_2);

 if (VAR_8 != VAR_1 && VAR_8 != VAR_0) {
  return (size_t)-1;
 }

 VAR_6->offset += VAR_7;
 if (VAR_7 < VAR_5) {
  VAR_3->eof = 1;
 }
 return VAR_7;
}
