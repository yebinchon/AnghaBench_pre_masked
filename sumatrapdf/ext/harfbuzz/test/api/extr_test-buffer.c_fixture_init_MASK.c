
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hb_buffer_t ;
typedef int gconstpointer ;
struct TYPE_3__ {int * buffer; } ;
typedef TYPE_1__ fixture_t ;







 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,unsigned int) ;
 int FUNC_4 (int *,int *,int ,int,int ) ;
 int FUNC_5 (int *,int *,int ,int,int ) ;
 int FUNC_6 (int *,int *,int ,int,int ) ;
 int * FUNC_7 () ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void
FUNC_8 (fixture_t *VAR_3, gconstpointer VAR_4)
{
  hb_buffer_t *VAR_5;
  unsigned int VAR_6;

  VAR_5 = VAR_3->buffer = FUNC_7 ();

  switch (FUNC_0 (VAR_4))
  {
    case 132:
      break;

    case 131:
      for (VAR_6 = 1; VAR_6 < FUNC_1 (VAR_1) - 1; VAR_6++)
 FUNC_3 (VAR_5, VAR_1[VAR_6], VAR_6);
      break;

    case 129:
      FUNC_5 (VAR_5, VAR_1, FUNC_1 (VAR_1), 1, FUNC_1 (VAR_1) - 2);
      break;

    case 130:
      FUNC_4 (VAR_5, VAR_0, FUNC_1 (VAR_0), 1, FUNC_1 (VAR_0) - 2);
      break;

    case 128:
      FUNC_6 (VAR_5, VAR_2, FUNC_1 (VAR_2), 1, FUNC_1 (VAR_2) - 2);
      break;

    default:
      FUNC_2 ();
  }
}
