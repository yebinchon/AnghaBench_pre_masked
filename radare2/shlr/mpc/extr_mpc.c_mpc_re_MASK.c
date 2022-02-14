
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * output; int error; } ;
typedef TYPE_1__ mpc_result_t ;
typedef int mpc_parser_t ;
typedef int (* mpc_dtor_t ) (char*) ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int,int ,int *,int *,int (*) (char*)) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int (*) (char*)) ;
 int * FUNC_4 (char) ;
 int FUNC_5 (int,int *,int *,int *,int *,int *,int *) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (int ) ;
 int * FUNC_9 () ;
 int * FUNC_10 (char*,char*) ;
 int FUNC_11 () ;
 int * FUNC_12 (int ,int *) ;
 int * FUNC_13 (int *) ;
 int * FUNC_14 (char*) ;
 int * FUNC_15 (char*) ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (int,int *,int *,...) ;
 int FUNC_18 (int *,int (*) (char*)) ;
 int FUNC_19 (char*,char const*,int *,TYPE_1__*) ;
 int FUNC_20 () ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,int (*) (char*)) ;
 int * FUNC_23 (int ,int (*) (char*)) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

mpc_parser_t *FUNC_24(const char *VAR_8) {

  char *VAR_9;
  mpc_parser_t *VAR_10;
  mpc_result_t VAR_11;
  mpc_parser_t *VAR_12, *VAR_13, *VAR_14, *VAR_15, *VAR_16, *VAR_17;

  VAR_12 = FUNC_14("regex");
  VAR_13 = FUNC_14("term");
  VAR_14 = FUNC_14("factor");
  VAR_15 = FUNC_14("base");
  VAR_16 = FUNC_14("range");

  FUNC_6(VAR_12, FUNC_1(2, VAR_3,
    VAR_13,
    FUNC_13(FUNC_1(2, VAR_6, FUNC_4('|'), VAR_12, FUNC_0)),
    (mpc_dtor_t)VAR_0
  ));

  FUNC_6(VAR_13, FUNC_12(VAR_1, VAR_14));

  FUNC_6(VAR_14, FUNC_1(2, VAR_5,
    VAR_15,
    FUNC_17(5,
      FUNC_4('*'), FUNC_4('+'), FUNC_4('?'),
      FUNC_3(FUNC_11(), FUNC_0),
      FUNC_20()),
    (mpc_dtor_t)VAR_0
  ));

  FUNC_6(VAR_15, FUNC_17(4,
    FUNC_18(VAR_12, (mpc_dtor_t)VAR_0),
    FUNC_22(VAR_16, (mpc_dtor_t)VAR_0),
    FUNC_2(FUNC_9(), VAR_2),
    FUNC_2(FUNC_15(")|"), VAR_2)
  ));

  FUNC_6(VAR_16, FUNC_2(
    FUNC_12(VAR_7, FUNC_17(2, FUNC_9(), FUNC_15("]"))),
    VAR_4
  ));

  VAR_17 = FUNC_23(FUNC_21(VAR_12), (mpc_dtor_t)VAR_0);

  FUNC_16(VAR_17);
  FUNC_16(VAR_12);
  FUNC_16(VAR_13);
  FUNC_16(VAR_14);
  FUNC_16(VAR_15);
  FUNC_16(VAR_16);

  if(!FUNC_19("<mpc_re_compiler>", VAR_8, VAR_17, &VAR_11)) {
    VAR_9 = FUNC_8(VAR_11.error);
    VAR_10 = FUNC_10("Invalid Regex: %s", VAR_9);
    FUNC_7(VAR_11.error);
    FUNC_0(VAR_9);
    VAR_11.output = VAR_10;
  }

  FUNC_5(6, VAR_17, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);

  FUNC_16(VAR_11.output);

  return VAR_11.output;

}
