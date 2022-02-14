
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int pg_crc32c ;
struct TYPE_9__ {scalar_t__ magic; scalar_t__ total_len; scalar_t__ origin_timestamp; scalar_t__ origin_lsn; } ;
typedef TYPE_1__ TwoPhaseFileHeader ;
struct TYPE_13__ {int delayChkpt; } ;
struct TYPE_12__ {scalar_t__ total_len; scalar_t__ num_chunks; TYPE_2__* head; int tail; } ;
struct TYPE_11__ {int prepare_end_lsn; int prepare_start_lsn; } ;
struct TYPE_10__ {int len; scalar_t__ data; struct TYPE_10__* next; } ;
typedef TYPE_2__ StateFileChunk ;
typedef TYPE_3__* GlobalTransaction ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_3__*,int) ;
 scalar_t__ VAR_5 ;
 TYPE_3__* VAR_6 ;
 TYPE_5__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int ,int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;
 TYPE_4__ VAR_14 ;
 int FUNC_15 (scalar_t__,int ) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;

void
FUNC_16(GlobalTransaction VAR_18)
{
 TwoPhaseFileHeader *VAR_19;
 StateFileChunk *VAR_20;
 bool VAR_21;


 FUNC_3(VAR_11, 0,
         ((void*)0), 0);


 VAR_19 = (TwoPhaseFileHeader *) VAR_14.head->data;
 FUNC_0(VAR_19->magic == VAR_10);
 VAR_19->total_len = VAR_14.total_len + sizeof(pg_crc32c);

 VAR_21 = (VAR_15 != VAR_3 &&
      VAR_15 != VAR_0);

 if (VAR_21)
 {
  FUNC_0(VAR_16 != VAR_4);
  VAR_19->origin_lsn = VAR_16;
  VAR_19->origin_timestamp = VAR_17;
 }
 else
 {
  VAR_19->origin_lsn = VAR_4;
  VAR_19->origin_timestamp = 0;
 }






 if (VAR_19->total_len > VAR_5)
  FUNC_12(VAR_2,
    (FUNC_13(VAR_1),
     FUNC_14("two-phase state file maximum length exceeded")));
 FUNC_7(0, VAR_14.num_chunks);

 FUNC_4();

 VAR_7->delayChkpt = 1;

 FUNC_6();
 for (VAR_20 = VAR_14.head; VAR_20 != ((void*)0); VAR_20 = VAR_20->next)
  FUNC_10(VAR_20->data, VAR_20->len);

 FUNC_11(VAR_12);

 VAR_18->prepare_end_lsn = FUNC_9(VAR_9, VAR_13);

 if (VAR_21)
 {

  FUNC_15(VAR_16,
           VAR_18->prepare_end_lsn);
 }

 FUNC_8(VAR_18->prepare_end_lsn);




 VAR_18->prepare_start_lsn = VAR_8;
 FUNC_2(VAR_18, 0);






 VAR_7->delayChkpt = 0;






 VAR_6 = VAR_18;

 FUNC_1();







 FUNC_5(VAR_18->prepare_end_lsn, 0);

 VAR_14.tail = VAR_14.head = ((void*)0);
 VAR_14.num_chunks = 0;
}
