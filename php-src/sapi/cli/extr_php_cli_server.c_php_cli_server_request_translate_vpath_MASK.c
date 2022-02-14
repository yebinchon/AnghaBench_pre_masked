
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int st_mode; } ;
typedef TYPE_1__ zend_stat_t ;
typedef size_t uint32_t ;
struct TYPE_6__ {size_t vpath_len; char* vpath; size_t path_info_len; char* path_info; char* path_translated; int path_translated_len; TYPE_1__ sb; } ;
typedef TYPE_2__ php_cli_server_request ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (char*,int) ;
 void* FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*,TYPE_1__*) ;
 char* FUNC_4 (int,size_t,int,int) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(php_cli_server_request *VAR_3, const char *VAR_4, size_t VAR_5)
{
 zend_stat_t VAR_6;
 static const char *VAR_7[] = { "index.php", "index.html", ((void*)0) };
 char *VAR_8 = FUNC_4(1, VAR_3->vpath_len, 1 + VAR_5 + 1 + sizeof("index.html"), 1);
 char *VAR_9 = VAR_8, *VAR_10 = ((void*)0), *VAR_11, *VAR_12;
 size_t VAR_13 = 0;
 int VAR_14 = 0;

 FUNC_0(VAR_9, VAR_4, VAR_5);
 VAR_9 += VAR_5;
 VAR_12 = VAR_9;
 if (VAR_3->vpath_len > 0 && VAR_3->vpath[0] != '/') {
  *VAR_9++ = VAR_0;
 }
 VAR_11 = VAR_3->vpath + VAR_3->vpath_len;
 while (VAR_11 > VAR_3->vpath) {
  if (*VAR_11-- == '.') {
   VAR_14 = 1;
   break;
  }
 }
 FUNC_0(VAR_9, VAR_3->vpath, VAR_3->vpath_len);
 VAR_9 += VAR_3->vpath_len;
 *VAR_9 = '\0';
 VAR_11 = VAR_9;
 while (VAR_11 > VAR_8) {
  if (!FUNC_3(VAR_8, &VAR_6)) {
   if (VAR_6.st_mode & VAR_1) {
    const char **VAR_15 = VAR_7;
    if (VAR_11[-1] != VAR_0) {
     *VAR_11++ = VAR_0;
    }
    while (*VAR_15) {
     size_t VAR_16 = FUNC_5(*VAR_15);
     FUNC_0(VAR_11, *VAR_15, VAR_16 + 1);
     if (!FUNC_3(VAR_8, &VAR_6) && (VAR_6.st_mode & VAR_2)) {
      VAR_11 += VAR_16;
      break;
     }
     VAR_15++;
    }
    if (!*VAR_15 || VAR_14) {
     if (VAR_10) {
      FUNC_1(VAR_10, 1);
     }
     FUNC_1(VAR_8, 1);
     return;
    }
   }
   break;
  }
  if (VAR_10) {
   FUNC_1(VAR_10, 1);
   *VAR_11 = VAR_0;
  }
  while (VAR_11 > VAR_8 && *(--VAR_11) != VAR_0);
  VAR_13 = VAR_9 - VAR_11;
  VAR_10 = FUNC_2(VAR_11, VAR_13, 1);
  *VAR_11 = '\0';
 }
 if (VAR_10) {
  VAR_3->path_info_len = VAR_13;







  VAR_3->path_info = VAR_10;
  FUNC_1(VAR_3->vpath, 1);
  VAR_3->vpath = FUNC_2(VAR_12, VAR_11 - VAR_12, 1);
  VAR_3->vpath_len = VAR_11 - VAR_12;
  VAR_3->path_translated = VAR_8;
  VAR_3->path_translated_len = VAR_11 - VAR_8;
 } else {
  FUNC_1(VAR_3->vpath, 1);
  VAR_3->vpath = FUNC_2(VAR_12, VAR_11 - VAR_12, 1);
  VAR_3->vpath_len = VAR_11 - VAR_12;
  VAR_3->path_translated = VAR_8;
  VAR_3->path_translated_len = VAR_11 - VAR_8;
 }
 VAR_3->sb = VAR_6;
}
