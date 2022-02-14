
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct skynet_context {int * logfile; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int **,int *,int *) ;
 int FUNC_1 (struct skynet_context*) ;
 struct skynet_context* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct skynet_context*,int *,scalar_t__) ;
 scalar_t__ FUNC_4 (struct skynet_context*,char const*) ;

__attribute__((used)) static const char *
FUNC_5(struct skynet_context * VAR_0, const char * VAR_1) {
 uint32_t VAR_2 = FUNC_4(VAR_0, VAR_1);
 if (VAR_2 == 0)
  return ((void*)0);
 struct skynet_context * VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 FILE * VAR_4 = VAR_3->logfile;
 if (VAR_4) {

  if (FUNC_0(&VAR_3->logfile, VAR_4, ((void*)0))) {
   FUNC_3(VAR_0, VAR_4, VAR_2);
  }
 }
 FUNC_1(VAR_3);
 return ((void*)0);
}
