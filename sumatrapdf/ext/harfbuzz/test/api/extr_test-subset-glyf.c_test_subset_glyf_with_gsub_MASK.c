
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_subset_input_t ;
typedef int hb_set_t ;
typedef int hb_face_t ;


 int FUNC_0 (char,char,char,char) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int *,int ) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *,int *) ;
 int * FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11 (void)
{
  hb_face_t *VAR_0 = FUNC_10 ("fonts/Roboto-Regular.gsub.fil.ttf");
  hb_face_t *VAR_1 = FUNC_10 ("fonts/Roboto-Regular.gsub.fi.ttf");

  hb_set_t *VAR_2 = FUNC_4();
  FUNC_3 (VAR_2, 102);
  FUNC_3 (VAR_2, 105);

  hb_subset_input_t *VAR_3 = FUNC_8 (VAR_2);
  FUNC_5 (VAR_2);
  FUNC_6 (VAR_3, 0);

  hb_face_t *VAR_4 = FUNC_9 (VAR_0, VAR_3);

  FUNC_7 (VAR_1, VAR_4, FUNC_0 ('g','l','y','f'));
  FUNC_7 (VAR_1, VAR_4, FUNC_0 ('l','o','c', 'a'));
  FUNC_1(VAR_4, 5, 1);

  FUNC_2 (VAR_4);
  FUNC_2 (VAR_1);
  FUNC_2 (VAR_0);
}
