
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; scalar_t__ is_data; scalar_t__ has_strings; } ;
typedef TYPE_1__ RBinSection ;
typedef int RBinFile ;


 int * FUNC_0 (int ,char*) ;

__attribute__((used)) static bool FUNC_1(RBinFile *VAR_0, RBinSection *VAR_1) {
 if (VAR_1->has_strings || VAR_1->is_data) {
  return 1;
 }

 return FUNC_0 (VAR_1->name, "_const") != ((void*)0);
}
