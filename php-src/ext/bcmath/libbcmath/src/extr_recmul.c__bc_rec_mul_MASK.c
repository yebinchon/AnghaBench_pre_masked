
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_1__ ;


typedef TYPE_1__* bc_num ;
struct TYPE_20__ {int n_len; scalar_t__ n_sign; scalar_t__ n_value; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*,int,TYPE_1__*,int,TYPE_1__**,int) ;
 int VAR_1 ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__**) ;
 int FUNC_7 (TYPE_1__**) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int,int ) ;
 int FUNC_10 (TYPE_1__*,TYPE_1__*,TYPE_1__**,int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_11 (int,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_12 (bc_num VAR_3, int VAR_4, bc_num VAR_5, int VAR_6, bc_num *VAR_7,
      int VAR_8)
{
  bc_num VAR_9, VAR_10, VAR_11, VAR_12;
  bc_num VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
  int VAR_18, VAR_19, VAR_20;
  int VAR_21, VAR_22;


  if ((VAR_4+VAR_6) < VAR_2
      || VAR_4 < VAR_0
      || VAR_6 < VAR_0 ) {
    FUNC_4 (VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
    return;
  }


  VAR_18 = (FUNC_1(VAR_4, VAR_6)+1) / 2;


  if (VAR_4 < VAR_18) {
    VAR_10 = FUNC_5 (FUNC_0(VAR_1));
    VAR_9 = FUNC_11 (VAR_4,0, VAR_3->n_value);
  } else {
    VAR_10 = FUNC_11 (VAR_4-VAR_18, 0, VAR_3->n_value);
    VAR_9 = FUNC_11 (VAR_18, 0, VAR_3->n_value+VAR_4-VAR_18);
  }
  if (VAR_6 < VAR_18) {
    VAR_12 = FUNC_5 (FUNC_0(VAR_1));
    VAR_11 = FUNC_11 (VAR_6,0, VAR_5->n_value);
  } else {
    VAR_12 = FUNC_11 (VAR_6-VAR_18, 0, VAR_5->n_value);
    VAR_11 = FUNC_11 (VAR_18, 0, VAR_5->n_value+VAR_6-VAR_18);
    }
  FUNC_2 (VAR_10);
  FUNC_2 (VAR_9);
  FUNC_2 (VAR_12);
  FUNC_2 (VAR_11);

  VAR_20 = FUNC_8(VAR_10) || FUNC_8(VAR_12);



  FUNC_7(&VAR_16);
  FUNC_7(&VAR_17);
  FUNC_10 (VAR_10, VAR_9, &VAR_16, 0);
  VAR_21 = VAR_16->n_len;
  FUNC_10 (VAR_11, VAR_12, &VAR_17, 0);
  VAR_22 = VAR_17->n_len;



  if (VAR_20)
    VAR_13 = FUNC_5 (FUNC_0(VAR_1));
  else
    FUNC_12 (VAR_10, VAR_10->n_len, VAR_12, VAR_12->n_len, &VAR_13, 0);

  if (FUNC_8(VAR_16) || FUNC_8(VAR_17))
    VAR_14 = FUNC_5 (FUNC_0(VAR_1));
  else
    FUNC_12 (VAR_16, VAR_21, VAR_17, VAR_22, &VAR_14, 0);

  if (FUNC_8(VAR_9) || FUNC_8(VAR_11))
    VAR_15 = FUNC_5 (FUNC_0(VAR_1));
  else
    FUNC_12 (VAR_9, VAR_9->n_len, VAR_11, VAR_11->n_len, &VAR_15, 0);


  VAR_19 = VAR_4+VAR_6+1;
  *VAR_7 = FUNC_9(VAR_19, 0);

  if (!VAR_20) {
    FUNC_3 (*VAR_7, VAR_13, 2*VAR_18, 0);
    FUNC_3 (*VAR_7, VAR_13, VAR_18, 0);
  }
  FUNC_3 (*VAR_7, VAR_15, VAR_18, 0);
  FUNC_3 (*VAR_7, VAR_15, 0, 0);
  FUNC_3 (*VAR_7, VAR_14, VAR_18, VAR_16->n_sign != VAR_17->n_sign);


  FUNC_6 (&VAR_10);
  FUNC_6 (&VAR_9);
  FUNC_6 (&VAR_12);
  FUNC_6 (&VAR_13);
  FUNC_6 (&VAR_11);
  FUNC_6 (&VAR_14);
  FUNC_6 (&VAR_15);
  FUNC_6 (&VAR_16);
  FUNC_6 (&VAR_17);
}
