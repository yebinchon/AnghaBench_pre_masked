
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef long ssize_t ;
struct TYPE_5__ {long (* read ) (int ,void*,size_t) ;} ;
struct TYPE_6__ {long position; int user_data; TYPE_1__ op; } ;
typedef TYPE_2__ CdioDataSource_t ;


 int FUNC_0 (TYPE_2__*) ;
 long FUNC_1 (int ,void*,size_t) ;

ssize_t
FUNC_2(CdioDataSource_t* VAR_0, void *VAR_1, size_t VAR_2, size_t VAR_3)
{
  long VAR_4;

  if (!VAR_0) return 0;
  if (!FUNC_0(VAR_0)) return 0;

  VAR_4 = (VAR_0->op.read)(VAR_0->user_data, VAR_1, VAR_2*VAR_3);
  VAR_0->position += VAR_4;

  return VAR_4;
}
