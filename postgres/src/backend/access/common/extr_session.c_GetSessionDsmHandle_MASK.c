
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int shm_toc_estimator ;
typedef int shm_toc ;
typedef int dsm_segment ;
typedef int dsm_handle ;
typedef int dsa_area ;
struct TYPE_2__ {int * area; int * segment; } ;
typedef int SharedRecordTypmodRegistry ;
typedef int MemoryContext ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_1 () ;
 int FUNC_2 (int *,int *,int *) ;
 int VAR_8 ;
 int * FUNC_3 (void*,size_t,int ,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (size_t,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 void* FUNC_9 (int *,size_t) ;
 int * FUNC_10 (int ,int ,size_t) ;
 size_t FUNC_11 (int *) ;
 int FUNC_12 (int *,size_t) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,void*) ;

dsm_handle
FUNC_16(void)
{
 shm_toc_estimator VAR_9;
 shm_toc *VAR_10;
 dsm_segment *VAR_11;
 size_t VAR_12;
 size_t VAR_13;
 void *VAR_14;
 void *VAR_15;
 dsa_area *VAR_16;
 MemoryContext VAR_17;






 if (VAR_0->segment != ((void*)0))
  return FUNC_8(VAR_0->segment);


 VAR_17 = FUNC_0(VAR_8);
 FUNC_14(&VAR_9);


 FUNC_13(&VAR_9, 1);
 FUNC_12(&VAR_9, VAR_4);


 VAR_12 = FUNC_1();
 FUNC_13(&VAR_9, 1);
 FUNC_12(&VAR_9, VAR_12);


 VAR_13 = FUNC_11(&VAR_9);
 VAR_11 = FUNC_5(VAR_13, VAR_1);
 if (VAR_11 == ((void*)0))
 {
  FUNC_0(VAR_17);

  return VAR_2;
 }
 VAR_10 = FUNC_10(VAR_7,
       FUNC_7(VAR_11),
       VAR_13);


 VAR_14 = FUNC_9(VAR_10, VAR_4);
 VAR_16 = FUNC_3(VAR_14,
         VAR_4,
         VAR_3,
         VAR_11);
 FUNC_15(VAR_10, VAR_5, VAR_14);



 VAR_15 = FUNC_9(VAR_10, VAR_12);
 FUNC_2((SharedRecordTypmodRegistry *)
           VAR_15, VAR_11, VAR_16);
 FUNC_15(VAR_10, VAR_6,
       VAR_15);
 FUNC_6(VAR_11);
 FUNC_4(VAR_16);


 VAR_0->segment = VAR_11;
 VAR_0->area = VAR_16;

 FUNC_0(VAR_17);

 return FUNC_8(VAR_11);
}
