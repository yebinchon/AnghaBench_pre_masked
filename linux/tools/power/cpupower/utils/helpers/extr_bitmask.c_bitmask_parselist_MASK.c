
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmask {unsigned int size; } ;


 int FUNC_0 (struct bitmask*,unsigned int,int) ;
 int FUNC_1 (struct bitmask*) ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (int,char,char*) ;
 int FUNC_4 (char const*,char*,unsigned int*,char*) ;

int FUNC_5(const char *VAR_0, struct bitmask *VAR_1)
{
 const char *VAR_2, *VAR_3;

 FUNC_1(VAR_1);

 VAR_3 = VAR_0;
 while (VAR_2 = VAR_3, VAR_3 = FUNC_2(VAR_3, ','), VAR_2) {
  unsigned int VAR_4;
  unsigned int VAR_5;
  unsigned int VAR_6;
  const char *VAR_7, *VAR_8;
  char VAR_9;
  int VAR_10;

  VAR_10 = FUNC_4(VAR_2, "%u%c", &VAR_4, &VAR_9);
  if (!FUNC_3(VAR_10, VAR_9, ",-"))
   goto err;
  VAR_5 = VAR_4;
  VAR_6 = 1;
  VAR_7 = FUNC_2(VAR_2, '-');
  VAR_8 = FUNC_2(VAR_2, ',');
  if (VAR_7 != ((void*)0) && (VAR_8 == ((void*)0) || VAR_7 < VAR_8)) {
   VAR_10 = FUNC_4(VAR_7, "%u%c", &VAR_5, &VAR_9);
   if (!FUNC_3(VAR_10, VAR_9, ",:"))
    goto err;
   VAR_7 = FUNC_2(VAR_7, ':');
   if (VAR_7 != ((void*)0) && (VAR_8 == ((void*)0) || VAR_7 < VAR_8)) {
    VAR_10 = FUNC_4(VAR_7, "%u%c", &VAR_6, &VAR_9);
    if (!FUNC_3(VAR_10, VAR_9, ","))
     goto err;
   }
  }
  if (!(VAR_4 <= VAR_5))
   goto err;
  if (VAR_5 >= VAR_1->size)
   goto err;
  while (VAR_4 <= VAR_5) {
   FUNC_0(VAR_1, VAR_4, 1);
   VAR_4 += VAR_6;
  }
 }
 return 0;
err:
 FUNC_1(VAR_1);
 return -1;
}
