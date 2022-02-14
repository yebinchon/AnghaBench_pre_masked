
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int hb_subset_input_t ;
typedef int hb_set_t ;
typedef int hb_face_t ;
typedef char hb_codepoint_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,char const) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *,int *) ;
 int * FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10 (void)
{
  hb_face_t *VAR_0 = FUNC_9 ("fonts/oom-ccc61c92d589f895174cdef6ff2e3b20e9999a1a");

  hb_set_t *VAR_1 = FUNC_4();
  const hb_codepoint_t VAR_2[] =
  {
    'A', 'B', 'C', 'D', 'E', 'X', 'Y', 'Z', '1', '2',
    '3', '@', '_', '%', '&', ')', '*', '$', '!'
  };
  unsigned int VAR_3;
  for (VAR_3 = 0; VAR_3 < sizeof (VAR_2) / sizeof (hb_codepoint_t); VAR_3++)
  {
    FUNC_3 (VAR_1, VAR_2[VAR_3]);
  }

  hb_subset_input_t *VAR_4 = FUNC_7 (VAR_1);
  FUNC_6 (VAR_4, 1);
  FUNC_5 (VAR_1);

  hb_face_t *VAR_5 = FUNC_8 (VAR_0, VAR_4);
  FUNC_0 (*VAR_5);
  FUNC_0 (VAR_5 == FUNC_2 ());

  FUNC_1 (VAR_5);
  FUNC_1 (VAR_0);
}
