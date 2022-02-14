
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct complex_expr {TYPE_1__* left; TYPE_2__* right; } ;
typedef scalar_t__ UINT ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {scalar_t__ type; } ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline BOOL FUNC_0( const struct complex_expr *VAR_6, UINT VAR_7, UINT VAR_8 )
{
    if (VAR_7 == VAR_0 && VAR_6->left->type == VAR_2 &&
        (VAR_6->right->type == VAR_3 || VAR_6->right->type == VAR_1)) return VAR_5;
    else if (VAR_8 == VAR_0 && VAR_6->right->type == VAR_2 &&
             (VAR_6->left->type == VAR_3 || VAR_6->left->type == VAR_1)) return VAR_5;
    return VAR_4;
}
