
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long long sqlite3_int64 ;
typedef int sqlite3_file ;
struct TYPE_2__ {int fd; int name; } ;
typedef TYPE_1__ esp8266_file ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,long long,long long) ;
 long long FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(sqlite3_file *VAR_1, sqlite3_int64 *VAR_2)
{
 esp8266_file *VAR_3 = (esp8266_file*) VAR_1;
 *VAR_2 = 0LL | FUNC_1( VAR_3->fd );
 FUNC_0("esp8266_FileSize: %s %u[%lld]\n", VAR_3->name, FUNC_1(VAR_3->fd), *VAR_2);
 return VAR_0;
}
