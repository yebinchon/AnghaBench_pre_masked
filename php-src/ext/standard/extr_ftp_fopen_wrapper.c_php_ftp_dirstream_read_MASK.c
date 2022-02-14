
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zend_string ;
typedef int ssize_t ;
struct TYPE_7__ {char* d_name; } ;
typedef TYPE_1__ php_stream_dirent ;
struct TYPE_8__ {scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;
struct TYPE_9__ {TYPE_2__* datastream; } ;
typedef TYPE_3__ php_ftp_dirstream_data ;


 size_t FUNC_0 (int,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,size_t) ;
 int * FUNC_4 (char*,size_t,int *,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,char*,int,size_t*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static ssize_t FUNC_8(php_stream *VAR_0, char *VAR_1, size_t VAR_2)
{
 php_stream_dirent *VAR_3 = (php_stream_dirent *)VAR_1;
 php_stream *VAR_4;
 size_t VAR_5;
 zend_string *VAR_6;

 VAR_4 = ((php_ftp_dirstream_data *)VAR_0->abstract)->datastream;

 if (VAR_2 != sizeof(php_stream_dirent)) {
  return -1;
 }

 if (FUNC_5(VAR_4)) {
  return 0;
 }

 if (!FUNC_6(VAR_4, VAR_3->d_name, sizeof(VAR_3->d_name), &VAR_5)) {
  return -1;
 }

 VAR_6 = FUNC_4(VAR_3->d_name, VAR_5, ((void*)0), 0);

 VAR_5 = FUNC_0(sizeof(VAR_3->d_name), FUNC_1(VAR_6) - 1);
 FUNC_3(VAR_3->d_name, FUNC_2(VAR_6), VAR_5);
 VAR_3->d_name[VAR_5 - 1] = '\0';
 FUNC_7(VAR_6, 0);


 while (VAR_5 > 0 &&
   (VAR_3->d_name[VAR_5 - 1] == '\n' || VAR_3->d_name[VAR_5 - 1] == '\r' ||
    VAR_3->d_name[VAR_5 - 1] == '\t' || VAR_3->d_name[VAR_5 - 1] == ' ')) {
  VAR_3->d_name[--VAR_5] = '\0';
 }

 return sizeof(php_stream_dirent);
}
