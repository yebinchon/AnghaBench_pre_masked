
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct authnone_private {int mcnt; int marshalled_client; } ;
typedef int mutex_t ;
typedef int bool_t ;
struct TYPE_6__ {TYPE_1__* x_ops; } ;
typedef TYPE_2__ XDR ;
struct TYPE_5__ {int (* x_putbytes ) (TYPE_2__*,int ,int ) ;} ;
typedef int AUTH ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct authnone_private* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static bool_t
FUNC_3(AUTH *VAR_2, XDR *VAR_3, u_int *VAR_4)
{
 struct authnone_private *VAR_5;
 bool_t VAR_6;
 extern mutex_t VAR_7;

 FUNC_0(VAR_3 != ((void*)0));

 VAR_5 = VAR_1;
 if (VAR_5 == ((void*)0)) {
  FUNC_1(&VAR_7);
  return (VAR_0);
 }
 VAR_6 = (*VAR_3->x_ops->x_putbytes)(VAR_3,
     VAR_5->marshalled_client, VAR_5->mcnt);
 FUNC_1(&VAR_7);
 return (VAR_6);
}
