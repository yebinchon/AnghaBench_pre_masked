
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_int64 ;
typedef int sqlite3_file ;
typedef scalar_t__ sint32_t ;
struct TYPE_2__ {int name; int cache; } ;
typedef TYPE_1__ esp8266_file ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__,int) ;
 int FUNC_1 (int ,scalar_t__,int,void const*) ;

__attribute__((used)) static int FUNC_2(sqlite3_file *VAR_1, const void *VAR_2, int VAR_3, sqlite3_int64 VAR_4)
{
 sint32_t VAR_5;
 esp8266_file *VAR_6 = (esp8266_file*) VAR_1;

 VAR_5 = (sint32_t)(VAR_4 & 0x7FFFFFFF);

 FUNC_1 (VAR_6->cache, VAR_5, VAR_3, VAR_2);

 FUNC_0("esp8266mem_Write: %s [%ld] [%d] OK\n", VAR_6->name, VAR_5, VAR_3);
 return VAR_0;
}
