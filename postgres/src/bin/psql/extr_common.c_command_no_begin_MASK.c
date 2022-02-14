
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int encoding; } ;


 scalar_t__ FUNC_0 (char const*,int ) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 TYPE_1__ VAR_0 ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static bool
FUNC_4(const char *VAR_1)
{
 int VAR_2;




 VAR_1 = FUNC_3(VAR_1);




 VAR_2 = 0;
 while (FUNC_1((unsigned char) VAR_1[VAR_2]))
  VAR_2 += FUNC_0(&VAR_1[VAR_2], VAR_0.encoding);
 if (VAR_2 == 5 && FUNC_2(VAR_1, "abort", 5) == 0)
  return 1;
 if (VAR_2 == 5 && FUNC_2(VAR_1, "begin", 5) == 0)
  return 1;
 if (VAR_2 == 5 && FUNC_2(VAR_1, "start", 5) == 0)
  return 1;
 if (VAR_2 == 6 && FUNC_2(VAR_1, "commit", 6) == 0)
  return 1;
 if (VAR_2 == 3 && FUNC_2(VAR_1, "end", 3) == 0)
  return 1;
 if (VAR_2 == 8 && FUNC_2(VAR_1, "rollback", 8) == 0)
  return 1;
 if (VAR_2 == 7 && FUNC_2(VAR_1, "prepare", 7) == 0)
 {

  VAR_1 += VAR_2;

  VAR_1 = FUNC_3(VAR_1);

  VAR_2 = 0;
  while (FUNC_1((unsigned char) VAR_1[VAR_2]))
   VAR_2 += FUNC_0(&VAR_1[VAR_2], VAR_0.encoding);

  if (VAR_2 == 11 && FUNC_2(VAR_1, "transaction", 11) == 0)
   return 1;
  return 0;
 }






 if (VAR_2 == 6 && FUNC_2(VAR_1, "vacuum", 6) == 0)
  return 1;
 if (VAR_2 == 7 && FUNC_2(VAR_1, "cluster", 7) == 0)
 {

  VAR_1 += VAR_2;

  VAR_1 = FUNC_3(VAR_1);

  if (FUNC_1((unsigned char) VAR_1[0]))
   return 0;
  return 1;
 }

 if (VAR_2 == 6 && FUNC_2(VAR_1, "create", 6) == 0)
 {
  VAR_1 += VAR_2;

  VAR_1 = FUNC_3(VAR_1);

  VAR_2 = 0;
  while (FUNC_1((unsigned char) VAR_1[VAR_2]))
   VAR_2 += FUNC_0(&VAR_1[VAR_2], VAR_0.encoding);

  if (VAR_2 == 8 && FUNC_2(VAR_1, "database", 8) == 0)
   return 1;
  if (VAR_2 == 10 && FUNC_2(VAR_1, "tablespace", 10) == 0)
   return 1;


  if (VAR_2 == 6 && FUNC_2(VAR_1, "unique", 6) == 0)
  {
   VAR_1 += VAR_2;

   VAR_1 = FUNC_3(VAR_1);

   VAR_2 = 0;
   while (FUNC_1((unsigned char) VAR_1[VAR_2]))
    VAR_2 += FUNC_0(&VAR_1[VAR_2], VAR_0.encoding);
  }

  if (VAR_2 == 5 && FUNC_2(VAR_1, "index", 5) == 0)
  {
   VAR_1 += VAR_2;

   VAR_1 = FUNC_3(VAR_1);

   VAR_2 = 0;
   while (FUNC_1((unsigned char) VAR_1[VAR_2]))
    VAR_2 += FUNC_0(&VAR_1[VAR_2], VAR_0.encoding);

   if (VAR_2 == 12 && FUNC_2(VAR_1, "concurrently", 12) == 0)
    return 1;
  }

  return 0;
 }

 if (VAR_2 == 5 && FUNC_2(VAR_1, "alter", 5) == 0)
 {
  VAR_1 += VAR_2;

  VAR_1 = FUNC_3(VAR_1);

  VAR_2 = 0;
  while (FUNC_1((unsigned char) VAR_1[VAR_2]))
   VAR_2 += FUNC_0(&VAR_1[VAR_2], VAR_0.encoding);


  if (VAR_2 == 6 && FUNC_2(VAR_1, "system", 6) == 0)
   return 1;

  return 0;
 }






 if ((VAR_2 == 4 && FUNC_2(VAR_1, "drop", 4) == 0) ||
  (VAR_2 == 7 && FUNC_2(VAR_1, "reindex", 7) == 0))
 {
  VAR_1 += VAR_2;

  VAR_1 = FUNC_3(VAR_1);

  VAR_2 = 0;
  while (FUNC_1((unsigned char) VAR_1[VAR_2]))
   VAR_2 += FUNC_0(&VAR_1[VAR_2], VAR_0.encoding);

  if (VAR_2 == 8 && FUNC_2(VAR_1, "database", 8) == 0)
   return 1;
  if (VAR_2 == 6 && FUNC_2(VAR_1, "system", 6) == 0)
   return 1;
  if (VAR_2 == 10 && FUNC_2(VAR_1, "tablespace", 10) == 0)
   return 1;
  if (VAR_2 == 5 && (FUNC_2(VAR_1, "index", 5) == 0 ||
        FUNC_2(VAR_1, "table", 5) == 0))
  {
   VAR_1 += VAR_2;
   VAR_1 = FUNC_3(VAR_1);
   VAR_2 = 0;
   while (FUNC_1((unsigned char) VAR_1[VAR_2]))
    VAR_2 += FUNC_0(&VAR_1[VAR_2], VAR_0.encoding);





   if (VAR_2 == 12 && FUNC_2(VAR_1, "concurrently", 12) == 0)
    return 1;
  }


  if (VAR_2 == 5 && FUNC_2(VAR_1, "index", 5) == 0)
  {
   VAR_1 += VAR_2;

   VAR_1 = FUNC_3(VAR_1);

   VAR_2 = 0;
   while (FUNC_1((unsigned char) VAR_1[VAR_2]))
    VAR_2 += FUNC_0(&VAR_1[VAR_2], VAR_0.encoding);

   if (VAR_2 == 12 && FUNC_2(VAR_1, "concurrently", 12) == 0)
    return 1;

   return 0;
  }

  return 0;
 }


 if (VAR_2 == 7 && FUNC_2(VAR_1, "discard", 7) == 0)
 {
  VAR_1 += VAR_2;

  VAR_1 = FUNC_3(VAR_1);

  VAR_2 = 0;
  while (FUNC_1((unsigned char) VAR_1[VAR_2]))
   VAR_2 += FUNC_0(&VAR_1[VAR_2], VAR_0.encoding);

  if (VAR_2 == 3 && FUNC_2(VAR_1, "all", 3) == 0)
   return 1;
  return 0;
 }

 return 0;
}
