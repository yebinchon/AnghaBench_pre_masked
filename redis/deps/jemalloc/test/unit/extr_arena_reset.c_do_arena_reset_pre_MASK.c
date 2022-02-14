
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (void*,char*,...) ;
 int FUNC_2 (int ,int ,char*) ;
 size_t FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 () ;
 unsigned int FUNC_5 () ;
 size_t FUNC_6 (unsigned int) ;
 int FUNC_7 (int *,void*) ;
 scalar_t__ FUNC_8 (unsigned int) ;
 void* FUNC_9 (size_t,int) ;
 int * FUNC_10 () ;

__attribute__((used)) static void
FUNC_11(unsigned VAR_2, void ***VAR_3, unsigned *VAR_4) {

 unsigned VAR_5, VAR_6, VAR_7;
 size_t VAR_8;
 int VAR_9;
 tsdn_t *VAR_10;

 VAR_9 = FUNC_0(VAR_2) | VAR_0;

 VAR_5 = FUNC_5();
 VAR_6 = FUNC_4() > 32 ? 32 : FUNC_4();
 *VAR_4 = VAR_5 + VAR_6;
 *VAR_3 = (void **)FUNC_8(*VAR_4 * sizeof(void *));
 FUNC_1(*VAR_3, "Unexpected malloc() failure");


 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_8 = FUNC_6(VAR_7);
  (*VAR_3)[VAR_7] = FUNC_9(VAR_8, VAR_9);
  FUNC_1((*VAR_3)[VAR_7],
      "Unexpected mallocx(%zu, %#x) failure", VAR_8, VAR_9);
 }
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_8 = FUNC_3(VAR_7);
  (*VAR_3)[VAR_5 + VAR_7] = FUNC_9(VAR_8, VAR_9);
  FUNC_1((*VAR_3)[VAR_7],
      "Unexpected mallocx(%zu, %#x) failure", VAR_8, VAR_9);
 }

 VAR_10 = FUNC_10();


 for (VAR_7 = 0; VAR_7 < *VAR_4; VAR_7++) {
  FUNC_2(FUNC_7(VAR_10, (*VAR_3)[VAR_7]), 0,
      "Allocation should have queryable size");
 }
}
