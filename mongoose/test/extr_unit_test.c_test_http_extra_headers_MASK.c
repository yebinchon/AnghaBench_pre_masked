
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* extra_headers; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,char*) ;
 TYPE_1__ VAR_1 ;
 int * FUNC_2 (char*,char const*) ;

__attribute__((used)) static const char *FUNC_3(void) {
  char VAR_2[VAR_0];
  const char *VAR_3 = "MyHdr: my_val\r\n";
  VAR_1.extra_headers = "MyHdr: my_val";
  FUNC_1(VAR_2, "%s", "GET / HTTP/1.0\r\n\r\n");
  FUNC_0(FUNC_2(VAR_2, VAR_3) != ((void*)0));
  VAR_1.extra_headers = ((void*)0);
  return ((void*)0);
}
