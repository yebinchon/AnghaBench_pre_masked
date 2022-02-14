
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int encoding_id; } ;
typedef TYPE_1__ tt_name_record ;
typedef scalar_t__ WORD ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline WORD FUNC_1( const tt_name_record *VAR_1 )
{
    WORD VAR_2 = FUNC_0(VAR_1->encoding_id);
    if (VAR_2 == VAR_0) return 10008;
    return 10000 + VAR_2;
}
