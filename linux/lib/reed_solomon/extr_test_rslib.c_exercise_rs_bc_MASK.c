
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wspace {int dummy; } ;
struct rs_control {TYPE_1__* codec; } ;
struct bcstat {int rfail; int nwords; int rsuccess; int noncw; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_2__ {int nroots; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct rs_control*,int,int,int,int,struct bcstat*,struct wspace*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_3(struct rs_control *VAR_3, struct wspace *VAR_4,
     int VAR_5, int VAR_6)
{
 struct bcstat VAR_7 = {0, 0, 0, 0};
 int VAR_8 = VAR_3->codec->nroots;
 int VAR_9, VAR_10, VAR_11;

 if (VAR_2 >= VAR_1)
  FUNC_0("Testing beyond error correction capacity...\n");

 for (VAR_9 = 1; VAR_9 <= VAR_8; VAR_9++) {
  VAR_10 = VAR_8 - 2 * VAR_9 + 1;
  if (VAR_10 < 0)
   VAR_10 = 0;

  VAR_11 = VAR_8 <= VAR_5 - VAR_9 ? VAR_8 : VAR_5 - VAR_9;
  for (; VAR_10 <= VAR_11; VAR_10++)
   FUNC_2(VAR_3, VAR_5, VAR_9, VAR_10, VAR_6, &VAR_7, VAR_4);
 }

 if (VAR_2 >= VAR_0) {
  FUNC_0("  decoder gives up:        %d / %d\n",
    VAR_7.rfail, VAR_7.nwords);
  FUNC_0("  decoder returns success: %d / %d\n",
    VAR_7.rsuccess, VAR_7.nwords);
  FUNC_0("    not a codeword:        %d / %d\n",
    VAR_7.noncw, VAR_7.rsuccess);
 }

 if (VAR_7.noncw && VAR_2 >= VAR_1)
  FUNC_1("    FAIL: %d silent failures!\n", VAR_7.noncw);

 return VAR_7.noncw;
}
