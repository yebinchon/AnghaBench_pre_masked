
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; int bytes; } ;
typedef TYPE_1__ WebPData ;
typedef int W_CHAR ;
typedef int FILE ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*,int const*,...) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__,int,int *) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_6(const char* VAR_2, const WebPData* const VAR_3) {
  int VAR_4 = 0;
  FILE* VAR_5 = FUNC_3(VAR_2, "-") ? FUNC_1(VAR_2, "wb")
                                      : FUNC_0(VAR_1);
  if (VAR_5 == ((void*)0)) {
    FUNC_2(VAR_0, "Error opening output WebP file %s!\n",
             (const W_CHAR*)VAR_2);
    return 0;
  }
  if (FUNC_5(VAR_3->bytes, VAR_3->size, 1, VAR_5) != 1) {
    FUNC_2(VAR_0, "Error writing file %s!\n", (const W_CHAR*)VAR_2);
  } else {
    FUNC_2(VAR_0, "Saved file %s (%d bytes)\n",
             (const W_CHAR*)VAR_2, (int)VAR_3->size);
    VAR_4 = 1;
  }
  if (VAR_5 != VAR_1) FUNC_4(VAR_5);
  return VAR_4;
}
