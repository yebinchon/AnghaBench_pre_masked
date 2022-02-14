
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int std_strings; int client_encoding; } ;
typedef TYPE_1__ PGconn ;


 size_t FUNC_0 (TYPE_1__*,char*,char const*,size_t,int*,int ,int ) ;

size_t
FUNC_1(PGconn *VAR_0,
       char *VAR_1, const char *VAR_2, size_t VAR_3,
       int *VAR_4)
{
 if (!VAR_0)
 {

  *VAR_1 = '\0';
  if (VAR_4)
   *VAR_4 = 1;
  return 0;
 }
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
          VAR_0->client_encoding,
          VAR_0->std_strings);
}
