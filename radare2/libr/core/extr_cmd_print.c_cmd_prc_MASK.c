
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t ut8 ;
typedef int ut32 ;
struct TYPE_8__ {int io; int (* is_valid_offset ) (int ,scalar_t__,int) ;} ;
struct TYPE_11__ {int cur_enabled; int flags; int cur; char io_unalloc_ch; TYPE_1__ iob; } ;
struct TYPE_10__ {scalar_t__ offset; int flags; TYPE_4__* print; int config; } ;
struct TYPE_9__ {char* name; } ;
typedef TYPE_2__ RFlagItem ;
typedef TYPE_3__ RCore ;


 char* VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 char* FUNC_3 (char*,int *) ;
 int FUNC_4 (char*,...) ;
 char* FUNC_5 (TYPE_3__*,scalar_t__) ;
 TYPE_2__* FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (TYPE_4__*,scalar_t__) ;
 char* FUNC_8 (char*,char*,int) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_12(RCore *VAR_3, const ut8* VAR_4, int VAR_5) {
 const char *VAR_6 = " .,:;!O@#";
 bool VAR_7 = FUNC_1 (VAR_3->config, "scr.square");
 int VAR_8, VAR_9;
 char VAR_10, VAR_11, *VAR_12;
 int VAR_13 = FUNC_1 (VAR_3->config, "hex.cols");
 bool VAR_14 = FUNC_1 (VAR_3->config, "scr.color");
 bool VAR_15 = FUNC_1 (VAR_3->config, "asm.flags");
 bool VAR_16 = FUNC_1 (VAR_3->config, "hex.section");
 bool VAR_17 = VAR_3->print->cur_enabled;
 bool VAR_18 = VAR_3->print->flags & VAR_1;
 if (VAR_13 < 1 || VAR_13 > 0xfffff) {
  VAR_13 = 32;
 }
 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8 += VAR_13) {
  if (VAR_16) {
   const char * VAR_19 = FUNC_5 (VAR_3, VAR_3->offset + VAR_8);
   FUNC_4 ("%20s ", VAR_19? VAR_19: "");
  }
  FUNC_7 (VAR_3->print, VAR_3->offset + VAR_8);
  for (VAR_9 = VAR_8; VAR_9 < VAR_8 + VAR_13; VAR_9 ++) {
   if (VAR_9 >= VAR_5) {
    break;
   }
   if (VAR_14) {
    ut32 VAR_20 = VAR_2[VAR_4[VAR_9]];
    int VAR_21 = ((VAR_20 & 0xff0000) >> 16)
                    + 2 * ((VAR_20 & 0xff00) >> 8) + (VAR_20 & 0xff) / 2;
    char *VAR_22 = FUNC_8 ("rgb:%s rgb:%06x",
     VAR_21 <= 0x7f * 3 ? "fff" : "000", VAR_20);
    VAR_12 = FUNC_3 (VAR_22, ((void*)0));
    FUNC_0 (VAR_22);
    if (VAR_17 && VAR_3->print->cur == VAR_9) {
     VAR_10 = '_';
    } else {
     VAR_10 = ' ';
    }
   } else {
    VAR_12 = FUNC_9 ("");
    if (VAR_17 && VAR_3->print->cur == VAR_9) {
     VAR_10 = '_';
    } else {
     const int VAR_23 = ((float)VAR_4[VAR_9] / 255) * (FUNC_10 (VAR_6) - 1);
     VAR_10 = VAR_6[VAR_23];
    }
   }
   if (VAR_18 &&
       !VAR_3->print->iob.is_valid_offset (VAR_3->print->iob.io, VAR_3->offset + VAR_9, 0)) {
    if (VAR_14) {
     FUNC_0 (VAR_12);
     VAR_12 = FUNC_9 (VAR_0);
     VAR_10 = VAR_3->print->io_unalloc_ch;
     if (VAR_10 == ' ') {
      VAR_10 = '.';
     }
    } else {
     VAR_10 = '?';
    }
   }
   if (VAR_7) {
    if (VAR_15) {
     RFlagItem *VAR_24 = FUNC_6 (VAR_3->flags, VAR_3->offset + VAR_9);
     if (VAR_24) {
      VAR_10 = VAR_24->name[0];
      VAR_11 = VAR_24->name[1];
     } else {
      VAR_11 = VAR_10;
     }
    } else {
     VAR_11 = VAR_10;
    }
    FUNC_4 ("%s%c%c", VAR_12, VAR_10, VAR_11);
   } else {
    FUNC_4 ("%s%c", VAR_12, VAR_10);
   }
   FUNC_0 (VAR_12);
  }
  if (VAR_14) {
   FUNC_4 (VAR_0);
  }
  FUNC_2 ();
 }
}
