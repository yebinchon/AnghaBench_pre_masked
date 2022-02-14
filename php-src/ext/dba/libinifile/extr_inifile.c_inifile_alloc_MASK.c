
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int php_stream ;
struct TYPE_5__ {int readonly; int * fp; } ;
typedef TYPE_1__ inifile ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *) ;

inifile * FUNC_4(php_stream *VAR_1, int VAR_2, int VAR_3)
{
 inifile *VAR_4;

 if (!VAR_2) {
  if (!FUNC_3(VAR_1)) {
   FUNC_2(((void*)0), VAR_0, "Can't truncate this stream");
   return ((void*)0);
  }
 }

 VAR_4 = FUNC_1(sizeof(inifile), VAR_3);
 FUNC_0(VAR_4, 0, sizeof(inifile));
 VAR_4->fp = VAR_1;
 VAR_4->readonly = VAR_2;
 return VAR_4;
}
