
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_int64 ;
typedef int sqlite3_file ;
typedef scalar_t__ sint32_t ;
struct TYPE_2__ {int name; int fd; } ;
typedef TYPE_1__ esp8266_file ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;
 size_t FUNC_2 (int ,void*,int) ;

__attribute__((used)) static int FUNC_3(sqlite3_file *VAR_4, void *VAR_5, int VAR_6, sqlite3_int64 VAR_7)
{
 size_t VAR_8;
 sint32_t VAR_9, VAR_10;
 esp8266_file *VAR_11 = (esp8266_file*) VAR_4;

 VAR_10 = (sint32_t)(VAR_7 & 0x7FFFFFFF);

 FUNC_0("esp8266_Read: 1r %s %d %d %lld[%ld] \n", VAR_11->name, VAR_11->fd, VAR_6, VAR_7, VAR_10);
 VAR_9 = FUNC_1(VAR_11->fd, VAR_10, VAR_3);
 if (VAR_9 != VAR_10) {
         FUNC_0("esp8266_Read: 2r %ld != %ld FAIL\n", VAR_9, VAR_10);
  return VAR_1 ;
 }

 VAR_8 = FUNC_2(VAR_11->fd, VAR_5, VAR_6);
 if ( VAR_8 == VAR_6 ) {
         FUNC_0("esp8266_Read: 3r %s %u %d OK\n", VAR_11->name, VAR_8, VAR_6);
  return VAR_2;
 } else if ( VAR_8 >= 0 ) {
         FUNC_0("esp8266_Read: 3r %s %u %d FAIL\n", VAR_11->name, VAR_8, VAR_6);
  return VAR_1;
 }

 FUNC_0("esp8266_Read: 4r %s FAIL\n", VAR_11->name);
 return VAR_0;
}
