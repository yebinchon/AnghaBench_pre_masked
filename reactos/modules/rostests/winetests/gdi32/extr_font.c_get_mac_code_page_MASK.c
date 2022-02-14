
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int encoding_id; } ;
typedef TYPE_1__ sfnt_name ;
typedef int WORD ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline WORD FUNC_1( const sfnt_name *VAR_1 )
{
    if (FUNC_0(VAR_1->encoding_id) == VAR_0) return 10008;
    return 10000 + FUNC_0(VAR_1->encoding_id);
}
