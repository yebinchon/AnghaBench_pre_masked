
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr_pattern {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;
typedef scalar_t__ mrb_bool ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,size_t) ;
 struct tr_pattern VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *,int ,char*,size_t) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 size_t FUNC_7 (struct tr_pattern*,char*,char) ;
 int FUNC_8 (int *,struct tr_pattern*) ;
 size_t FUNC_9 (struct tr_pattern*,char*,size_t) ;
 struct tr_pattern* FUNC_10 (int *,struct tr_pattern*,int ,scalar_t__) ;

__attribute__((used)) static mrb_bool
FUNC_11(mrb_state *VAR_4, mrb_value VAR_5, mrb_value VAR_6, mrb_value VAR_7, mrb_bool VAR_8)
{
  struct tr_pattern VAR_9 = VAR_2;
  struct tr_pattern VAR_10 = VAR_2;
  char *VAR_11;
  mrb_int VAR_12;
  mrb_int VAR_13;
  mrb_int VAR_14;
  mrb_bool VAR_15 = VAR_1;
  mrb_int VAR_16 = -1;
  struct tr_pattern *VAR_17;

  FUNC_5(VAR_4, FUNC_6(VAR_5));
  FUNC_10(VAR_4, &VAR_9, VAR_6, VAR_3);
  VAR_17 = FUNC_10(VAR_4, &VAR_10, VAR_7, VAR_1);
  VAR_11 = FUNC_2(VAR_5);
  VAR_12 = FUNC_1(VAR_5);

  for (VAR_13=VAR_14=0; VAR_13<VAR_12; VAR_13++,VAR_14++) {
    mrb_int VAR_18 = FUNC_7(&VAR_9, FUNC_2(VAR_6), VAR_11[VAR_13]);

    if (VAR_13>VAR_14) VAR_11[VAR_14] = VAR_11[VAR_13];
    if (VAR_18 >= 0) {
      VAR_15 = VAR_3;
      if (VAR_17 == ((void*)0)) {
 VAR_14--;
      }
      else {
        mrb_int VAR_19 = FUNC_9(VAR_17, FUNC_2(VAR_7), VAR_18);

        if (VAR_19 < 0 || (VAR_8 && VAR_19 == VAR_16)) {
          VAR_14--;
          continue;
        }
        if (VAR_19 > 0x80) {
          FUNC_4(VAR_4, VAR_0, "character (%i) out of range", VAR_19);
        }
 VAR_16 = VAR_19;
 VAR_11[VAR_13] = (char)VAR_19;
      }
    }
  }

  FUNC_8(VAR_4, &VAR_9);
  FUNC_8(VAR_4, VAR_17);

  if (VAR_15) {
    FUNC_3(FUNC_0(VAR_5), VAR_14);
    FUNC_2(VAR_5)[VAR_14] = 0;
  }
  return VAR_15;
}
