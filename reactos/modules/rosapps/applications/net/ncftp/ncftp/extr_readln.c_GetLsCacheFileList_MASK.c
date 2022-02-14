
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fil; } ;
typedef int * FileInfoListPtr ;


 int FUNC_0 (char const* const,char,char*,int *) ;
 int FUNC_1 (char const* const) ;
 int FUNC_2 (int *,int,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static FileInfoListPtr
FUNC_3(const char *const VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4;
 FileInfoListPtr VAR_5;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 < 0) {



  FUNC_0(VAR_1, 'l', "", ((void*)0));
  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2 < 0)
   return ((void*)0);
 }

 VAR_3 = 'n';
 VAR_4 = 'a';
 VAR_5 = &VAR_0[VAR_2].fil;
 FUNC_2(VAR_5, VAR_3, VAR_4);
 return VAR_5;
}
