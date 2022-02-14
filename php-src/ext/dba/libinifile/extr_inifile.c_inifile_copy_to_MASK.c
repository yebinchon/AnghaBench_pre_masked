
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int php_stream ;
struct TYPE_5__ {int fp; } ;
typedef TYPE_1__ inifile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int ,char*,...) ;
 int FUNC_2 (int ,int *,size_t,int *) ;
 int FUNC_3 (int ,size_t,int ) ;
 int * FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(inifile *VAR_4, size_t VAR_5, size_t VAR_6, inifile **VAR_7)
{
 php_stream *VAR_8;

 if (VAR_5 == VAR_6) {
  *VAR_7 = ((void*)0);
  return VAR_3;
 }
 if ((VAR_8 = FUNC_4(0, 64 * 1024)) == ((void*)0)) {
  FUNC_1(((void*)0), VAR_0, "Could not create temporary stream");
  *VAR_7 = ((void*)0);
  return VAR_1;
 }

 if ((*VAR_7 = FUNC_0(VAR_8, 1, 0)) == ((void*)0)) {

  return VAR_1;
 }
 FUNC_3(VAR_4->fp, VAR_5, VAR_2);
 if (VAR_3 != FUNC_2(VAR_4->fp, VAR_8, VAR_6 - VAR_5, ((void*)0))) {
  FUNC_1(((void*)0), VAR_0, "Could not copy group [%zu - %zu] to temporary stream", VAR_5, VAR_6);
  return VAR_1;
 }
 return VAR_3;
}
