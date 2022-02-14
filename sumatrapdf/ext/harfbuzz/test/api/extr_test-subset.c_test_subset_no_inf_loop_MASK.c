
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_subset_input_t ;
typedef int hb_set_t ;
typedef int hb_face_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,char) ;
 int * FUNC_4 (int *,int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9 (void)
{
  hb_face_t *VAR_0 = FUNC_8("fonts/clusterfuzz-testcase-minimized-hb-subset-fuzzer-5521982557782016");

  hb_subset_input_t *VAR_1 = FUNC_5 ();
  hb_set_t *VAR_2 = FUNC_7 (VAR_1);
  FUNC_3 (VAR_2, 'a');
  FUNC_3 (VAR_2, 'b');
  FUNC_3 (VAR_2, 'c');

  hb_face_t *VAR_3 = FUNC_4 (VAR_0, VAR_1);
  FUNC_0 (*VAR_3);
  FUNC_0 (VAR_3 == FUNC_2 ());

  FUNC_6 (VAR_1);
  FUNC_1 (VAR_3);
  FUNC_1 (VAR_0);
}
