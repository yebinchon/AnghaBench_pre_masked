
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef long long sqlite3_int64 ;
typedef int sqlite3_file ;
struct TYPE_4__ {TYPE_1__* cache; int name; } ;
typedef TYPE_2__ esp8266_file ;
struct TYPE_3__ {long long size; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,long long) ;

__attribute__((used)) static int FUNC_1(sqlite3_file *VAR_1, sqlite3_int64 *VAR_2)
{
 esp8266_file *VAR_3 = (esp8266_file*) VAR_1;

 *VAR_2 = 0LL | VAR_3->cache->size;
 FUNC_0("esp8266mem_FileSize: %s [%d] OK\n", VAR_3->name, VAR_3->cache->size);
 return VAR_0;
}
