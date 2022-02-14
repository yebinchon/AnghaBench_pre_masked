
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* error_msg; int error_no; } ;
typedef TYPE_1__ MYSQLND_INFILE_INFO ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,unsigned int) ;

__attribute__((used)) static
int FUNC_4(void * VAR_1, char *VAR_2, unsigned int VAR_3)
{
 MYSQLND_INFILE_INFO *VAR_4 = (MYSQLND_INFILE_INFO *)VAR_1;

 FUNC_0("mysqlnd_local_infile_error");

 if (VAR_4) {
  FUNC_3(VAR_2, VAR_4->error_msg, VAR_3);
  FUNC_1("have info, %d", VAR_4->error_no);
  FUNC_2(VAR_4->error_no);
 }

 FUNC_3(VAR_2, "Unknown error", VAR_3);
 FUNC_1("no info, %d", VAR_0);
 FUNC_2(VAR_0);
}
