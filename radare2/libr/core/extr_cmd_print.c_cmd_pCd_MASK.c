
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_13__ {double color; } ;
struct TYPE_12__ {int blocksize; int config; int offset; int num; } ;
typedef TYPE_1__ RCore ;
typedef TYPE_2__ RConsCanvas ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 double FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int,int ) ;
 TYPE_2__* FUNC_6 (int,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 int FUNC_9 (int*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_1__*,int) ;
 char* FUNC_13 (TYPE_1__*,char*) ;
 int FUNC_14 (TYPE_1__*,int ,int) ;
 int FUNC_15 (int ,char const*) ;
 char* FUNC_16 (char*,int,int) ;
 char* FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(RCore *VAR_0, const char *VAR_1) {
 int VAR_2, VAR_3 = FUNC_9 (&VAR_2);
 int VAR_4 = FUNC_2 (VAR_0->config, "hex.cols") * 2.5;
 if (VAR_4 < 1) {
  VAR_4 = 16;
 }
 int VAR_5, VAR_6 = VAR_3 / VAR_4;
 int VAR_7 = VAR_2 - 2;
 int VAR_8 = VAR_0->blocksize;
 int VAR_9 = FUNC_15 (VAR_0->num, VAR_1);
 bool VAR_10 = FUNC_2 (VAR_0->config, "asm.minicols");
 char *VAR_11 = FUNC_17 (FUNC_1 (VAR_0->config, "asm.offset"));
 char *VAR_12 = FUNC_17 (FUNC_1 (VAR_0->config, "asm.bytes"));
 if (VAR_10) {
  FUNC_3 (VAR_0->config, "asm.offset", "false");

 }
 FUNC_3 (VAR_0->config, "asm.bytes", "false");
 if (VAR_9 > 0) {
  VAR_7 = VAR_9 + 1;
 }
 FUNC_11 ();
 RConsCanvas *VAR_13 = FUNC_6 (VAR_3, VAR_7);
 ut64 VAR_14 = VAR_0->offset;
 VAR_13->color = FUNC_2 (VAR_0->config, "scr.color");
 FUNC_12 (VAR_0, VAR_7 * 32);
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  (void) FUNC_5 (VAR_13, VAR_5 * (VAR_3 / VAR_6), 0);
  char *VAR_15 = FUNC_16 ("pid %d @i:%d", VAR_7, VAR_7 * VAR_5);
  char *VAR_16 = FUNC_13 (VAR_0, VAR_15);
  FUNC_8 (VAR_13, VAR_16);
  FUNC_0 (VAR_15);
  FUNC_0 (VAR_16);
 }
 FUNC_12 (VAR_0, VAR_8);
 FUNC_14 (VAR_0, VAR_14, 1);

 FUNC_10 ();
 FUNC_7 (VAR_13);
 FUNC_4 (VAR_13);
 if (VAR_10) {
  FUNC_3 (VAR_0->config, "asm.offset", VAR_11);
  FUNC_3 (VAR_0->config, "asm.bytes", VAR_12);
 }
 FUNC_3 (VAR_0->config, "asm.bytes", VAR_12);
 FUNC_0 (VAR_11);
 FUNC_0 (VAR_12);
}
