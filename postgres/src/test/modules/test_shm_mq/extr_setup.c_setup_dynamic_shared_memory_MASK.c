
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_12__ {int workers_total; scalar_t__ workers_ready; scalar_t__ workers_attached; int mutex; } ;
typedef TYPE_1__ test_shm_mq_header ;
typedef int shm_toc_estimator ;
typedef int shm_toc ;
typedef TYPE_1__ shm_mq ;
typedef scalar_t__ int64 ;
typedef int dsm_segment ;
typedef scalar_t__ Size ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;
 TYPE_1__* FUNC_6 (TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_9 (int *,scalar_t__) ;
 int * FUNC_10 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,scalar_t__) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_16(int64 VAR_5, int VAR_6,
       dsm_segment **VAR_7, test_shm_mq_header **VAR_8,
       shm_mq **VAR_9, shm_mq **VAR_10)
{
 shm_toc_estimator VAR_11;
 int VAR_12;
 Size VAR_13;
 dsm_segment *VAR_14;
 shm_toc *VAR_15;
 test_shm_mq_header *VAR_16;


 if (VAR_5 < 0 || ((uint64) VAR_5) < VAR_4)
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("queue size must be at least %zu bytes",
      VAR_4)));
 if (VAR_5 != ((Size) VAR_5))
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("queue size overflows size_t")));
 FUNC_14(&VAR_11);
 FUNC_12(&VAR_11, sizeof(test_shm_mq_header));
 for (VAR_12 = 0; VAR_12 <= VAR_6; ++VAR_12)
  FUNC_12(&VAR_11, (Size) VAR_5);
 FUNC_13(&VAR_11, 2 + VAR_6);
 VAR_13 = FUNC_11(&VAR_11);


 VAR_14 = FUNC_1(FUNC_11(&VAR_11), 0);
 VAR_15 = FUNC_10(VAR_3, FUNC_2(VAR_14),
       VAR_13);


 VAR_16 = FUNC_9(VAR_15, sizeof(test_shm_mq_header));
 FUNC_0(&VAR_16->mutex);
 VAR_16->workers_total = VAR_6;
 VAR_16->workers_attached = 0;
 VAR_16->workers_ready = 0;
 FUNC_15(VAR_15, 0, VAR_16);


 for (VAR_12 = 0; VAR_12 <= VAR_6; ++VAR_12)
 {
  shm_mq *VAR_17;

  VAR_17 = FUNC_6(FUNC_9(VAR_15, (Size) VAR_5),
         (Size) VAR_5);
  FUNC_15(VAR_15, VAR_12 + 1, VAR_17);

  if (VAR_12 == 0)
  {

   FUNC_8(VAR_17, VAR_2);
   *VAR_9 = VAR_17;
  }
  if (VAR_12 == VAR_6)
  {

   FUNC_7(VAR_17, VAR_2);
   *VAR_10 = VAR_17;
  }
 }


 *VAR_7 = VAR_14;
 *VAR_8 = VAR_16;
}
