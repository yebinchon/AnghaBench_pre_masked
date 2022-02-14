
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ name; } ;
typedef TYPE_1__ Sdb ;


 char const* FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static const char *FUNC_1(Sdb *VAR_0) {
 return (VAR_0 && VAR_0->name)
  ? FUNC_0 ("%s.journal", VAR_0->name)
  : ((void*)0);
}
