
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum optdec { ____Placeholder_optdec } optdec ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int ) ;

enum optdec FUNC_1(const char* VAR_3)
{
 enum optdec VAR_4;
 if( (VAR_3 == ((void*)0))
    || (VAR_3[0] == 0) )
 return VAR_0;

 for(VAR_4=VAR_0; VAR_4<VAR_2; ++VAR_4)
 if(!FUNC_0(VAR_3, VAR_1[VAR_4])) return VAR_4;

 return VAR_2;
}
