
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* j_common_ptr ;
typedef int fz_context ;
struct TYPE_4__ {int * client_data; } ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(j_common_ptr VAR_0)
{
 if (VAR_0->client_data)
 {
  fz_context *VAR_1 = FUNC_0(VAR_0);
  FUNC_1(VAR_1, VAR_0->client_data);
  VAR_0->client_data = ((void*)0);
 }
}
