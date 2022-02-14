
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fp; int CurrentFlatFilePos; } ;
typedef TYPE_1__ flatfile ;
struct TYPE_6__ {char* dptr; size_t dsize; } ;
typedef TYPE_2__ datum ;


 size_t VAR_0 ;
 size_t FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 char* FUNC_3 (char*,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 size_t FUNC_6 (int ,char*,size_t) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

datum FUNC_9(flatfile *VAR_1) {
 datum VAR_2;
 size_t VAR_3;
 size_t VAR_4 = VAR_0;
 char *VAR_5 = FUNC_2(VAR_4);

 FUNC_7(VAR_1->fp);
 while(!FUNC_4(VAR_1->fp)) {
  if (!FUNC_5(VAR_1->fp, VAR_5, 15)) {
   break;
  }
  VAR_3 = FUNC_0(VAR_5);
  if (VAR_3 >= VAR_4) {
   VAR_4 = VAR_3 + VAR_0;
   VAR_5 = FUNC_3(VAR_5, VAR_4);
  }
  VAR_3 = FUNC_6(VAR_1->fp, VAR_5, VAR_3);

  if (*(VAR_5) != 0) {
   VAR_1->CurrentFlatFilePos = FUNC_8(VAR_1->fp);
   VAR_2.dptr = VAR_5;
   VAR_2.dsize = VAR_3;
   return VAR_2;
  }
  if (!FUNC_5(VAR_1->fp, VAR_5, 15)) {
   break;
  }
  VAR_3 = FUNC_0(VAR_5);
  if (VAR_3 >= VAR_4) {
   VAR_4 = VAR_3 + VAR_0;
   VAR_5 = FUNC_3(VAR_5, VAR_4);
  }
  VAR_3 = FUNC_6(VAR_1->fp, VAR_5, VAR_3);
 }
 FUNC_1(VAR_5);
 VAR_2.dptr = ((void*)0);
 VAR_2.dsize = 0;
 return VAR_2;
}
