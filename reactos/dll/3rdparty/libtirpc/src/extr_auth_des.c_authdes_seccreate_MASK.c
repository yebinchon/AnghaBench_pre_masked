
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct TYPE_3__ {char* n_bytes; scalar_t__ n_len; } ;
typedef TYPE_1__ netobj ;
typedef int des_block ;
typedef int AUTH ;


 int * FUNC_0 (char const*,TYPE_1__*,scalar_t__ const,char const*,int const*,int *) ;
 int FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char*) ;

AUTH *
FUNC_3(const char *VAR_0, const u_int VAR_1,
 const char *VAR_2, const des_block *VAR_3)
{
 u_char VAR_4[1024];
 netobj VAR_5;
 AUTH *VAR_6;

 if (! FUNC_1(VAR_0, (char *) VAR_4)) {



  return (((void*)0));
 }

 VAR_5.n_bytes = (char *) VAR_4;
 VAR_5.n_len = (u_int)FUNC_2((char *)VAR_4) + 1;
 VAR_6 = FUNC_0(VAR_0, &VAR_5, VAR_1, VAR_2,
     VAR_3, ((void*)0));
 return (VAR_6);
}
