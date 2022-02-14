
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ tag; } ;
typedef TYPE_1__ TTree ;
typedef int CompileState ;
typedef int Charset ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int,int,int const*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *) ;
 int const* VAR_6 ;
 int FUNC_4 (TYPE_1__*,int const*,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static void FUNC_7 (CompileState *VAR_7, TTree *VAR_8, TTree *VAR_9, int VAR_10,
                        const Charset *VAR_11) {
  int VAR_12 = (VAR_9->tag == VAR_5);
  Charset VAR_13, VAR_14;
  int VAR_15 = FUNC_4(VAR_8, VAR_6, &VAR_13);
  if (FUNC_5(VAR_8) ||
      (!VAR_15 && (FUNC_4(VAR_9, VAR_11, &VAR_14), FUNC_3(&VAR_13, &VAR_14)))) {

    int VAR_16 = FUNC_2(VAR_7, &VAR_13, 0);
    int VAR_17 = VAR_4;
    FUNC_1(VAR_7, VAR_8, 0, VAR_16, VAR_11);
    if (!VAR_12)
      VAR_17 = FUNC_0(VAR_7, VAR_2);
    FUNC_6(VAR_7, VAR_16);
    FUNC_1(VAR_7, VAR_9, VAR_10, VAR_4, VAR_11);
    FUNC_6(VAR_7, VAR_17);
  }
  else if (VAR_10 && VAR_12) {

    FUNC_6(VAR_7, FUNC_0(VAR_7, VAR_3));
    FUNC_1(VAR_7, VAR_8, 1, VAR_4, VAR_6);
  }
  else {


    int VAR_18;
    int VAR_19 = FUNC_2(VAR_7, &VAR_13, VAR_15);
    int VAR_20 = FUNC_0(VAR_7, VAR_0);
    FUNC_1(VAR_7, VAR_8, VAR_12, VAR_19, VAR_6);
    VAR_18 = FUNC_0(VAR_7, VAR_1);
    FUNC_6(VAR_7, VAR_20);
    FUNC_6(VAR_7, VAR_19);
    FUNC_1(VAR_7, VAR_9, VAR_10, VAR_4, VAR_11);
    FUNC_6(VAR_7, VAR_18);
  }
}
