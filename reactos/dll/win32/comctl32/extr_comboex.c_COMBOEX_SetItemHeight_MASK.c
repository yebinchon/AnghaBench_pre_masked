
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {scalar_t__ hwndSelf; scalar_t__ hwndCombo; } ;
struct TYPE_7__ {scalar_t__ left; scalar_t__ right; scalar_t__ top; scalar_t__ bottom; } ;
typedef TYPE_1__ RECT ;
typedef scalar_t__ INT ;
typedef TYPE_2__ COMBOEX_INFO ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,TYPE_1__*) ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,int ,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_4 (char*,int ,scalar_t__,...) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static INT FUNC_6 (COMBOEX_INFO const *VAR_6, INT VAR_7, UINT VAR_8)
{
    RECT VAR_9, VAR_10, VAR_11;



    if (VAR_6->hwndCombo)
       if (FUNC_2 (VAR_6->hwndCombo, VAR_1,
    VAR_7, VAR_8) == VAR_0) return VAR_0;

    FUNC_1 (VAR_6->hwndCombo, &VAR_9);
    FUNC_1 (VAR_6->hwndSelf, &VAR_10);
    FUNC_0 (VAR_6->hwndSelf, &VAR_11);

    VAR_8 = VAR_9.bottom-VAR_9.top
             + VAR_10.bottom-VAR_10.top
             - (VAR_11.bottom-VAR_11.top);
    FUNC_4("EX window=(%s), client=(%s)\n",
          FUNC_5(&VAR_10), FUNC_5(&VAR_11));
    FUNC_4("CB window=(%s), EX setting=(0,0)-(%d,%d)\n",
          FUNC_5(&VAR_10), VAR_10.right-VAR_10.left, VAR_8);
    FUNC_3 (VAR_6->hwndSelf, VAR_2, 0, 0,
    VAR_10.right-VAR_10.left, VAR_8,
    VAR_3 | VAR_5 | VAR_4);

    return 0;
}
