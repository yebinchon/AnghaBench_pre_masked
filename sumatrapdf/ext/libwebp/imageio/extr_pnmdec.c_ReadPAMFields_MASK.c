
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int seen_flags; int width; int height; int depth; int max_value; int data_size; int data; } ;
typedef TYPE_1__ PNMInfo ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_1 (int ,size_t,int ,char*,size_t*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*,char*,int*) ;
 int VAR_7 ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static size_t FUNC_9(PNMInfo* const VAR_8, size_t VAR_9) {
  char VAR_10[VAR_4 + 1];
  size_t VAR_11;
  int VAR_12;
  int VAR_13 = -1;
  FUNC_2(VAR_8 != ((void*)0));
  while (1) {
    VAR_9 = FUNC_1(VAR_8->data, VAR_9, VAR_8->data_size, VAR_10, &VAR_11);
    if (VAR_9 == 0) return 0;
    if (FUNC_6(VAR_10, "WIDTH %d", &VAR_12) == 1) {
      if (VAR_8->seen_flags & VAR_6) return FUNC_0("WIDTH");
      VAR_8->seen_flags |= VAR_6;
      VAR_8->width = VAR_12;
    } else if (FUNC_6(VAR_10, "HEIGHT %d", &VAR_12) == 1) {
      if (VAR_8->seen_flags & VAR_2) return FUNC_0("HEIGHT");
      VAR_8->seen_flags |= VAR_2;
      VAR_8->height = VAR_12;
    } else if (FUNC_6(VAR_10, "DEPTH %d", &VAR_12) == 1) {
      if (VAR_8->seen_flags & VAR_1) return FUNC_0("DEPTH");
      VAR_8->seen_flags |= VAR_1;
      VAR_8->depth = VAR_12;
    } else if (FUNC_6(VAR_10, "MAXVAL %d", &VAR_12) == 1) {
      if (VAR_8->seen_flags & VAR_3) return FUNC_0("MAXVAL");
      VAR_8->seen_flags |= VAR_3;
      VAR_8->max_value = VAR_12;
    } else if (!FUNC_7(VAR_10, "TUPLTYPE RGB_ALPHA")) {
      VAR_13 = 4;
      VAR_8->seen_flags |= VAR_5;
    } else if (!FUNC_7(VAR_10, "TUPLTYPE RGB")) {
      VAR_13 = 3;
      VAR_8->seen_flags |= VAR_5;
    } else if (!FUNC_7(VAR_10, "TUPLTYPE GRAYSCALE")) {
      VAR_13 = 1;
      VAR_8->seen_flags |= VAR_5;
    } else if (!FUNC_7(VAR_10, "ENDHDR")) {
      break;
    } else {
      static const char VAR_14[] = " ...";
      int VAR_15;
      if (VAR_11 > 20) FUNC_5(VAR_10 + 20 - FUNC_8(VAR_14), VAR_14);
      for (VAR_15 = 0; VAR_15 < (int)FUNC_8(VAR_10); ++VAR_15) {

        if (!FUNC_4((int)VAR_10[VAR_15])) VAR_10[VAR_15] = ' ';
      }
      FUNC_3(VAR_7, "PAM header error: unrecognized entry [%s]\n", VAR_10);
      return 0;
    }
  }
  if (!(VAR_8->seen_flags & VAR_0)) {
    FUNC_3(VAR_7, "PAM header error: missing tags%s%s%s%s\n",
            (VAR_8->seen_flags & VAR_6) ? "" : " WIDTH",
            (VAR_8->seen_flags & VAR_2) ? "" : " HEIGHT",
            (VAR_8->seen_flags & VAR_1) ? "" : " DEPTH",
            (VAR_8->seen_flags & VAR_3) ? "" : " MAXVAL");
    return 0;
  }
  if (VAR_13 != -1 && VAR_8->depth != VAR_13) {
    FUNC_3(VAR_7, "PAM header error: expected DEPTH %d but got DEPTH %d\n",
            VAR_13, VAR_8->depth);
    return 0;
  }
  return VAR_9;
}
