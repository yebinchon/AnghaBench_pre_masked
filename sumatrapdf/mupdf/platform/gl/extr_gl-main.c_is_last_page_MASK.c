
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ chapter; scalar_t__ page; } ;
typedef TYPE_1__ fz_location ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(fz_location VAR_2)
{
 fz_location VAR_3 = FUNC_0(VAR_0, VAR_1);
 return (VAR_2.chapter == VAR_3.chapter && VAR_2.page == VAR_3.page);
}
