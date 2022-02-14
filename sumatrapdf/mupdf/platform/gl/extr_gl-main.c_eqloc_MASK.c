
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ chapter; scalar_t__ page; } ;
typedef TYPE_1__ fz_location ;



__attribute__((used)) static int FUNC_0(fz_location VAR_0, fz_location VAR_1)
{
 return VAR_0.chapter == VAR_1.chapter && VAR_0.page == VAR_1.page;
}
