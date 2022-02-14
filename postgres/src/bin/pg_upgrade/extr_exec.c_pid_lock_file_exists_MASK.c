
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (char*,int,char*,char const*) ;
 int FUNC_4 (scalar_t__) ;

bool
FUNC_5(const char *VAR_5)
{
 char VAR_6[VAR_2];
 int VAR_7;

 FUNC_3(VAR_6, sizeof(VAR_6), "%s/postmaster.pid", VAR_5);

 if ((VAR_7 = FUNC_1(VAR_6, VAR_3, 0)) < 0)
 {

  if (VAR_4 != VAR_0 && VAR_4 != VAR_1)
   FUNC_2("could not open file \"%s\" for reading: %s\n",
      VAR_6, FUNC_4(VAR_4));

  return 0;
 }

 FUNC_0(VAR_7);
 return 1;
}
