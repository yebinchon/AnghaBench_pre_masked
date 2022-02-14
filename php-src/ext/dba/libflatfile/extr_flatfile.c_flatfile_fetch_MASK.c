
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int fp; } ;
typedef TYPE_1__ flatfile ;
struct TYPE_9__ {scalar_t__ dsize; int * dptr; int member_1; int * member_0; } ;
typedef TYPE_2__ datum ;
typedef int buf ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_2__) ;
 scalar_t__ FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int ,int *,scalar_t__) ;
 int * FUNC_4 (scalar_t__,int,int) ;

datum FUNC_5(flatfile *VAR_0, datum VAR_1) {
 datum VAR_2 = {((void*)0), 0};
 char VAR_3[16];

 if (FUNC_1(VAR_0, VAR_1)) {
  if (FUNC_2(VAR_0->fp, VAR_3, sizeof(VAR_3))) {
   VAR_2.dsize = FUNC_0(VAR_3);
   VAR_2.dptr = FUNC_4(VAR_2.dsize, 1, 1);
   VAR_2.dsize = FUNC_3(VAR_0->fp, VAR_2.dptr, VAR_2.dsize);
  } else {
   VAR_2.dptr = ((void*)0);
   VAR_2.dsize = 0;
  }
 }
 return VAR_2;
}
