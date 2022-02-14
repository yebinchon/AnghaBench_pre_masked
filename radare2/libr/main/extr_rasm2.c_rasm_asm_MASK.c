
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut64 ;
typedef int ut32 ;
struct TYPE_9__ {int len; int* bytes; } ;
struct TYPE_8__ {int a; } ;
typedef TYPE_1__ RAsmState ;
typedef TYPE_2__ RAsmCode ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_2__*) ;
 char* FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int ,char const*,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int*,int ) ;
 int FUNC_9 (int,int*,int) ;

__attribute__((used)) static int FUNC_10(RAsmState *VAR_1, const char *VAR_2, ut64 VAR_3, ut64 VAR_4, int VAR_5, int VAR_6, bool VAR_7, bool VAR_8) {
 RAsmCode *VAR_9;
 int VAR_10, VAR_11, VAR_12 = 0;
 FUNC_7 (VAR_1->a, VAR_3);
 if (!(VAR_9 = FUNC_6 (VAR_1->a, VAR_2, VAR_7))) {
  return 0;
 }
 if (VAR_9->len) {
  VAR_12 = VAR_9->len;
  if (VAR_6) {
   if ((VAR_12 = FUNC_9 (1, VAR_9->bytes, VAR_9->len)) != VAR_9->len) {
    FUNC_0 ("Failed to write buffer\n");
    FUNC_4 (VAR_9);
    return 0;
   }
  } else {
   int VAR_13 = VAR_9->len;
   if (VAR_5 == 1) {
    int VAR_14 = (VAR_13 / 8) + 1;
    for (VAR_10 = 0; VAR_10 < VAR_14; VAR_10++) {
     for (VAR_11 = 0; VAR_11 < 8 && VAR_13--; VAR_11++) {
      FUNC_3 ("%c", (VAR_9->bytes[VAR_10] & (1 << VAR_11))? '1': '0');
     }
    }
    FUNC_3 ("\n");
   } else {
    if (VAR_8) {
     size_t VAR_15 = 0;
     for (VAR_15 = 0; VAR_15 < VAR_9->len; VAR_15 += sizeof (ut32)) {
      ut32 VAR_16 = FUNC_8 (VAR_9->bytes + VAR_15, VAR_0);
      FUNC_3 ("0x%08x ", VAR_16);
      if ((VAR_15/4) == 7) {
       FUNC_3 ("\n");
      }
     }
     FUNC_3 ("\n");
    } else {
     char* VAR_17 = FUNC_5 (VAR_9);
     if (VAR_17) {
      FUNC_2 (VAR_1, VAR_17);
      FUNC_1 (VAR_17);
     }
    }
   }
  }
 }
 FUNC_4 (VAR_9);
 return (VAR_12 > 0);
}
