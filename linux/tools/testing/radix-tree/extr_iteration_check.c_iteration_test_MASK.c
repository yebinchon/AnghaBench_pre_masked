
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 unsigned int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*,char*,unsigned int) ;
 scalar_t__ FUNC_4 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 () ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_7 (unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;

void FUNC_8(unsigned VAR_11, unsigned VAR_12)
{
 int VAR_13;

 FUNC_3(1, "Running %siteration tests for %d seconds\n",
   VAR_11 > 0 ? "multiorder " : "", VAR_12);

 VAR_3 = VAR_11;
 VAR_8 = 0;

 for (VAR_13 = 0; VAR_13 < 3; VAR_13++)
  VAR_5[VAR_13] = FUNC_6();

 if (FUNC_4(&VAR_9[0], ((void*)0), VAR_7, ((void*)0))) {
  FUNC_2("create tagged iteration thread");
  FUNC_0(1);
 }
 if (FUNC_4(&VAR_9[1], ((void*)0), VAR_10, ((void*)0))) {
  FUNC_2("create untagged iteration thread");
  FUNC_0(1);
 }
 if (FUNC_4(&VAR_9[2], ((void*)0), VAR_1, ((void*)0))) {
  FUNC_2("create add entry thread");
  FUNC_0(1);
 }
 if (FUNC_4(&VAR_9[3], ((void*)0), VAR_4, ((void*)0))) {
  FUNC_2("create remove entry thread");
  FUNC_0(1);
 }
 if (FUNC_4(&VAR_9[4], ((void*)0), VAR_6, ((void*)0))) {
  FUNC_2("create tag entry thread");
  FUNC_0(1);
 }

 FUNC_7(VAR_12);
 VAR_8 = 1;

 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  if (FUNC_5(VAR_9[VAR_13], ((void*)0))) {
   FUNC_2("pthread_join");
   FUNC_0(1);
  }
 }

 FUNC_1(&VAR_2);
}
