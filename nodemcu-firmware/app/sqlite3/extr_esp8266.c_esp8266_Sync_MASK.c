
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_2__ {int fd; } ;
typedef TYPE_1__ esp8266_file ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(sqlite3_file *VAR_2, int VAR_3)
{
 esp8266_file *VAR_4 = (esp8266_file*) VAR_2;

 int VAR_5 = FUNC_1( VAR_4->fd );
 FUNC_0("esp8266_Sync: %d\n", VAR_5);

 return VAR_5 ? VAR_0 : VAR_1;
}
