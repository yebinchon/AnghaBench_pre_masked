
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tmp_line ;
typedef int time_t ;
struct tm {int tm_year; long tm_sec; int tm_isdst; int tm_mon; int tm_min; int tm_hour; int tm_mday; } ;
struct TYPE_8__ {int * path; } ;
typedef TYPE_2__ php_url ;
typedef int php_stream_wrapper ;
struct TYPE_7__ {int st_mode; int st_mtime; int st_atime; int st_ctime; int st_nlink; int st_rdev; int st_blksize; int st_blocks; int st_size; scalar_t__ st_gid; scalar_t__ st_uid; scalar_t__ st_dev; scalar_t__ st_ino; } ;
struct TYPE_9__ {TYPE_1__ sb; } ;
typedef TYPE_3__ php_stream_statbuf ;
typedef int php_stream_context ;
typedef int php_stream ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char) ;
 int FUNC_4 (struct tm*) ;
 int * FUNC_5 (int *,char const*,char*,int ,int *,int *,int *,TYPE_2__**,int *,int *) ;
 struct tm* FUNC_6 (int*,struct tm*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,char*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (char*,char*,int*,int *,int *,int *,int *,long*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(php_stream_wrapper *VAR_5, const char *VAR_6, int VAR_7, php_stream_statbuf *VAR_8, php_stream_context *VAR_9)
{
 php_stream *VAR_10 = ((void*)0);
 php_url *VAR_11 = ((void*)0);
 int VAR_12;
 char VAR_13[512];


 if (!VAR_8) return -1;

 VAR_10 = FUNC_5(VAR_5, VAR_6, "r", 0, ((void*)0), VAR_9, ((void*)0), &VAR_11, ((void*)0), ((void*)0));
 if (!VAR_10) {
  goto stat_errexit;
 }

 VAR_8->sb.st_mode = 0644;
 FUNC_8(VAR_10, "CWD %s\r\n", (VAR_11->path != ((void*)0) ? FUNC_1(VAR_11->path) : "/"));
 VAR_12 = FUNC_0(VAR_10);
 if (VAR_12 < 200 || VAR_12 > 299) {
  VAR_8->sb.st_mode |= VAR_1;
 } else {
  VAR_8->sb.st_mode |= VAR_0 | VAR_4 | VAR_2 | VAR_3;
 }

 FUNC_9(VAR_10, "TYPE I\r\n");

 VAR_12 = FUNC_0(VAR_10);

 if(VAR_12 < 200 || VAR_12 > 299) {
  goto stat_errexit;
 }

 FUNC_8(VAR_10, "SIZE %s\r\n", (VAR_11->path != ((void*)0) ? FUNC_1(VAR_11->path) : "/"));
 VAR_12 = FUNC_0(VAR_10);
 if (VAR_12 < 200 || VAR_12 > 299) {



  if (VAR_8->sb.st_mode & VAR_0) {
   VAR_8->sb.st_size = 0;
  } else {
   goto stat_errexit;
  }
 } else {
  VAR_8->sb.st_size = FUNC_2(VAR_13 + 4);
 }

 FUNC_8(VAR_10, "MDTM %s\r\n", (VAR_11->path != ((void*)0) ? FUNC_1(VAR_11->path) : "/"));
 VAR_12 = FUNC_0(VAR_10);
 if (VAR_12 == 213) {
  char *VAR_14 = VAR_13 + 4;
  int VAR_15;
  struct tm VAR_16, VAR_17, *VAR_18;
  time_t VAR_19;

  while ((size_t)(VAR_14 - VAR_13) < sizeof(VAR_13) && !FUNC_3(*VAR_14)) {
   VAR_14++;
  }

  if ((size_t)(VAR_14 - VAR_13) > sizeof(VAR_13)) {
   goto mdtm_error;
  }

  VAR_15 = FUNC_11(VAR_14, "%4u%2u%2u%2u%2u%2u", &VAR_16.tm_year, &VAR_16.tm_mon, &VAR_16.tm_mday, &VAR_16.tm_hour, &VAR_16.tm_min, &VAR_16.tm_sec);
  if (VAR_15 != 6) {
   goto mdtm_error;
  }

  VAR_16.tm_year -= 1900;
  VAR_16.tm_mon--;
  VAR_16.tm_isdst = -1;


  VAR_19 = FUNC_12(((void*)0));
  VAR_18 = FUNC_6(&VAR_19, &VAR_17);
  if (!VAR_18) {
   goto mdtm_error;
  }
  VAR_18->tm_isdst = -1;


  VAR_16.tm_sec += (long)(VAR_19 - FUNC_4(VAR_18));
  VAR_16.tm_isdst = VAR_18->tm_isdst;

  VAR_8->sb.st_mtime = FUNC_4(&VAR_16);
 } else {

mdtm_error:
  VAR_8->sb.st_mtime = -1;
 }

 VAR_8->sb.st_ino = 0;
 VAR_8->sb.st_dev = 0;
 VAR_8->sb.st_uid = 0;
 VAR_8->sb.st_gid = 0;
 VAR_8->sb.st_atime = -1;
 VAR_8->sb.st_ctime = -1;

 VAR_8->sb.st_nlink = 1;
 VAR_8->sb.st_rdev = -1;






 FUNC_7(VAR_10);
 FUNC_10(VAR_11);
 return 0;

stat_errexit:
 if (VAR_11) {
  FUNC_10(VAR_11);
 }
 if (VAR_10) {
  FUNC_7(VAR_10);
 }
 return -1;
}
