
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* io_channel ;
typedef scalar_t__ errcode_t ;
struct TYPE_7__ {TYPE_1__* manager; } ;
struct TYPE_6__ {scalar_t__ (* set_option ) (TYPE_2__*,char*,char*) ;} ;


 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (scalar_t__) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,char*,char*) ;

errcode_t FUNC_7(io_channel VAR_3, const char *VAR_4)
{
 errcode_t VAR_5 = 0;
 char *VAR_6, *VAR_7, *VAR_8, *VAR_9;

 FUNC_0(VAR_3, VAR_1);

 if (!VAR_4)
  return 0;

 if (!VAR_3->manager->set_option)
  return VAR_0;

 VAR_8 = FUNC_2(FUNC_5(VAR_4)+1);
 if (!VAR_8)
  return VAR_2;
 FUNC_4(VAR_8, VAR_4);
 VAR_7 = VAR_8;

 while (VAR_7 && *VAR_7) {
  VAR_6 = FUNC_3(VAR_7, '&');
  if (VAR_6)
   *VAR_6++ = 0;

  VAR_9 = FUNC_3(VAR_7, '=');
  if (VAR_9)
   *VAR_9++ = 0;

  VAR_5 = (VAR_3->manager->set_option)(VAR_3, VAR_7, VAR_9);
  if (VAR_5)
   break;
  VAR_7 = VAR_6;
 }
 FUNC_1(VAR_8);
 return VAR_5;
}
