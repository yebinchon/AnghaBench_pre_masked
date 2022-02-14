
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ left; scalar_t__ right; } ;
struct TYPE_4__ {TYPE_3__ rcFocus; } ;
typedef TYPE_1__ LISTVIEW_INFO ;
typedef int HDC ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline BOOL FUNC_3(const LISTVIEW_INFO *VAR_1, HDC VAR_2)
{
    return (VAR_1->rcFocus.left < VAR_1->rcFocus.right) ?
            FUNC_0(VAR_2, &VAR_1->rcFocus) : VAR_0;

}
