
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zend_uchar ;
struct TYPE_2__ {int error_no; int error_msg; int fd; } ;
typedef TYPE_1__ MYSQLND_INFILE_INFO ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static
int FUNC_4(void * VAR_1, zend_uchar * VAR_2, unsigned int VAR_3)
{
 MYSQLND_INFILE_INFO *VAR_4 = (MYSQLND_INFILE_INFO *)VAR_1;
 int VAR_5;

 FUNC_0("mysqlnd_local_infile_read");

 VAR_5 = (int) FUNC_2(VAR_4->fd, (char *) VAR_2, VAR_3);

 if (VAR_5 < 0) {
  FUNC_3(VAR_4->error_msg, "Error reading file");
  VAR_4->error_no = VAR_0;
 }

 FUNC_1(VAR_5);
}
