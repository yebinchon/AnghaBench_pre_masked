
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {int dummy; } ;
struct logger {int close; int * handle; int filename; } ;


 int * FUNC_0 (char const*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct skynet_context*,struct logger*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int * VAR_1 ;
 int FUNC_3 (int ,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

int
FUNC_5(struct logger * VAR_2, struct skynet_context *VAR_3, const char * VAR_4) {
 if (VAR_4) {
  VAR_2->handle = FUNC_0(VAR_4,"w");
  if (VAR_2->handle == ((void*)0)) {
   return 1;
  }
  VAR_2->filename = FUNC_2(FUNC_4(VAR_4)+1);
  FUNC_3(VAR_2->filename, VAR_4);
  VAR_2->close = 1;
 } else {
  VAR_2->handle = VAR_1;
 }
 if (VAR_2->handle) {
  FUNC_1(VAR_3, VAR_2, VAR_0);
  return 0;
 }
 return 1;
}
