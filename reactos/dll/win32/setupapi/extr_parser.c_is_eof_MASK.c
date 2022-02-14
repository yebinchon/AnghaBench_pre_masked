
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {scalar_t__ const* end; } ;
typedef scalar_t__ WCHAR ;
typedef int BOOL ;


 scalar_t__ const VAR_0 ;

__attribute__((used)) static inline BOOL FUNC_0( const struct parser *VAR_1, const WCHAR *VAR_2 )
{
    return (VAR_2 >= VAR_1->end || *VAR_2 == VAR_0);
}
