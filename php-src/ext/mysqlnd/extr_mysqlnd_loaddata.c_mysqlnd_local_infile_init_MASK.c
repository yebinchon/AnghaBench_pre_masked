
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int php_stream_context ;
struct TYPE_2__ {char* filename; int error_no; scalar_t__ error_msg; int * fd; } ;
typedef TYPE_1__ MYSQLND_INFILE_INFO ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int) ;
 int VAR_2 ;
 int FUNC_4 (char const* const,int ) ;
 int * FUNC_5 (char*,char*,int ,int *,int *) ;
 int FUNC_6 (char*,int,char*,char const* const) ;
 int FUNC_7 (scalar_t__,char*) ;

__attribute__((used)) static
int FUNC_8(void ** VAR_3, const char * const VAR_4)
{
 MYSQLND_INFILE_INFO *VAR_5;
 php_stream_context *VAR_6 = ((void*)0);

 FUNC_0("mysqlnd_local_infile_init");

 VAR_5 = ((MYSQLND_INFILE_INFO *)FUNC_3(1, sizeof(MYSQLND_INFILE_INFO)));
 if (!VAR_5) {
  FUNC_1(1);
 }

 *VAR_3 = VAR_5;


 if (FUNC_2(VAR_2)) {
  if (FUNC_4(VAR_4, 0) == -1) {
   FUNC_7(VAR_5->error_msg, "open_basedir restriction in effect. Unable to open file");
   VAR_5->error_no = VAR_0;
   FUNC_1(1);
  }
 }

 VAR_5->filename = VAR_4;
 VAR_5->fd = FUNC_5((char *)VAR_4, "r", 0, ((void*)0), VAR_6);

 if (VAR_5->fd == ((void*)0)) {
  FUNC_6((char *)VAR_5->error_msg, sizeof(VAR_5->error_msg), "Can't find file '%-.64s'.", VAR_4);
  VAR_5->error_no = VAR_1;
  FUNC_1(1);
 }

 FUNC_1(0);
}
