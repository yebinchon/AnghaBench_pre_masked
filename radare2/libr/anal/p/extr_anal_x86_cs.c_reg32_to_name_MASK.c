
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ut8 ;


 size_t FUNC_0 (char const* const*) ;

__attribute__((used)) static const char *FUNC_1(ut8 VAR_0) {
 const char * const VAR_1[] = {"eax", "ecx", "edx", "ebx", "esp", "ebp", "esi", "edi"};
 return VAR_0 < FUNC_0 (VAR_1) ? VAR_1[VAR_0] : "unk";
}
