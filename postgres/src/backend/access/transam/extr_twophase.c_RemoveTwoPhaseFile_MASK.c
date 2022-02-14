
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TransactionId ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(TransactionId VAR_4, bool VAR_5)
{
 char VAR_6[VAR_1];

 FUNC_0(VAR_6, VAR_4);
 if (FUNC_4(VAR_6))
  if (VAR_3 != VAR_0 || VAR_5)
   FUNC_1(VAR_2,
     (FUNC_2(),
      FUNC_3("could not remove file \"%s\": %m", VAR_6)));
}
