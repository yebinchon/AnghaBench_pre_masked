
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int query_len; int query_offset; } ;
typedef TYPE_1__ pgssEntry ;
struct TYPE_5__ {int extent; int mean_query_len; } ;
typedef int Size ;
typedef int HASH_SEQ_STATUS ;
typedef int FILE ;


 void* VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int ,int) ;
 int FUNC_9 (char*,int,int,int *) ;
 int FUNC_10 (int *,int ) ;
 TYPE_1__* FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 char* FUNC_14 (int,int,char*,int) ;
 char* FUNC_15 (int*) ;
 int FUNC_16 () ;
 int FUNC_17 (int ) ;

__attribute__((used)) static void
FUNC_18(void)
{
 char *VAR_7;
 Size VAR_8;
 FILE *VAR_9 = ((void*)0);
 HASH_SEQ_STATUS VAR_10;
 pgssEntry *VAR_11;
 Size VAR_12;
 int VAR_13;






 if (!FUNC_13())
  return;
 VAR_7 = FUNC_15(&VAR_8);
 if (VAR_7 == ((void*)0))
  goto gc_fail;







 VAR_9 = FUNC_0(VAR_3, VAR_4);
 if (VAR_9 == ((void*)0))
 {
  FUNC_3(VAR_2,
    (FUNC_4(),
     FUNC_5("could not write file \"%s\": %m",
      VAR_3)));
  goto gc_fail;
 }

 VAR_12 = 0;
 VAR_13 = 0;

 FUNC_10(&VAR_10, VAR_6);
 while ((VAR_11 = FUNC_11(&VAR_10)) != ((void*)0))
 {
  int VAR_14 = VAR_11->query_len;
  char *VAR_15 = FUNC_14(VAR_11->query_offset,
           VAR_14,
           VAR_7,
           VAR_8);

  if (VAR_15 == ((void*)0))
  {

   VAR_11->query_offset = 0;
   VAR_11->query_len = -1;

   continue;
  }

  if (FUNC_9(VAR_15, 1, VAR_14 + 1, VAR_9) != VAR_14 + 1)
  {
   FUNC_3(VAR_2,
     (FUNC_4(),
      FUNC_5("could not write file \"%s\": %m",
       VAR_3)));
   FUNC_12(&VAR_10);
   goto gc_fail;
  }

  VAR_11->query_offset = VAR_12;
  VAR_12 += VAR_14 + 1;
  VAR_13++;
 }





 if (FUNC_8(FUNC_6(VAR_9), VAR_12) != 0)
  FUNC_3(VAR_2,
    (FUNC_4(),
     FUNC_5("could not truncate file \"%s\": %m",
      VAR_3)));

 if (FUNC_1(VAR_9))
 {
  FUNC_3(VAR_2,
    (FUNC_4(),
     FUNC_5("could not write file \"%s\": %m",
      VAR_3)));
  VAR_9 = ((void*)0);
  goto gc_fail;
 }

 FUNC_2(VAR_1, "pgss gc of queries file shrunk size from %zu to %zu",
   VAR_5->extent, VAR_12);


 VAR_5->extent = VAR_12;





 if (VAR_13 > 0)
  VAR_5->mean_query_len = VAR_12 / VAR_13;
 else
  VAR_5->mean_query_len = VAR_0;

 FUNC_7(VAR_7);
 FUNC_16();

 return;

gc_fail:

 if (VAR_9)
  FUNC_1(VAR_9);
 if (VAR_7)
  FUNC_7(VAR_7);





 FUNC_10(&VAR_10, VAR_6);
 while ((VAR_11 = FUNC_11(&VAR_10)) != ((void*)0))
 {
  VAR_11->query_offset = 0;
  VAR_11->query_len = -1;
 }




 (void) FUNC_17(VAR_3);
 VAR_9 = FUNC_0(VAR_3, VAR_4);
 if (VAR_9 == ((void*)0))
  FUNC_3(VAR_2,
    (FUNC_4(),
     FUNC_5("could not recreate file \"%s\": %m",
      VAR_3)));
 else
  FUNC_1(VAR_9);


 VAR_5->extent = 0;


 VAR_5->mean_query_len = VAR_0;
 FUNC_16();
}
