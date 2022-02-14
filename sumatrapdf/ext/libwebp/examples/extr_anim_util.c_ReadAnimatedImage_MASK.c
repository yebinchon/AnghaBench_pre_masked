
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int size; int bytes; } ;
typedef TYPE_1__ WebPData ;
typedef int W_CHAR ;
typedef int AnimatedImage ;


 int FUNC_0 (int * const) ;
 int FUNC_1 (char const*,int *,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char const*,int * const,int,char const*) ;
 int FUNC_5 (char const*,TYPE_1__*,int * const,int,char const*) ;
 int FUNC_6 (int ,char*,int const*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int * const,int ,int) ;
 int VAR_0 ;

int FUNC_10(const char VAR_1[], AnimatedImage* const VAR_2,
                      int VAR_3, const char VAR_4[]) {
  int VAR_5 = 0;
  WebPData VAR_6;

  FUNC_8(&VAR_6);
  FUNC_9(VAR_2, 0, sizeof(*VAR_2));

  if (!FUNC_1(VAR_1, &VAR_6.bytes, &VAR_6.size)) {
    FUNC_6(VAR_0, "Error reading file: %s\n", (const W_CHAR*)VAR_1);
    return 0;
  }

  if (FUNC_3(&VAR_6)) {
    VAR_5 = FUNC_5(VAR_1, &VAR_6, VAR_2, VAR_3,
                          VAR_4);
  } else if (FUNC_2(&VAR_6)) {
    VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);
  } else {
    FUNC_6(VAR_0,
             "Unknown file type: %s. Supported file types are WebP and GIF\n",
             (const W_CHAR*)VAR_1);
    VAR_5 = 0;
  }
  if (!VAR_5) FUNC_0(VAR_2);
  FUNC_7(&VAR_6);
  return VAR_5;
}
