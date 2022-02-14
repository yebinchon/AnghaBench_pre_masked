
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
typedef void* TransactionId ;
struct TYPE_4__ {scalar_t__ confirmed_flush; int catalog_xmin; } ;
struct TYPE_5__ {scalar_t__ candidate_xmin_lsn; TYPE_1__ data; int mutex; void* candidate_catalog_xmin; } ;
typedef TYPE_2__ ReplicationSlot ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (void*,int ) ;

void
FUNC_5(XLogRecPtr VAR_2, TransactionId VAR_3)
{
 bool VAR_4 = 0;
 ReplicationSlot *VAR_5;

 VAR_5 = VAR_1;

 FUNC_0(VAR_5 != ((void*)0));

 FUNC_2(&VAR_5->mutex);





 if (FUNC_4(VAR_3, VAR_5->data.catalog_xmin))
 {
 }






 else if (VAR_2 <= VAR_5->data.confirmed_flush)
 {
  VAR_5->candidate_catalog_xmin = VAR_3;
  VAR_5->candidate_xmin_lsn = VAR_2;


  VAR_4 = 1;
 }





 else if (VAR_5->candidate_xmin_lsn == VAR_0)
 {
  VAR_5->candidate_catalog_xmin = VAR_3;
  VAR_5->candidate_xmin_lsn = VAR_2;
 }
 FUNC_3(&VAR_5->mutex);


 if (VAR_4)
  FUNC_1(VAR_5->data.confirmed_flush);
}
