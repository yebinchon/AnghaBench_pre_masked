
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sversion; int std_strings; } ;
typedef TYPE_1__ PGconn ;


 unsigned char* FUNC_0 (TYPE_1__*,unsigned char const*,size_t,size_t*,int ,int) ;

unsigned char *
FUNC_1(PGconn *VAR_0,
      const unsigned char *VAR_1, size_t VAR_2,
      size_t *VAR_3)
{
 if (!VAR_0)
  return ((void*)0);
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
         VAR_0->std_strings,
         (VAR_0->sversion >= 90000));
}
