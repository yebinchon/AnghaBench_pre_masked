
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {char const* result; int handle; } ;


 int FUNC_0 (struct skynet_context*) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (char const*,char**,int) ;

__attribute__((used)) static const char *
FUNC_4(struct skynet_context * VAR_0, const char * VAR_1) {
 char * VAR_2 = ((void*)0);
 int VAR_3 = FUNC_3(VAR_1, &VAR_2, 10);
 int VAR_4 = FUNC_0(VAR_0);
 FUNC_1(VAR_0->handle, VAR_3, VAR_4);
 FUNC_2(VAR_0->result, "%d", VAR_4);
 return VAR_0->result;
}
