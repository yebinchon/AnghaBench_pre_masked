
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_2__ {int name; int cache; } ;
typedef TYPE_1__ esp8266_file ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(sqlite3_file *VAR_1)
{
 esp8266_file *VAR_2 = (esp8266_file*) VAR_1;

 FUNC_1(VAR_2->cache);
 FUNC_2 (VAR_2->cache);

 FUNC_0("esp8266mem_Close: %s OK\n", VAR_2->name);
 return VAR_0;
}
