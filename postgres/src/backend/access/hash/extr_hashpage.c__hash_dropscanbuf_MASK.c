
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ buf; } ;
struct TYPE_5__ {scalar_t__ hashso_bucket_buf; scalar_t__ hashso_split_bucket_buf; int hashso_buc_populated; int hashso_buc_split; TYPE_1__ currPos; } ;
typedef int Relation ;
typedef TYPE_2__* HashScanOpaque ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 void* VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;

void
FUNC_2(Relation VAR_1, HashScanOpaque VAR_2)
{

 if (FUNC_0(VAR_2->hashso_bucket_buf) &&
  VAR_2->hashso_bucket_buf != VAR_2->currPos.buf)
  FUNC_1(VAR_1, VAR_2->hashso_bucket_buf);
 VAR_2->hashso_bucket_buf = VAR_0;


 if (FUNC_0(VAR_2->hashso_split_bucket_buf) &&
  VAR_2->hashso_split_bucket_buf != VAR_2->currPos.buf)
  FUNC_1(VAR_1, VAR_2->hashso_split_bucket_buf);
 VAR_2->hashso_split_bucket_buf = VAR_0;


 if (FUNC_0(VAR_2->currPos.buf))
  FUNC_1(VAR_1, VAR_2->currPos.buf);
 VAR_2->currPos.buf = VAR_0;


 VAR_2->hashso_buc_populated = 0;
 VAR_2->hashso_buc_split = 0;
}
