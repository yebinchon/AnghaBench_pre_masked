
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arcDisState {int instrBuffer; scalar_t__ nullifyMode; } ;


 char** VAR_0 ;
 char* FUNC_0 (struct arcDisState*,int) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,char const*,int) ;
 int * FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct arcDisState *VAR_1,
    const char *VAR_2,
    int VAR_3,
    int VAR_4,
    int VAR_5,
    int VAR_6,
    int VAR_7,
    int VAR_8)
{
 if (!VAR_2) {
  return;
 }
 FUNC_2 (VAR_1->instrBuffer, VAR_2, sizeof (VAR_1->instrBuffer) - 1);
 if (VAR_3 > 0) {
  int VAR_9 = 0;
  const char *VAR_10 = 0;
  if (!VAR_4) {
   FUNC_1 (VAR_1->instrBuffer, ".");
  }
  VAR_9 = 18;
  if (VAR_3 < VAR_9) {
   VAR_10 = VAR_0[VAR_3];
  } else {
   VAR_10 = FUNC_0 (VAR_1, VAR_3);
  }
  if (!VAR_10) {
   VAR_10 = "???";
  }
  FUNC_1 (VAR_1->instrBuffer, VAR_10);
    }
    if (VAR_5) {
     FUNC_1 (VAR_1->instrBuffer, ".f");
    }
    if (VAR_1->nullifyMode) {
     if (FUNC_3 (VAR_1->instrBuffer, ".d") == ((void*)0)) {
      FUNC_1 (VAR_1->instrBuffer, ".d");
     }
    }
    if (VAR_6) {
     FUNC_1 (VAR_1->instrBuffer, ".x");
    }
    switch (VAR_7) {
    case 1: FUNC_1(VAR_1->instrBuffer, ".a"); break;
    case 2: FUNC_1(VAR_1->instrBuffer, ".ab"); break;
    case 3: FUNC_1(VAR_1->instrBuffer, ".as"); break;
  }
  if (VAR_8) {
   FUNC_1 (VAR_1->instrBuffer, ".di");
  }
}
