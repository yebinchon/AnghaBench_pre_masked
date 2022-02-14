
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hash_variant_t ;





 int FUNC_0 () ;

__attribute__((used)) static const char *
FUNC_1(hash_variant_t VAR_0) {
 switch (VAR_0) {
 case 128: return "hash_x86_32";
 case 129: return "hash_x86_128";
 case 130: return "hash_x64_128";
 default: FUNC_0();
 }
}
