
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int trgm ;
struct TYPE_5__ {int flag; } ;
typedef TYPE_1__ TRGM ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int * FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_3 (char const*,int,char*,int*,int*) ;
 char* FUNC_4 (char*,int) ;
 int * FUNC_5 (int *,char*,int,int) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (void*,int,int,int ) ;
 int FUNC_10 (int *,int,int,int ) ;
 int FUNC_11 (char*) ;

TRGM *
FUNC_12(const char *VAR_5, int VAR_6)
{
 TRGM *VAR_7;
 char *VAR_8,
      *VAR_9;
 trgm *VAR_10;
 int VAR_11,
    VAR_12,
    VAR_13;
 const char *VAR_14;

 FUNC_8(VAR_6);

 VAR_7 = (TRGM *) FUNC_6(VAR_3 + sizeof(trgm) * (VAR_6 / 2 + 1) * 3);
 VAR_7->flag = VAR_0;
 FUNC_2(VAR_7, VAR_3);

 if (VAR_6 + VAR_1 + VAR_2 < 3 || VAR_6 == 0)
  return VAR_7;

 VAR_10 = FUNC_1(VAR_7);


 VAR_8 = FUNC_6(sizeof(char) * (VAR_6 + 4));




 VAR_14 = VAR_5;
 while ((VAR_14 = FUNC_3(VAR_14, VAR_6 - (VAR_14 - VAR_5),
           VAR_8, &VAR_13, &VAR_12)) != ((void*)0))
 {




  VAR_9 = VAR_8;





  VAR_10 = FUNC_5(VAR_10, VAR_9, VAR_13, VAR_12);




 }

 FUNC_7(VAR_8);

 if ((VAR_11 = VAR_10 - FUNC_1(VAR_7)) == 0)
  return VAR_7;




 if (VAR_11 > 1)
 {
  FUNC_9((void *) FUNC_1(VAR_7), VAR_11, sizeof(trgm), VAR_4);
  VAR_11 = FUNC_10(FUNC_1(VAR_7), VAR_11, sizeof(trgm), VAR_4);
 }

 FUNC_2(VAR_7, FUNC_0(VAR_0, VAR_11));

 return VAR_7;
}
