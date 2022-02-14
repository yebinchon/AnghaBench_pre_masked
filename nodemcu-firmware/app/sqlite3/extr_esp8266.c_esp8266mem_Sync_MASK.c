
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_2__ {int name; } ;
typedef TYPE_1__ esp8266_file ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static int FUNC_1(sqlite3_file *VAR_1, int VAR_2)
{
 esp8266_file *VAR_3 = (esp8266_file*) VAR_1;
 FUNC_0("esp8266mem_Sync: %s OK\n", VAR_3->name);
 return VAR_0;
}
