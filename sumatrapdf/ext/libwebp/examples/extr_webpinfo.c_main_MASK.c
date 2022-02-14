
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WebPInfoStatus ;
struct TYPE_4__ {int quiet_; int show_diagnosis_; int show_summary_; int parse_bitstream_; } ;
typedef TYPE_1__ WebPInfo ;
typedef int WebPData ;
typedef int W_CHAR ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char const**,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int,char const**) ;
 int FUNC_6 (char const*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (int ,char*,int const*) ;
 int FUNC_8 (char*,int const*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char*,int const,int const,int const) ;
 int VAR_2 ;
 int FUNC_13 (char const*,char*) ;

int FUNC_14(int VAR_3, const char* VAR_4[]) {
  int VAR_5, VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
  int VAR_9 = 0;
  WebPInfoStatus VAR_10 = VAR_1;
  WebPInfo VAR_11;

  FUNC_5(VAR_3, VAR_4);

  if (VAR_3 == 1) {
    FUNC_4();
    FUNC_1(VAR_1);
  }


  for (VAR_5 = 1; VAR_5 < VAR_3; ++VAR_5) {
    if (!FUNC_13(VAR_4[VAR_5], "-h") || !FUNC_13(VAR_4[VAR_5], "-help")) {
      FUNC_4();
      FUNC_1(VAR_1);
    } else if (!FUNC_13(VAR_4[VAR_5], "-H") || !FUNC_13(VAR_4[VAR_5], "-longhelp")) {
      FUNC_3();
      FUNC_1(VAR_1);
    } else if (!FUNC_13(VAR_4[VAR_5], "-quiet")) {
      VAR_6 = 1;
    } else if (!FUNC_13(VAR_4[VAR_5], "-diag")) {
      VAR_7 = 1;
    } else if (!FUNC_13(VAR_4[VAR_5], "-summary")) {
      VAR_8 = 1;
    } else if (!FUNC_13(VAR_4[VAR_5], "-bitstream_info")) {
      VAR_9 = 1;
    } else if (!FUNC_13(VAR_4[VAR_5], "-version")) {
      const int VAR_12 = FUNC_10();
      FUNC_12("WebP Decoder version: %d.%d.%d\n",
             (VAR_12 >> 16) & 0xff, (VAR_12 >> 8) & 0xff, VAR_12 & 0xff);
      FUNC_1(0);
    } else {
      break;
    }
  }

  if (VAR_5 == VAR_3) {
    FUNC_4();
    FUNC_1(VAR_0);
  }


  for (; VAR_5 < VAR_3; ++VAR_5) {
    WebPData VAR_13;
    const W_CHAR* VAR_14 = ((void*)0);
    FUNC_11(&VAR_11);
    VAR_11.quiet_ = VAR_6;
    VAR_11.show_diagnosis_ = VAR_7;
    VAR_11.show_summary_ = VAR_8;
    VAR_11.parse_bitstream_ = VAR_9;
    VAR_14 = FUNC_2(VAR_4, VAR_5);
    if (VAR_14 == ((void*)0) ||
        !FUNC_6((const char*)VAR_14, &VAR_13)) {
      VAR_10 = VAR_0;
      FUNC_7(VAR_2, "Failed to open input file %s.\n", VAR_14);
      continue;
    }
    if (!VAR_11.quiet_) FUNC_8("File: %s\n", VAR_14);
    VAR_10 = FUNC_0(&VAR_11, &VAR_13);
    FUNC_9(&VAR_13);
  }
  FUNC_1(VAR_10);
}
