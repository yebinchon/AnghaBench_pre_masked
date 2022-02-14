
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct skynet_context {int dummy; } ;
struct logger {int handle; int filename; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (void const*,size_t,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct skynet_context * VAR_0, void *VAR_1, int VAR_2, int VAR_3, uint32_t VAR_4, const void * VAR_5, size_t VAR_6) {
 struct logger * VAR_7 = VAR_1;
 switch (VAR_2) {
 case 129:
  if (VAR_7->filename) {
   VAR_7->handle = FUNC_2(VAR_7->filename, "a", VAR_7->handle);
  }
  break;
 case 128:
  FUNC_1(VAR_7->handle, "[:%08x] ",VAR_4);
  FUNC_3(VAR_5, VAR_6 , 1, VAR_7->handle);
  FUNC_1(VAR_7->handle, "\n");
  FUNC_0(VAR_7->handle);
  break;
 }

 return 0;
}
