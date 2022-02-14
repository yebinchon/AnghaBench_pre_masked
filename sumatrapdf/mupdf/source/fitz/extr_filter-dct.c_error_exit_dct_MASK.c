
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* j_common_ptr ;
struct TYPE_10__ {int * ctx; } ;
typedef TYPE_3__ fz_dctd ;
typedef int fz_context ;
struct TYPE_9__ {TYPE_1__* err; } ;
struct TYPE_8__ {int (* format_message ) (TYPE_2__*,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ,char*,char*) ;
 int FUNC_2 (TYPE_2__*,char*) ;

__attribute__((used)) static void FUNC_3(j_common_ptr VAR_2)
{
 char VAR_3[VAR_1];
 fz_dctd *VAR_4 = FUNC_0(VAR_2);
 fz_context *VAR_5 = VAR_4->ctx;
 VAR_2->err->format_message(VAR_2, VAR_3);
 FUNC_1(VAR_5, VAR_0, "jpeg error: %s", VAR_3);
}
