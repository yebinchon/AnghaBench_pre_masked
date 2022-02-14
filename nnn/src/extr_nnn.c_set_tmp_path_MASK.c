
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uchar ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_1 (char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static bool FUNC_4(void)
{
 char *VAR_6;

 if (FUNC_2("/tmp"))
  VAR_4 = (uchar)FUNC_3(VAR_3, "/tmp", VAR_1);
 else {
  VAR_6 = FUNC_1("TMPDIR");
  if (VAR_6)
   VAR_4 = (uchar)FUNC_3(VAR_3, VAR_6, VAR_1);
  else {
   FUNC_0(VAR_5, "set TMPDIR\n");
   return VAR_0;
  }
 }

 return VAR_2;
}
