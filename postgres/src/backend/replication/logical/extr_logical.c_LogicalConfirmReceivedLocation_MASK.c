
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
struct TYPE_3__ {scalar_t__ catalog_xmin; scalar_t__ restart_lsn; scalar_t__ confirmed_flush; } ;
struct TYPE_4__ {scalar_t__ candidate_xmin_lsn; scalar_t__ candidate_restart_valid; scalar_t__ candidate_catalog_xmin; scalar_t__ candidate_restart_lsn; scalar_t__ effective_catalog_xmin; int mutex; TYPE_1__ data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,char*,int,int) ;

void
FUNC_9(XLogRecPtr VAR_4)
{
 FUNC_0(VAR_4 != VAR_2);


 if (VAR_3->candidate_xmin_lsn != VAR_2 ||
  VAR_3->candidate_restart_valid != VAR_2)
 {
  bool VAR_5 = 0;
  bool VAR_6 = 0;

  FUNC_5(&VAR_3->mutex);

  VAR_3->data.confirmed_flush = VAR_4;


  if (VAR_3->candidate_xmin_lsn != VAR_2 &&
   VAR_3->candidate_xmin_lsn <= VAR_4)
  {
   if (FUNC_7(VAR_3->candidate_catalog_xmin) &&
    VAR_3->data.catalog_xmin != VAR_3->candidate_catalog_xmin)
   {
    VAR_3->data.catalog_xmin = VAR_3->candidate_catalog_xmin;
    VAR_3->candidate_catalog_xmin = VAR_1;
    VAR_3->candidate_xmin_lsn = VAR_2;
    VAR_5 = 1;
   }
  }

  if (VAR_3->candidate_restart_valid != VAR_2 &&
   VAR_3->candidate_restart_valid <= VAR_4)
  {
   FUNC_0(VAR_3->candidate_restart_lsn != VAR_2);

   VAR_3->data.restart_lsn = VAR_3->candidate_restart_lsn;
   VAR_3->candidate_restart_lsn = VAR_2;
   VAR_3->candidate_restart_valid = VAR_2;
   VAR_6 = 1;
  }

  FUNC_6(&VAR_3->mutex);


  if (VAR_5 || VAR_6)
  {
   FUNC_1();
   FUNC_2();
   FUNC_8(VAR_0, "updated xmin: %u restart: %u", VAR_5, VAR_6);
  }







  if (VAR_5)
  {
   FUNC_5(&VAR_3->mutex);
   VAR_3->effective_catalog_xmin = VAR_3->data.catalog_xmin;
   FUNC_6(&VAR_3->mutex);

   FUNC_4(0);
   FUNC_3();
  }
 }
 else
 {
  FUNC_5(&VAR_3->mutex);
  VAR_3->data.confirmed_flush = VAR_4;
  FUNC_6(&VAR_3->mutex);
 }
}
