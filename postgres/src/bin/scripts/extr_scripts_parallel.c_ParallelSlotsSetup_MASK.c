
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ParallelSlot ;
typedef int PGconn ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char const*,char const*,char const*,int,char const*,int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (int) ;

ParallelSlot *
FUNC_7(const char *VAR_1, const char *VAR_2, const char *VAR_3,
       const char *VAR_4, bool VAR_5,
       const char *VAR_6, bool VAR_7,
       PGconn *VAR_8, int VAR_9)
{
 ParallelSlot *VAR_10;
 int VAR_11;

 FUNC_0(VAR_8 != ((void*)0));

 VAR_10 = (ParallelSlot *) FUNC_6(sizeof(ParallelSlot) * VAR_9);
 FUNC_4(VAR_10, VAR_8);
 if (VAR_9 > 1)
 {
  for (VAR_11 = 1; VAR_11 < VAR_9; VAR_11++)
  {
   VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
           VAR_6, VAR_7, 0, 1);






   if (FUNC_1(VAR_8) >= VAR_0)
   {
    FUNC_5("too many jobs for this platform -- try %d", VAR_11);
    FUNC_3(1);
   }

   FUNC_4(VAR_10 + VAR_11, VAR_8);
  }
 }

 return VAR_10;
}
