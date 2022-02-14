
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
  hb_face_t *VAR_0 = FUNC_9("fonts/Roboto-Regular.abc.ttf");

  hb_set_t *VAR_1 = FUNC_4();
  hb_face_t *VAR_2;
  FUNC_3 (VAR_1, 'a');
  FUNC_3 (VAR_1, 'b');
  FUNC_3 (VAR_1, 'c');
  VAR_2 = FUNC_8 (VAR_0, FUNC_7 (VAR_1));
  FUNC_5 (VAR_1);

  FUNC_1(VAR_2, 4);
  FUNC_6 (VAR_0, VAR_2, FUNC_0 ('h','m','t','x'));

  FUNC_2 (VAR_2);
  FUNC_2 (VAR_0);
}
