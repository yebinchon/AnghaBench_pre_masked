
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int did_layout; int (* layout ) (int *,TYPE_1__*,int ,int ,int ) ;} ;
typedef TYPE_1__ fz_document ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_3, fz_document *VAR_4)
{
 if (VAR_4 && VAR_4->layout && !VAR_4->did_layout)
 {
  VAR_4->layout(VAR_3, VAR_4, VAR_2, VAR_1, VAR_0);
  VAR_4->did_layout = 1;
 }
}
