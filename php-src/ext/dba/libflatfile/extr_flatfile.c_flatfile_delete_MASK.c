
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fp; } ;
typedef TYPE_1__ flatfile ;
struct TYPE_6__ {char* dptr; size_t dsize; } ;
typedef TYPE_2__ datum ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 char* FUNC_3 (char*,size_t) ;
 int FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,int ) ;
 size_t FUNC_9 (int ,char*,size_t) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,long,int ) ;
 size_t FUNC_12 (int ) ;

int FUNC_13(flatfile *VAR_5, datum VAR_6) {
 char *VAR_7 = VAR_6.dptr;
 size_t VAR_8 = VAR_6.dsize;
 size_t VAR_9 = VAR_1;
 char *VAR_10 = FUNC_2(VAR_9);
 size_t VAR_11;
 size_t VAR_12;

 FUNC_10(VAR_5->fp);
 while(!FUNC_5(VAR_5->fp)) {

  if (!FUNC_7(VAR_5->fp, VAR_10, 15)) {
   break;
  }
  VAR_11 = FUNC_0(VAR_10);
  if (VAR_11 >= VAR_9) {
   VAR_9 = VAR_11 + VAR_1;
   VAR_10 = FUNC_3(VAR_10, VAR_9);
  }
  VAR_12 = FUNC_12(VAR_5->fp);


  VAR_11 = FUNC_9(VAR_5->fp, VAR_10, VAR_11);

  if (VAR_8 == VAR_11 && !FUNC_4(VAR_10, VAR_7, VAR_8)) {
   FUNC_11(VAR_5->fp, VAR_12, VAR_3);
   FUNC_8(VAR_5->fp, 0);
   FUNC_6(VAR_5->fp);
   FUNC_11(VAR_5->fp, 0L, VAR_2);
   FUNC_1(VAR_10);
   return VAR_4;
  }


  if (!FUNC_7(VAR_5->fp, VAR_10, 15)) {
   break;
  }
  VAR_11 = FUNC_0(VAR_10);
  if (VAR_11 >= VAR_9) {
   VAR_9 = VAR_11 + VAR_1;
   VAR_10 = FUNC_3(VAR_10, VAR_9);
  }

  VAR_11 = FUNC_9(VAR_5->fp, VAR_10, VAR_11);
 }
 FUNC_1(VAR_10);
 return VAR_0;
}
