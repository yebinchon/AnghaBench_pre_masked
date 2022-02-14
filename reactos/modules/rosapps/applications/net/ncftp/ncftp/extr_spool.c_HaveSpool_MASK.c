
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ncftpbatch ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (char*,int ) ;
 int VAR_3 ;
 char* VAR_4 ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (char*) ;

int
FUNC_7(void)
{
 if (VAR_3 < 0) {
  if (FUNC_5() == 0) {
   VAR_3 = (FUNC_4("/usr/bin/ncftpbatch", VAR_2) == 0) ? 1 : 0;
  } else {
   VAR_3 = (FUNC_6("ncftpbatch -X") == 0) ? 1 : 0;
  }
 }


 return (VAR_3);
}
