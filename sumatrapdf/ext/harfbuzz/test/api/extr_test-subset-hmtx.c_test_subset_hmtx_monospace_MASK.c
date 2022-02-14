
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_set_t ;
typedef int hb_face_t ;


 int FUNC_0 (char,char,char,char) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int ) ;
 int * FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10 (void)
{
  hb_face_t *VAR_0 = FUNC_9 ("fonts/Inconsolata-Regular.abc.ttf");
  hb_face_t *VAR_1 = FUNC_9 ("fonts/Inconsolata-Regular.ac.ttf");

  hb_set_t *VAR_2 = FUNC_4 ();
  hb_face_t *VAR_3;
  FUNC_3 (VAR_2, 'a');
  FUNC_3 (VAR_2, 'c');
  VAR_3 = FUNC_8 (VAR_0, FUNC_7 (VAR_2));
  FUNC_5 (VAR_2);

  FUNC_1(VAR_3, 1);
  FUNC_6 (VAR_1, VAR_3, FUNC_0 ('h','m','t','x'));

  FUNC_2 (VAR_3);
  FUNC_2 (VAR_0);
  FUNC_2 (VAR_1);
}
