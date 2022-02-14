
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_set_t ;
typedef int hb_face_t ;


 int FUNC_0 (char,char,char,char) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int ) ;
 int * FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9 (void)
{
  hb_face_t *VAR_0 = FUNC_8("fonts/Roboto-Regular.abc.ttf");

  hb_set_t *VAR_1 = FUNC_3();
  hb_face_t *VAR_2;
  FUNC_2 (VAR_1, 'a');
  FUNC_2 (VAR_1, 'b');
  FUNC_2 (VAR_1, 'c');
  VAR_2 = FUNC_7 (VAR_0, FUNC_6 (VAR_1));
  FUNC_4 (VAR_1);

  FUNC_5 (VAR_0, VAR_2, FUNC_0 ('h','d','m','x'));

  FUNC_1 (VAR_2);
  FUNC_1 (VAR_0);
}
