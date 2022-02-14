
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XLogRecPtr ;
typedef int StreamCtl ;
typedef int PGresult ;
typedef int PGconn ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static PGresult *
FUNC_9(PGconn *VAR_2, StreamCtl *VAR_3, char *VAR_4,
       XLogRecPtr VAR_5, XLogRecPtr *VAR_6)
{
 PGresult *VAR_7 = FUNC_4(VAR_2);






 if (VAR_1)
 {
  if (!FUNC_7(VAR_3, VAR_5))
  {

   FUNC_0(VAR_7);
   return ((void*)0);
  }
  if (FUNC_6(VAR_7) == VAR_0)
  {
   if (FUNC_5(VAR_2, ((void*)0)) <= 0 || FUNC_2(VAR_2))
   {
    FUNC_8("could not send copy-end packet: %s",
        FUNC_1(VAR_2));
    FUNC_0(VAR_7);
    return ((void*)0);
   }
   VAR_7 = FUNC_4(VAR_2);
  }
  VAR_1 = 0;
 }
 if (VAR_4 != ((void*)0))
  FUNC_3(VAR_4);
 *VAR_6 = VAR_5;
 return VAR_7;
}
