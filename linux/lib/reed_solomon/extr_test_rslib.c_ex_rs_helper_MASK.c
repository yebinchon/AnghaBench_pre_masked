
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wspace {int dummy; } ;
struct rs_control {TYPE_1__* codec; } ;
struct estat {int dwrong; int irv; char const* const wepos; int nwords; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_2__ {int nroots; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct rs_control*,int,int,int,int,struct estat*,struct wspace*,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_3(struct rs_control *VAR_4, struct wspace *VAR_5,
   int VAR_6, int VAR_7, int VAR_8)
{
 static const char * const VAR_9[] = {
  "Testing correction buffer interface...",
  "Testing with caller provided syndrome...",
  "Testing in-place interface..."
 };

 struct estat VAR_10 = {0, 0, 0, 0};
 int VAR_11 = VAR_4->codec->nroots;
 int VAR_12, VAR_13, VAR_14;

 if (VAR_3 >= VAR_2)
  FUNC_0("  %s\n", VAR_9[VAR_8]);

 for (VAR_12 = 0; VAR_12 <= VAR_11 / 2; VAR_12++)
  for (VAR_13 = 0; VAR_13 <= VAR_11 - 2 * VAR_12; VAR_13++)
   FUNC_2(VAR_4, VAR_6, VAR_12, VAR_13, VAR_7, &VAR_10, VAR_5, VAR_8);

 if (VAR_3 >= VAR_1) {
  FUNC_0("    Decodes wrong:        %d / %d\n",
    VAR_10.dwrong, VAR_10.nwords);
  FUNC_0("    Wrong return value:   %d / %d\n",
    VAR_10.irv, VAR_10.nwords);
  if (VAR_8 != VAR_0)
   FUNC_0("    Wrong error position: %d\n", VAR_10.wepos);
 }

 VAR_14 = VAR_10.dwrong + VAR_10.wepos + VAR_10.irv;
 if (VAR_14 && VAR_3 >= VAR_2)
  FUNC_1("    FAIL: %d decoding failures!\n", VAR_14);

 return VAR_14;
}
