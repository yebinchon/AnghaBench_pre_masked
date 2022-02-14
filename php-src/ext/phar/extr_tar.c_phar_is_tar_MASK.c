
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {char* checksum; } ;
typedef TYPE_1__ tar_header ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char,int) ;
 scalar_t__ FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (char*,int) ;
 int FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (char*,int ) ;
 char* FUNC_6 (char*,char*) ;

int FUNC_7(char *VAR_1, char *VAR_2)
{
 tar_header *VAR_3 = (tar_header *) VAR_1;
 uint32_t VAR_4 = FUNC_3(VAR_3->checksum, sizeof(VAR_3->checksum));
 uint32_t VAR_5;
 char VAR_6[sizeof(VAR_3->checksum)], *VAR_7;


 if (!FUNC_4(VAR_1, "<?php", sizeof("<?php")-1)) {
  return 0;
 }

 FUNC_0(VAR_6, VAR_3->checksum, sizeof(VAR_3->checksum));
 FUNC_1(VAR_3->checksum, ' ', sizeof(VAR_3->checksum));
 VAR_5 = (VAR_4 == FUNC_2(VAR_1, 512));
 FUNC_0(VAR_3->checksum, VAR_6, sizeof(VAR_3->checksum));
 if ((VAR_7 = FUNC_5(VAR_2, VAR_0))) {
  VAR_2 = VAR_7;
 }
 if (!VAR_5 && (VAR_7 = FUNC_6(VAR_2, ".tar")) && (VAR_7[4] == '\0' || VAR_7[4] == '.')) {

  return 1;
 }
 return VAR_5;
}
