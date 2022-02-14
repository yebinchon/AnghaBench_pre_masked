
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_6__ {void* addr; } ;
typedef TYPE_1__ ip_addr_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 void* FUNC_3 (char const*) ;
 char* FUNC_4 (int *,int,size_t*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8( lua_State *VAR_0, int VAR_1) {
   size_t VAR_2;
   ip_addr_t VAR_3;
   ip_addr_t VAR_4;
   const char *VAR_5;
   const char *VAR_6;

   FUNC_0("net_multicastJoin is called.\n");
   if(! FUNC_6(VAR_0,1) ) return FUNC_5( VAR_0, "wrong arg type" );
   VAR_6 = FUNC_4( VAR_0, 1, &VAR_2 );
   if (VAR_6 != ((void*)0))
   if ( VAR_6[0] == '\0' || FUNC_7(VAR_6,"any") == 0)
      {
    VAR_6 = "0.0.0.0";
    VAR_2 = 7;
      }
   if (VAR_6 == ((void*)0) || VAR_2 > 15 || VAR_2 < 7) return FUNC_5( VAR_0, "invalid if ip" );
   VAR_4.addr = FUNC_3(VAR_6);

   if(! FUNC_6(VAR_0,2) ) return FUNC_5( VAR_0, "wrong arg type" );
   VAR_5 = FUNC_4( VAR_0, 2, &VAR_2 );
   if (VAR_5 == ((void*)0) || VAR_2 > 15 || VAR_2 < 7) return FUNC_5( VAR_0, "invalid multicast ip" );
   VAR_3.addr = FUNC_3(VAR_5);
   if (VAR_1)
   {
    FUNC_1(&VAR_4, &VAR_3);
   }
   else
   {
    FUNC_2(&VAR_4, &VAR_3);
   }
   return 0;
}
