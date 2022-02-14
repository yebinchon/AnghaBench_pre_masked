
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_4__ {int * io; } ;
typedef int RIODesc ;
typedef int RIO ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char const*,int*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,char const*,int ,int ) ;
 scalar_t__ FUNC_7 (int *,int ,int *,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (char const*,char*) ;

__attribute__((used)) static ut8 *FUNC_10(RCore **VAR_1, const char *VAR_2, int *VAR_3) {
 RIODesc *VAR_4;
 RIO *VAR_5;
 if (VAR_1 && VAR_2 && FUNC_9 (VAR_2, "://")) {
  ut8 *VAR_6 = ((void*)0);
  ut64 VAR_7;
  if (!*VAR_1) {
   *VAR_1 = FUNC_3 (((void*)0));
  }
  if (!*VAR_1) {
   FUNC_2 ("opencore failed\n");
   return ((void*)0);
  }
  VAR_5 = (*VAR_1)->io;
  VAR_4 = FUNC_6 (VAR_5, VAR_2, 0, 0);
  if (!VAR_4) {
   return ((void*)0);
  }
  VAR_7 = FUNC_8 (VAR_5);
  if (VAR_7 > 0 && VAR_7 < VAR_0) {
   VAR_6 = FUNC_1 (1, VAR_7);
   if (FUNC_7 (VAR_5, 0, VAR_6, VAR_7)) {
    if (VAR_3) {
     *VAR_3 = VAR_7;
    }
   } else {
    FUNC_2 ("slurp: read error\n");
    FUNC_0 (VAR_6);
   }
  } else {
   FUNC_2 ("slurp: Invalid file size\n");
  }
  FUNC_5 (VAR_4);
  return VAR_6;
 }
 return (ut8 *) FUNC_4 (VAR_2, VAR_3);
}
