
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dirent {int d_name; } ;
typedef int ssize_t ;
struct TYPE_4__ {int d_name; } ;
typedef TYPE_1__ php_stream_dirent ;
struct TYPE_5__ {scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;
typedef int DIR ;


 int FUNC_0 (int ,int ,int,int ) ;
 struct dirent* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(php_stream *VAR_0, char *VAR_1, size_t VAR_2)
{
 DIR *VAR_3 = (DIR*)VAR_0->abstract;
 struct dirent *VAR_4;
 php_stream_dirent *VAR_5 = (php_stream_dirent*)VAR_1;


 if (VAR_2 != sizeof(php_stream_dirent))
  return -1;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_5->d_name, VAR_4->d_name, sizeof(VAR_5->d_name), FUNC_2(VAR_4->d_name));
  return sizeof(php_stream_dirent);
 }
 return 0;
}
