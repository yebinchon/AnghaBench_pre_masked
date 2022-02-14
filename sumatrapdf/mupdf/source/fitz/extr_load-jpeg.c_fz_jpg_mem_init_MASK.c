
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* j_common_ptr ;
typedef int fz_context ;
struct TYPE_3__ {int client_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,char*) ;
 int VAR_4 ;
 int FUNC_3 (int,void*,int *,int *,int *,int ,int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_4(j_common_ptr VAR_5, fz_context *VAR_6)
{
 VAR_4 *VAR_1;
 VAR_1 = FUNC_1(VAR_6, VAR_4);
 if (!FUNC_3(VAR_1, (void *) VAR_6, ((void*)0), ((void*)0), ((void*)0),
    VAR_2, VAR_3,
    VAR_2, VAR_3, ((void*)0)))
 {
  FUNC_0(VAR_6, VAR_1);
  FUNC_2(VAR_6, VAR_0, "cannot initialize custom JPEG memory handler");
 }
 VAR_5->client_data = VAR_1;
}
