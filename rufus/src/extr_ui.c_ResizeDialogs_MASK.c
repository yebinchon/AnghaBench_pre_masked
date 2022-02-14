
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_4__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ POINT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_5 (int ,int *,int ,int ,scalar_t__,scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_6(int VAR_8)
{
 RECT VAR_9;
 POINT VAR_10;


 FUNC_2(VAR_7, &VAR_9);
 VAR_10.x = (VAR_9.right - VAR_9.left);
 VAR_10.y = (VAR_9.bottom - VAR_9.top);
 FUNC_4(VAR_7, VAR_9.left, VAR_9.top, VAR_10.x, VAR_10.y + VAR_8, VAR_4);


 FUNC_2(VAR_6, &VAR_9);
 VAR_10.x = (VAR_9.right - VAR_9.left);
 VAR_10.y = (VAR_9.bottom - VAR_9.top);
 FUNC_4(VAR_6, VAR_9.left, VAR_9.top, VAR_10.x, VAR_10.y + VAR_8, VAR_4);
 FUNC_3(VAR_6, VAR_1, VAR_8);
 FUNC_3(VAR_6, VAR_2, VAR_8);
 FUNC_3(VAR_6, VAR_0, VAR_8);
 FUNC_2(VAR_5, &VAR_9);
 VAR_10.x = (VAR_9.right - VAR_9.left);
 VAR_10.y = (VAR_9.bottom - VAR_9.top) + VAR_8;
 FUNC_5(VAR_5, ((void*)0), 0, 0, VAR_10.x, VAR_10.y, VAR_3);

 FUNC_1(VAR_5, 0, FUNC_0(VAR_5));
}
