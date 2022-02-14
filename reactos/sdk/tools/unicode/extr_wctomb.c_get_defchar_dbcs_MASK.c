
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char def_char; } ;
struct dbcs_table {TYPE_1__ info; } ;
typedef unsigned char WCHAR ;



__attribute__((used)) static inline WCHAR FUNC_0( const struct dbcs_table *VAR_0, const char *VAR_1 )
{
    if (!VAR_1) return VAR_0->info.def_char;
    if (!VAR_1[1]) return (unsigned char)VAR_1[0];
    return ((unsigned char)VAR_1[0] << 8) | (unsigned char)VAR_1[1];
}
