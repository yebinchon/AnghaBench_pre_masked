
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {char const* name; int content_type; struct TYPE_4__* next; } ;
typedef TYPE_1__ coap_luser_entry ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 TYPE_1__* VAR_1 ;
 char* FUNC_2 (int *,int,size_t*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int,int ) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_6( lua_State* VAR_3, const char* VAR_4, int VAR_5 )
{
  size_t VAR_6;
  const char *VAR_7 = FUNC_2( VAR_3, 2, &VAR_6 );
  int VAR_8 = FUNC_4(VAR_3, 3, VAR_0);
  if (VAR_7 == ((void*)0))
    return FUNC_3( VAR_3, "name must be set." );

  coap_luser_entry *VAR_9 = ((void*)0);

  if(VAR_5)
    VAR_9 = VAR_2;
  else
    VAR_9 = VAR_1;

  while(((void*)0)!=VAR_9->next){
    if(VAR_9->name!= ((void*)0) && FUNC_5(VAR_9->name, VAR_7)==0)
      break;
    VAR_9 = VAR_9->next;
  }

  if(VAR_9->name==((void*)0) || FUNC_5(VAR_9->name, VAR_7)!=0){
    VAR_9->next = (coap_luser_entry *)FUNC_1(1,sizeof(coap_luser_entry));
    VAR_9 = VAR_9->next;
    if(VAR_9 == ((void*)0))
      return FUNC_3(VAR_3, "not enough memory");
    VAR_9->next = ((void*)0);
    VAR_9->name = ((void*)0);
  }

  VAR_9->name = VAR_7;
  VAR_9->content_type = VAR_8;

  FUNC_0("coap_regist is called.\n");
  return 0;
}
