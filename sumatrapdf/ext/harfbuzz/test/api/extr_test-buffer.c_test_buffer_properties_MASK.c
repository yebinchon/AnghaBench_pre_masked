
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hb_unicode_funcs_t ;
typedef int hb_buffer_t ;
typedef int gconstpointer ;
struct TYPE_3__ {int * buffer; } ;
typedef TYPE_1__ fixture_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,unsigned int) ;
 int FUNC_13 (int *,scalar_t__) ;
 int FUNC_14 (int *,int *) ;
 int * FUNC_15 (char*,int) ;
 int * FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 () ;

__attribute__((used)) static void
FUNC_19 (fixture_t *VAR_7, gconstpointer VAR_8)
{
  hb_buffer_t *VAR_9 = VAR_7->buffer;
  hb_unicode_funcs_t *VAR_10;



  FUNC_0 (FUNC_7 (VAR_9) == FUNC_18 ());
  FUNC_0 (FUNC_2 (VAR_9) == VAR_3);
  FUNC_0 (FUNC_6 (VAR_9) == VAR_6);
  FUNC_0 (FUNC_4 (VAR_9) == ((void*)0));



  VAR_10 = FUNC_16 (((void*)0));
  FUNC_14 (VAR_9, VAR_10);
  FUNC_17 (VAR_10);
  FUNC_0 (FUNC_7 (VAR_9) == VAR_10);

  FUNC_9 (VAR_9, VAR_4);
  FUNC_0 (FUNC_2 (VAR_9) == VAR_4);

  FUNC_13 (VAR_9, VAR_5);
  FUNC_0 (FUNC_6 (VAR_9) == VAR_5);

  FUNC_11 (VAR_9, FUNC_15 ("fa", -1));
  FUNC_0 (FUNC_4 (VAR_9) == FUNC_15 ("Fa", -1));

  FUNC_10 (VAR_9, VAR_1);
  FUNC_0 (FUNC_3 (VAR_9) == VAR_1);

  FUNC_12 (VAR_9, (unsigned int) -1);
  FUNC_0 (FUNC_5 (VAR_9) == (unsigned int) -1);




  FUNC_1 (VAR_9);

  FUNC_0 (FUNC_7 (VAR_9) == VAR_10);
  FUNC_0 (FUNC_2 (VAR_9) == VAR_3);
  FUNC_0 (FUNC_6 (VAR_9) == VAR_6);
  FUNC_0 (FUNC_4 (VAR_9) == ((void*)0));



  FUNC_0 (FUNC_3 (VAR_9) != VAR_0);
  FUNC_0 (FUNC_5 (VAR_9) != VAR_2);




  FUNC_9 (VAR_9, VAR_4);
  FUNC_0 (FUNC_2 (VAR_9) == VAR_4);

  FUNC_13 (VAR_9, VAR_5);
  FUNC_0 (FUNC_6 (VAR_9) == VAR_5);

  FUNC_11 (VAR_9, FUNC_15 ("fa", -1));
  FUNC_0 (FUNC_4 (VAR_9) == FUNC_15 ("Fa", -1));

  FUNC_10 (VAR_9, VAR_1);
  FUNC_0 (FUNC_3 (VAR_9) == VAR_1);

  FUNC_12 (VAR_9, (unsigned int) -1);
  FUNC_0 (FUNC_5 (VAR_9) == (unsigned int) -1);

  FUNC_8 (VAR_9);

  FUNC_0 (FUNC_7 (VAR_9) == FUNC_18 ());
  FUNC_0 (FUNC_2 (VAR_9) == VAR_3);
  FUNC_0 (FUNC_6 (VAR_9) == VAR_6);
  FUNC_0 (FUNC_4 (VAR_9) == ((void*)0));
  FUNC_0 (FUNC_3 (VAR_9) == VAR_0);
  FUNC_0 (FUNC_5 (VAR_9) == VAR_2);
}
