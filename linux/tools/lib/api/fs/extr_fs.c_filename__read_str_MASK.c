
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sbuf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (int,void*,size_t) ;
 void* FUNC_5 (void*,size_t) ;
 int FUNC_6 (int,char*,int) ;

int FUNC_7(const char *VAR_5, char **VAR_6, size_t *VAR_7)
{
 size_t VAR_8 = 0, VAR_9 = 0;
 void *VAR_10 = ((void*)0), *VAR_11;
 int VAR_12, VAR_13, VAR_14 = 0;
 char VAR_15[VAR_3];

 VAR_12 = FUNC_2(VAR_5, VAR_2);
 if (VAR_12 < 0)
  return -VAR_4;

 do {
  if (VAR_8 == VAR_9) {
   VAR_9 += VAR_0;
   VAR_11 = FUNC_5(VAR_10, VAR_9);
   if (!VAR_11) {
    VAR_14 = -VAR_1;
    break;
   }

   VAR_10 = VAR_11;
  }

  VAR_13 = FUNC_4(VAR_12, VAR_10 + VAR_8, VAR_9 - VAR_8);
  if (VAR_13 < 0) {
   if (VAR_8) {
    FUNC_3("read failed %d: %s\n", VAR_4,
      FUNC_6(VAR_4, VAR_15, sizeof(VAR_15)));
    VAR_14 = 0;
   } else
    VAR_14 = -VAR_4;

   break;
  }

  VAR_8 += VAR_13;
 } while (VAR_13 > 0);

 if (!VAR_14) {
  *VAR_7 = VAR_8;
  *VAR_6 = VAR_10;
 } else
  FUNC_1(VAR_10);

 FUNC_0(VAR_12);
 return VAR_14;
}
