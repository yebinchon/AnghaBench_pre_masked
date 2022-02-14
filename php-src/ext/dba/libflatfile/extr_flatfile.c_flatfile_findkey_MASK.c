
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fp; } ;
typedef TYPE_1__ flatfile ;
struct TYPE_6__ {size_t dsize; void* dptr; } ;
typedef TYPE_2__ datum ;


 size_t VAR_0 ;
 size_t FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 char* FUNC_3 (char*,size_t) ;
 int FUNC_4 (char*,void*,size_t) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int) ;
 size_t FUNC_7 (int ,char*,size_t) ;
 int FUNC_8 (int ) ;

int FUNC_9(flatfile *VAR_1, datum VAR_2) {
 size_t VAR_3 = VAR_0;
 char *VAR_4 = FUNC_2(VAR_3);
 size_t VAR_5;
 int VAR_6=0;
 void *VAR_7 = VAR_2.dptr;
 size_t VAR_8 = VAR_2.dsize;

 FUNC_8(VAR_1->fp);
 while (!FUNC_5(VAR_1->fp)) {
  if (!FUNC_6(VAR_1->fp, VAR_4, 15)) {
   break;
  }
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5 >= VAR_3) {
   VAR_3 = VAR_5 + VAR_0;
   VAR_4 = FUNC_3(VAR_4, VAR_3);
  }
  VAR_5 = FUNC_7(VAR_1->fp, VAR_4, VAR_5);

  if (VAR_8 == VAR_5) {
   if (!FUNC_4(VAR_4, VAR_7, VAR_8)) {
    VAR_6 = 1;
    break;
   }
  }
  if (!FUNC_6(VAR_1->fp, VAR_4, 15)) {
   break;
  }
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5 >= VAR_3) {
   VAR_3 = VAR_5 + VAR_0;
   VAR_4 = FUNC_3(VAR_4, VAR_3);
  }
  VAR_5 = FUNC_7(VAR_1->fp, VAR_4, VAR_5);
 }
 FUNC_1(VAR_4);
 return VAR_6;
}
