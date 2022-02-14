
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vfs ;
typedef int sqlite3_file ;
typedef int filecache_t ;
struct TYPE_5__ {int * pMethods; } ;
struct TYPE_6__ {char* name; char* fd; TYPE_1__ base; struct TYPE_6__* cache; } ;
typedef TYPE_2__ esp8266_file ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,char const*,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int *,char const*,int,int*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (char*,char const*,int) ;
 char* FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6( sqlite3_vfs * VAR_10, const char * VAR_11, sqlite3_file * VAR_12, int VAR_13, int * VAR_14 )
{
 int VAR_15;
 char *VAR_16 = "r";
 esp8266_file *VAR_17 = (esp8266_file*) VAR_12;

 if ( VAR_11 == ((void*)0) ) return VAR_2;
 if( VAR_13&VAR_6 ) VAR_16 = "r";
 if( VAR_13&VAR_7 || VAR_13&VAR_5 ) {
  int VAR_18;
  if (VAR_4 != FUNC_1(VAR_10, VAR_11, VAR_13, &VAR_18))
   return VAR_1;

  if (VAR_18 == 1)
   VAR_16 = "r+";
  else
   VAR_16 = "w+";
 }

 FUNC_0("esp8266_Open: 1o %s %s\n", VAR_11, VAR_16);
 FUNC_2 (VAR_17, 0, sizeof(esp8266_file));

        FUNC_4 (VAR_17->name, VAR_11, VAR_0);
 VAR_17->name[VAR_0-1] = '\0';

 if( VAR_13&VAR_5 ) {
  VAR_17->fd = 0;
  VAR_17->cache = FUNC_3(sizeof (filecache_t));
  if (! VAR_17->cache )
   return VAR_3;
  FUNC_2 (VAR_17->cache, 0, sizeof(filecache_t));

  VAR_17->base.pMethods = &VAR_9;
  FUNC_0("esp8266_Open: 2o %s %d MEM OK\n", VAR_17->name, VAR_17->fd);
  return VAR_4;
 }

 VAR_17->fd = FUNC_5 (VAR_11, VAR_16);
 if ( VAR_17->fd <= 0 ) {
  return VAR_1;
 }

 VAR_17->base.pMethods = &VAR_8;
 FUNC_0("esp8266_Open: 2o %s %d OK\n", VAR_17->name, VAR_17->fd);
 return VAR_4;
}
