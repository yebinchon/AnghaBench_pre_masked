
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ d_reclen; scalar_t__ d_ino; } ;
struct TYPE_6__ {char* dirname; TYPE_1__ ret; int handle; } ;
typedef int DWORD ;
typedef TYPE_2__ DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*) ;

DIR *
FUNC_6(const char *VAR_7)
{
 DWORD VAR_8;
 DIR *VAR_9;


 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8 == VAR_4)
 {
  VAR_6 = VAR_0;
  return ((void*)0);
 }
 if ((VAR_8 & VAR_3) != VAR_3)
 {
  VAR_6 = VAR_2;
  return ((void*)0);
 }

 VAR_9 = FUNC_2(sizeof(DIR));
 if (!VAR_9)
 {
  VAR_6 = VAR_1;
  return ((void*)0);
 }
 VAR_9->dirname = FUNC_2(FUNC_5(VAR_7) + 4);
 if (!VAR_9->dirname)
 {
  VAR_6 = VAR_1;
  FUNC_1(VAR_9);
  return ((void*)0);
 }
 FUNC_4(VAR_9->dirname, VAR_7);
 if (VAR_9->dirname[FUNC_5(VAR_9->dirname) - 1] != '/' &&
  VAR_9->dirname[FUNC_5(VAR_9->dirname) - 1] != '\\')
  FUNC_3(VAR_9->dirname, "\\");
 FUNC_3(VAR_9->dirname, "*");
 VAR_9->handle = VAR_5;
 VAR_9->ret.d_ino = 0;
 VAR_9->ret.d_reclen = 0;

 return VAR_9;
}
