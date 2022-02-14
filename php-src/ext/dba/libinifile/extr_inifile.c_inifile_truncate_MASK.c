
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fp; } ;
typedef TYPE_1__ inifile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*,int) ;
 int FUNC_1 (int ,size_t,int ) ;
 int FUNC_2 (int ,size_t) ;

__attribute__((used)) static int FUNC_3(inifile *VAR_4, size_t VAR_5)
{
 int VAR_6;

 if ((VAR_6=FUNC_2(VAR_4->fp, VAR_5)) != 0) {
  FUNC_0(((void*)0), VAR_0, "Error in ftruncate: %d", VAR_6);
  return VAR_1;
 }
 FUNC_1(VAR_4->fp, VAR_5, VAR_2);
 return VAR_3;
}
