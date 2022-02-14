
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * MemoryContext ;
typedef int Block ;


 int VAR_0 ;
 int * FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static Block
FUNC_5(void)
{
 static char *VAR_5 = ((void*)0);
 static int VAR_6 = 0;
 static int VAR_7 = 0;
 static int VAR_8 = 0;
 static MemoryContext VAR_9 = ((void*)0);

 char *VAR_10;

 FUNC_1(VAR_8 < VAR_3);

 if (VAR_6 >= VAR_7)
 {

  int VAR_11;






  if (VAR_9 == ((void*)0))
   VAR_9 =
    FUNC_0(VAR_4,
           "LocalBufferContext",
           VAR_0);


  VAR_11 = FUNC_2(VAR_7 * 2, 16);

  VAR_11 = FUNC_4(VAR_11, VAR_3 - VAR_8);

  VAR_11 = FUNC_4(VAR_11, VAR_2 / VAR_1);

  VAR_5 = (char *) FUNC_3(VAR_9,
            VAR_11 * VAR_1);
  VAR_6 = 0;
  VAR_7 = VAR_11;
 }


 VAR_10 = VAR_5 + VAR_6 * VAR_1;
 VAR_6++;
 VAR_8++;

 return (Block) VAR_10;
}
