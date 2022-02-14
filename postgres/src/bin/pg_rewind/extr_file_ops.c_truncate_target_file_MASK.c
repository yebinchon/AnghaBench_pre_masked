
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;
typedef int dstpath ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,char*,...) ;
 int VAR_4 ;
 int FUNC_4 (char*,int,char*,char*,char const*) ;

void
FUNC_5(const char *VAR_5, off_t VAR_6)
{
 char VAR_7[VAR_0];
 int VAR_8;

 if (VAR_3)
  return;

 FUNC_4(VAR_7, sizeof(VAR_7), "%s/%s", VAR_2, VAR_5);

 VAR_8 = FUNC_2(VAR_7, VAR_1, VAR_4);
 if (VAR_8 < 0)
  FUNC_3("could not open file \"%s\" for truncation: %m",
     VAR_7);

 if (FUNC_1(VAR_8, VAR_6) != 0)
  FUNC_3("could not truncate file \"%s\" to %u: %m",
     VAR_7, (unsigned int) VAR_6);

 FUNC_0(VAR_8);
}
