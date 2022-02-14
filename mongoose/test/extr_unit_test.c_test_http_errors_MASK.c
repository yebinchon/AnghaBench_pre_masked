
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_mgr {int dummy; } ;
struct mg_connection {char* user_data; } ;
struct TYPE_2__ {int * enable_directory_listing; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mg_connection* FUNC_2 (struct mg_mgr*,char const*,int ) ;
 struct mg_connection* FUNC_3 (struct mg_mgr*,char const*,int ) ;
 int FUNC_4 (struct mg_mgr*) ;
 int FUNC_5 (struct mg_mgr*,int *) ;
 int FUNC_6 (struct mg_connection*,char*,char*) ;
 int FUNC_7 (struct mg_connection*) ;
 int FUNC_8 (struct mg_mgr*,int,int ,char*,void*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_9 (char*) ;

__attribute__((used)) static const char *FUNC_10(void) {
  struct mg_mgr VAR_4;
  struct mg_connection *VAR_5;
  const char *VAR_6 = "127.0.0.1:7777";
  char VAR_7[1000] = "";

  FUNC_5(&VAR_4, ((void*)0));
  VAR_3.enable_directory_listing = ((void*)0);
  FUNC_0((VAR_5 = FUNC_2(&VAR_4, VAR_6, VAR_1)) != ((void*)0));
  FUNC_7(VAR_5);



  FUNC_0((VAR_5 = FUNC_3(&VAR_4, VAR_6, VAR_2)) != ((void*)0));
  FUNC_7(VAR_5);
  VAR_5->user_data = VAR_7;
  FUNC_9("touch test_unreadable; chmod 000 test_unreadable");
  FUNC_6(VAR_5, "GET /%s HTTP/1.0\n\n", "../test_unreadable");


  FUNC_8(&VAR_4, 1, VAR_0, VAR_7, (void *) "");
  FUNC_9("rm -f test_unreadable");


  FUNC_1(VAR_7, "HTTP/1.1 403");



  FUNC_0((VAR_5 = FUNC_3(&VAR_4, VAR_6, VAR_2)) != ((void*)0));
  FUNC_7(VAR_5);
  VAR_7[0] = '\0';
  VAR_5->user_data = VAR_7;
  FUNC_6(VAR_5, "GET /%s HTTP/1.0\n\n", "/please_dont_create_this_file_srsly");

  FUNC_8(&VAR_4, 1, VAR_0, VAR_7, (void *) "");


  FUNC_1(VAR_7, "HTTP/1.1 404");


  FUNC_4(&VAR_4);

  return ((void*)0);
}
