
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int chapter; scalar_t__ page; } ;
typedef TYPE_1__ fz_location ;
struct TYPE_8__ {scalar_t__ (* make_bookmark ) (int *,TYPE_2__*,TYPE_1__) ;} ;
typedef TYPE_2__ fz_document ;
typedef int fz_context ;
typedef scalar_t__ fz_bookmark ;


 scalar_t__ FUNC_0 (int *,TYPE_2__*,TYPE_1__) ;

fz_bookmark FUNC_1(fz_context *VAR_0, fz_document *VAR_1, fz_location VAR_2)
{
 if (VAR_1 && VAR_1->make_bookmark)
  return VAR_1->make_bookmark(VAR_0, VAR_1, VAR_2);
 return (VAR_2.chapter<<16) + VAR_2.page;
}
