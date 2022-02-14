
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int grub_err_t ;
typedef TYPE_1__* grub_device_t ;
struct TYPE_3__ {int disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ,int ,char*) ;
 int VAR_4 ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static grub_err_t
FUNC_2 (grub_device_t VAR_5, char **VAR_6)
{
  *VAR_6 = FUNC_1 (VAR_2);
  if (*VAR_6)
    {
      FUNC_0 (VAR_5->disk,
                      VAR_3 / VAR_0,
                      VAR_1, VAR_2,
                      *VAR_6);
    }
  return VAR_4;
}
