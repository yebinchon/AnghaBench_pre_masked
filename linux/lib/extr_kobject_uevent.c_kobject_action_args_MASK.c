
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_uevent_env {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 char* FUNC_0 (char const*,char const*,char) ;
 scalar_t__ FUNC_1 (struct kobj_uevent_env*,char*,int,char const*,...) ;
 int FUNC_2 (struct kobj_uevent_env*) ;
 struct kobj_uevent_env* FUNC_3 (int,int ) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_4, size_t VAR_5,
          struct kobj_uevent_env **VAR_6)
{
 struct kobj_uevent_env *VAR_7 = ((void*)0);
 const char *VAR_8, *VAR_9, *VAR_10;
 int VAR_11;
 int VAR_12 = -VAR_0;

 if (VAR_5 && (VAR_4[VAR_5 - 1] == '\n' || VAR_4[VAR_5 - 1] == '\0'))
  VAR_5--;

 if (!VAR_5)
  return -VAR_0;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;


 if (VAR_5 < VAR_3 || !FUNC_4(VAR_4) ||
     FUNC_1(VAR_7, "SYNTH_UUID=%.*s", VAR_3, VAR_4))
  goto out;





 VAR_8 = VAR_4 + VAR_3;
 VAR_9 = VAR_4 + VAR_5 - 1;

 while (VAR_8 <= VAR_9) {
  if (*VAR_8 != ' ')
   goto out;


  VAR_10 = ++VAR_8;
  if (VAR_10 > VAR_9)
   goto out;

  VAR_4 = VAR_8;
  VAR_8 = FUNC_0(VAR_4, VAR_9, '=');
  if (!VAR_8 || VAR_8 > VAR_9 || *VAR_8 != '=')
   goto out;
  VAR_11 = VAR_8 - VAR_4;


  if (++VAR_8 > VAR_9)
   goto out;

  VAR_4 = VAR_8;
  VAR_8 = FUNC_0(VAR_4, VAR_9, ' ');
  if (!VAR_8)
   goto out;

  if (FUNC_1(VAR_7, "SYNTH_ARG_%.*s=%.*s",
       VAR_11, VAR_10, (int) (VAR_8 - VAR_4), VAR_4))
   goto out;
 }

 VAR_12 = 0;
out:
 if (VAR_12)
  FUNC_2(VAR_7);
 else
  *VAR_6 = VAR_7;
 return VAR_12;
}
