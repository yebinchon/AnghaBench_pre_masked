
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long FUNC_0 (long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int FUNC_1 (char*,char*,int ,int ) ;
 long FUNC_2 () ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,long) ;

__attribute__((used)) static void
FUNC_5(void)
{
 char *VAR_3;
 long VAR_4;

 VAR_3 = FUNC_3("PGPORT");
 if (VAR_3 != ((void*)0))
  FUNC_1("port", VAR_3, VAR_0, VAR_1);

 VAR_3 = FUNC_3("PGDATESTYLE");
 if (VAR_3 != ((void*)0))
  FUNC_1("datestyle", VAR_3, VAR_0, VAR_1);

 VAR_3 = FUNC_3("PGCLIENTENCODING");
 if (VAR_3 != ((void*)0))
  FUNC_1("client_encoding", VAR_3, VAR_0, VAR_1);






 VAR_4 = FUNC_2();
 if (VAR_4 > 0)
 {
  long VAR_5 = (VAR_4 - VAR_2) / 1024L;

  if (VAR_5 > 100)
  {
   char VAR_6[16];

   VAR_5 = FUNC_0(VAR_5, 2048);
   FUNC_4(VAR_6, "%ld", VAR_5);
   FUNC_1("max_stack_depth", VAR_6,
       VAR_0, VAR_1);
  }
 }
}
