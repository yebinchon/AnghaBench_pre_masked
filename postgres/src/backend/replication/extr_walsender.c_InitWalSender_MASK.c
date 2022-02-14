
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WALSegmentContext ;
typedef int WALOpenSegment ;
typedef int LagTracker ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (int *,int *,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;

void
FUNC_7(void)
{
 VAR_2 = FUNC_4();


 FUNC_0();
 FUNC_1();
 FUNC_5(VAR_0);


 VAR_3 = FUNC_3(VAR_1, sizeof(LagTracker));


 VAR_5 = (WALOpenSegment *)
  FUNC_2(VAR_1, sizeof(WALOpenSegment));
 VAR_4 = (WALSegmentContext *)
  FUNC_2(VAR_1, sizeof(WALSegmentContext));
 FUNC_6(VAR_5, VAR_4, VAR_6, ((void*)0));
}
