
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int shm_toc ;
typedef int dsm_segment ;
typedef int dsm_handle ;
typedef int dsa_area ;
struct TYPE_2__ {int * area; int * segment; } ;
typedef int SharedRecordTypmodRegistry ;
typedef int MemoryContext ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int * FUNC_2 (void*,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*) ;
 int * FUNC_8 (int ,int ) ;
 void* FUNC_9 (int *,int ,int) ;

void
FUNC_10(dsm_handle VAR_6)
{
 dsm_segment *VAR_7;
 shm_toc *VAR_8;
 void *VAR_9;
 void *VAR_10;
 dsa_area *VAR_11;
 MemoryContext VAR_12;

 VAR_12 = FUNC_0(VAR_5);


 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7 == ((void*)0))
  FUNC_7(VAR_1, "could not attach to per-session DSM segment");
 VAR_8 = FUNC_8(VAR_4, FUNC_6(VAR_7));


 VAR_9 = FUNC_9(VAR_8, VAR_2, 0);
 VAR_11 = FUNC_2(VAR_9, VAR_7);


 VAR_0->segment = VAR_7;
 VAR_0->area = VAR_11;


 VAR_10 =
  FUNC_9(VAR_8, VAR_3, 0);
 FUNC_1((SharedRecordTypmodRegistry *)
          VAR_10);


 FUNC_5(VAR_7);
 FUNC_3(VAR_11);

 FUNC_0(VAR_12);
}
