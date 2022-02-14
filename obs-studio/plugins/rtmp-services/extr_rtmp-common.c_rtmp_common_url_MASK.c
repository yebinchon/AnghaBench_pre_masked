
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twitch_ingest {char const* url; } ;
struct rtmp_common {char const* service; char const* server; scalar_t__ key; } ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 struct twitch_ingest FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 char const* FUNC_5 (char const*,scalar_t__) ;

__attribute__((used)) static const char *FUNC_6(void *VAR_0)
{
 struct rtmp_common *VAR_1 = VAR_0;

 if (VAR_1->service && FUNC_0(VAR_1->service, "Twitch") == 0) {
  if (VAR_1->server && FUNC_0(VAR_1->server, "auto") == 0) {
   struct twitch_ingest VAR_2;

   FUNC_3(3);

   FUNC_2();
   VAR_2 = FUNC_1(0);
   FUNC_4();

   return VAR_2.url;
  }
 }

 if (VAR_1->service && FUNC_0(VAR_1->service, "YouNow") == 0) {
  if (VAR_1->server && VAR_1->key) {
   return FUNC_5(VAR_1->server, VAR_1->key);
  }
 }

 return VAR_1->server;
}
