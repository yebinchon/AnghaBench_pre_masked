
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_location ;
struct TYPE_4__ {int (* lookup_bookmark ) (int *,TYPE_1__*,int) ;} ;
typedef TYPE_1__ fz_document ;
typedef int fz_context ;
typedef int fz_bookmark ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,TYPE_1__*,int) ;

fz_location FUNC_2(fz_context *VAR_0, fz_document *VAR_1, fz_bookmark VAR_2)
{
 if (VAR_1 && VAR_1->lookup_bookmark)
  return VAR_1->lookup_bookmark(VAR_0, VAR_1, VAR_2);
 return FUNC_0((VAR_2>>16) & 0xffff, VAR_2 & 0xffff);
}
