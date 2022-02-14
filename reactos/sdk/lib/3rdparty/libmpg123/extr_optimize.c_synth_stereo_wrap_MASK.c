
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int real ;
struct TYPE_5__ {int (* synth ) (int *,int,TYPE_1__*,int) ;} ;
typedef TYPE_1__ mpg123_handle ;


 int FUNC_0 (int *,int,TYPE_1__*,int) ;
 int FUNC_1 (int *,int,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(real *VAR_0, real *VAR_1, mpg123_handle *VAR_2)
{
 int VAR_3;
 VAR_3 = (VAR_2->synth)(VAR_0, 0, VAR_2, 0);
 VAR_3 += (VAR_2->synth)(VAR_1, 1, VAR_2, 1);
 return VAR_3;
}
