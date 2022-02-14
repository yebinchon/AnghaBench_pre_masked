
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
 int VAR_1 ;
 size_t FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 char* FUNC_3 (char*,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 size_t FUNC_6 (int ,char*,size_t) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ) ;

datum FUNC_9(flatfile *VAR_2) {
 datum VAR_3;
 size_t VAR_4;
 size_t VAR_5 = VAR_0;
 char *VAR_6 = FUNC_2(VAR_5);

 FUNC_7(VAR_2->fp, VAR_2->CurrentFlatFilePos, VAR_1);
 while(!FUNC_4(VAR_2->fp)) {
  if (!FUNC_5(VAR_2->fp, VAR_6, 15)) {
   break;
  }
  VAR_4 = FUNC_0(VAR_6);
  if (VAR_4 >= VAR_5) {
   VAR_5 = VAR_4 + VAR_0;
   VAR_6 = FUNC_3(VAR_6, VAR_5);
  }
  VAR_4 = FUNC_6(VAR_2->fp, VAR_6, VAR_4);

  if (!FUNC_5(VAR_2->fp, VAR_6, 15)) {
   break;
  }
  VAR_4 = FUNC_0(VAR_6);
  if (VAR_4 >= VAR_5) {
   VAR_5 = VAR_4 + VAR_0;
   VAR_6 = FUNC_3(VAR_6, VAR_5);
  }
  VAR_4 = FUNC_6(VAR_2->fp, VAR_6, VAR_4);

  if (*(VAR_6)!=0) {
   VAR_2->CurrentFlatFilePos = FUNC_8(VAR_2->fp);
   VAR_3.dptr = VAR_6;
   VAR_3.dsize = VAR_4;
   return VAR_3;
  }
 }
 FUNC_1(VAR_6);
 VAR_3.dptr = ((void*)0);
 VAR_3.dsize = 0;
 return VAR_3;
}
