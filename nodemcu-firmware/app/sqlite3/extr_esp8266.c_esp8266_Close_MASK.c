
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_2__ {int fd; int name; } ;
typedef TYPE_1__ esp8266_file ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(sqlite3_file *VAR_2)
{
 esp8266_file *VAR_3 = (esp8266_file*) VAR_2;

 int VAR_4 = FUNC_1(VAR_3->fd);
 FUNC_0("esp8266_Close: %s %d %d\n", VAR_3->name, VAR_3->fd, VAR_4);
 return VAR_4 ? VAR_0 : VAR_1;
}
