
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGconn ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (char const*,int,int) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_3 (int *,char const*) ;
 int FUNC_4 (char const* const*) ;
 int FUNC_5 (char const*,char const*,int ,int ,int ,int,int ,int) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_7(PGconn *VAR_3)
{
 static const char *const VAR_4[] = {
  "DateStyle",
  "IntervalStyle"
 };

 int VAR_5 = -1;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_4(VAR_4); VAR_6++)
 {
  const char *VAR_7 = VAR_4[VAR_6];
  const char *VAR_8 = FUNC_3(VAR_3, VAR_7);
  const char *VAR_9;







  if (VAR_8 == ((void*)0))
   continue;





  VAR_9 = FUNC_1(VAR_7, 0, 0);
  FUNC_0(VAR_9 != ((void*)0));

  if (FUNC_6(VAR_8, VAR_9) == 0)
   continue;


  if (VAR_5 < 0)
   VAR_5 = FUNC_2();


  (void) FUNC_5(VAR_7, VAR_8,
         VAR_2, VAR_1,
         VAR_0, 1, 0, 0);
 }

 return VAR_5;
}
