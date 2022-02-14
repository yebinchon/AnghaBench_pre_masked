
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (char*,char const*,...) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,void const*,size_t) ;

__attribute__((used)) static void FUNC_5(const char *VAR_3, const void *VAR_4, size_t VAR_5,
     int VAR_6)
{
 int VAR_7, VAR_8;
 ssize_t VAR_9;

 VAR_7 = FUNC_2(VAR_3, VAR_1 | VAR_0);
 if (VAR_7 < 0)
  FUNC_1("%s - Failed to open file %s\n",
       FUNC_3(VAR_2), VAR_3);

 VAR_9 = FUNC_4(VAR_7, VAR_4, VAR_5);
 if (VAR_9 < 0) {
  if (VAR_6 && (VAR_2 == VAR_6)) {
   FUNC_0(VAR_7);
   return;
  }

  goto on_error;
 }

 if ((size_t)VAR_9 != VAR_5)
  goto on_error;

 FUNC_0(VAR_7);
 return;

on_error:
 VAR_8 = VAR_2;
 FUNC_0(VAR_7);
 VAR_2 = VAR_8;

 if (VAR_9 < 0)
  FUNC_1("%s - Failed to write to file %s\n",
       FUNC_3(VAR_2), VAR_3);

 FUNC_1("Failed to write to file %s\n", VAR_3);
}
