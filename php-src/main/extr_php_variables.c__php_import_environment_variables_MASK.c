
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_ulong ;
typedef int zend_uchar ;


 scalar_t__ FUNC_0 (char*,size_t,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 char** VAR_0 ;
 int FUNC_6 (char*,size_t,int *,int ) ;
 char* FUNC_7 (char*,char) ;
 size_t FUNC_8 (char*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (int ,int ,int *) ;
 int FUNC_13 (char*,size_t,int ) ;

void FUNC_14(zval *VAR_1)
{
 char **VAR_2, *VAR_3;
 size_t VAR_4, VAR_5;
 zval VAR_6;
 zend_ulong VAR_7;

 FUNC_9();

 for (VAR_2 = VAR_0; VAR_2 != ((void*)0) && *VAR_2 != ((void*)0); VAR_2++) {
  VAR_3 = FUNC_7(*VAR_2, '=');
  if (!VAR_3
   || VAR_3 == *VAR_2
   || !FUNC_11(*VAR_2, VAR_3)) {

   continue;
  }
  VAR_4 = VAR_3 - *VAR_2;
  VAR_3++;
  VAR_5 = FUNC_8(VAR_3);
  if (VAR_5 == 0) {
   FUNC_2(&VAR_6);
  } else if (VAR_5 == 1) {
   FUNC_3(&VAR_6, FUNC_1((zend_uchar)*VAR_3));
  } else {
   FUNC_4(&VAR_6, FUNC_13(VAR_3, VAR_5, 0));
  }
  if (FUNC_0(*VAR_2, VAR_4, VAR_7)) {
   FUNC_12(FUNC_5(VAR_1), VAR_7, &VAR_6);
  } else {
   FUNC_6(*VAR_2, VAR_4, &VAR_6, FUNC_5(VAR_1));
  }
 }

 FUNC_10();
}
