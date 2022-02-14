
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut64 ;
typedef int file ;
struct TYPE_3__ {int bin; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,char*,int,int*) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (char*) ;
 char* FUNC_5 (char*,int,int ) ;

__attribute__((used)) static bool FUNC_6(RCore *VAR_0, ut64 VAR_1) {
 int VAR_2, VAR_3, VAR_4;
 char VAR_5[1024];

 int VAR_6 = FUNC_2 (VAR_0->bin, VAR_1, VAR_5, sizeof (VAR_5) - 1, &VAR_2);
 if (VAR_6) {
  FUNC_3 ("file: %s\nline: %d\n", VAR_5, VAR_2);
  VAR_3 = VAR_2;
  if (VAR_2 >= 2) {
   VAR_2 -= 2;
  }
  if (FUNC_4 (VAR_5)) {
   for (VAR_4 = 0; VAR_4 < 5; VAR_4++) {
    char *VAR_7 = FUNC_5 (VAR_5, VAR_2 + VAR_4, 0);
    if (VAR_7) {
     FUNC_3 ("%c %.3x  %s\n", VAR_2+VAR_4 == VAR_3 ? '>' : ' ', VAR_2+VAR_4, VAR_7);
     FUNC_1 (VAR_7);
    }
   }
  } else {
   FUNC_0 ("Cannot open '%s'\n", VAR_5);
  }
 }
 return VAR_6;
}
