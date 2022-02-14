
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int fp; } ;
typedef TYPE_1__ flatfile ;
struct TYPE_11__ {scalar_t__ dsize; int dptr; } ;
typedef TYPE_2__ datum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_2__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (int ,long,int ) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__) ;

int FUNC_6(flatfile *VAR_2, datum VAR_3, datum VAR_4, int VAR_5) {
 if (VAR_5 == VAR_0) {
  if (FUNC_1(VAR_2, VAR_3)) {
   return 1;
  }
  FUNC_4(VAR_2->fp, 0L, VAR_1);
  FUNC_3(VAR_2->fp, "%zu\n", VAR_3.dsize);
  FUNC_2(VAR_2->fp);
  if (FUNC_5(VAR_2->fp, VAR_3.dptr, VAR_3.dsize) < VAR_3.dsize) {
   return -1;
  }
  FUNC_3(VAR_2->fp, "%zu\n", VAR_4.dsize);
  FUNC_2(VAR_2->fp);
  if (FUNC_5(VAR_2->fp, VAR_4.dptr, VAR_4.dsize) < VAR_4.dsize) {
   return -1;
  }
 } else {
  FUNC_0(VAR_2, VAR_3);
  FUNC_3(VAR_2->fp, "%zu\n", VAR_3.dsize);
  FUNC_2(VAR_2->fp);
  if (FUNC_5(VAR_2->fp, VAR_3.dptr, VAR_3.dsize) < VAR_3.dsize) {
   return -1;
  }
  FUNC_3(VAR_2->fp, "%zu\n", VAR_4.dsize);
  if (FUNC_5(VAR_2->fp, VAR_4.dptr, VAR_4.dsize) < VAR_4.dsize) {
   return -1;
  }
 }

 FUNC_2(VAR_2->fp);
 return 0;
}
